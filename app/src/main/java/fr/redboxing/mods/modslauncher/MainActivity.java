package fr.redboxing.mods.modslauncher;

import android.app.AlertDialog;
import android.content.pm.PackageManager;
import android.graphics.*;
import android.os.*;
import android.util.Log;
import android.view.Gravity;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;
import android.widget.*;
import androidx.appcompat.app.AppCompatActivity;
import com.google.gson.Gson;
import com.google.gson.JsonObject;
import fr.redboxing.mods.modslauncher.data.LoginRepository;
import fr.redboxing.mods.modslauncher.mods.Mod;
import fr.redboxing.mods.modslauncher.mods.ModsItemAdapter;
import fr.redboxing.mods.modslauncher.utils.AES;
import fr.redboxing.mods.modslauncher.utils.WebUtils;
import org.json.JSONObject;
import top.niunaijun.blackbox.BlackBoxCore;
import top.niunaijun.blackbox.core.system.pm.BPackage;
import top.niunaijun.blackbox.core.system.pm.BPackageSettings;
import top.niunaijun.blackbox.core.system.user.BUserHandle;
import top.niunaijun.blackbox.entity.pm.InstallResult;
import top.niunaijun.blackbox.fake.frameworks.BPackageManager;
import top.niunaijun.blackbox.fake.frameworks.BXposedManager;
import top.niunaijun.blackbox.utils.FileUtils;

import javax.crypto.BadPaddingException;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.NoSuchPaddingException;
import java.io.*;
import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;
import java.util.Arrays;

public class MainActivity extends AppCompatActivity {
    public static final String SERVER_URL = "https://api.redboxing.fr";

    private AlertDialog.Builder builder;
    private AlertDialog alertDialog;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        ListView listView = findViewById(R.id.modsListView);
        ArrayList<Mod> mods = new ArrayList<>();

        try {
            WebUtils.postString(SERVER_URL + "/api/mods", new JSONObject().put("token", AES.encrypt(LoginRepository.getInstance(null).getToken())),
                result -> {
                    try {
                        String decrypted = AES.decrypt(result);
                        JsonObject jsonObject = new Gson().fromJson(decrypted, JsonObject.class);
                        if(jsonObject.get("success").getAsBoolean()) {
                            mods.addAll((Arrays.asList(new Gson().fromJson(jsonObject.get("mods"), Mod[].class))));
                            ModsItemAdapter modsItemAdapter = new ModsItemAdapter(this, mods);
                            listView.setAdapter(modsItemAdapter);
                        } else {
                            Toast.makeText(this, "An error occured while loading mods list !", Toast.LENGTH_SHORT).show();
                            Log.e("MainActivity", jsonObject.get("error").getAsString());
                        }
                    } catch (NoSuchPaddingException | NoSuchAlgorithmException | InvalidAlgorithmParameterException | InvalidKeyException | BadPaddingException | IllegalBlockSizeException e) {
                        e.printStackTrace();
                    }
                }, error -> {
                    error.printStackTrace();
                    Toast.makeText(this, "An error occured while loading mods list !", Toast.LENGTH_SHORT).show();
                }
            );
        } catch (Exception e) {
            e.printStackTrace();
        }

        Handler handler = new Handler(getMainLooper());

        listView.setOnItemClickListener((parent, view, position, id) -> {
            Mod mod = (Mod) parent.getItemAtPosition(position);

            if(!this.isAppInstalled(mod.getPackage())) {
                builder = new AlertDialog.Builder(this);
                builder.setTitle(mod.getName() + " is not installed !");
                builder.setMessage("You need to install " + mod.getName() + " v" + mod.getVersion() + " !");
                builder.create().show();
            } else if(this.isAppInstalled(mod.getPackage()) && !this.isVAppInstalled(mod.getPackage()) && !this.getAppVersion(mod.getPackage()).equals(mod.getVersion())) {
                builder = new AlertDialog.Builder(this);
                builder.setTitle("Incompatible version !");
                builder.setMessage("You need to update " + mod.getName() + " to version " + mod.getVersion() + " !");
                builder.create().show();
            } else if(this.isAppInstalled(mod.getPackage()) && !this.isVAppInstalled(mod.getPackage()) && this.getAppVersion(mod.getPackage()).equals(mod.getVersion())) {
                alertDialog = setProgressDialog("Downloading " + mod.getName() + " v" + mod.getVersion());

                this.updateMod(mod, () -> {
                    Toast.makeText(this, "Successfully downloaded " + mod.getName() + " v" + mod.getVersion() + " !", Toast.LENGTH_SHORT).show();
                    handler.post(() -> {
                        alertDialog.dismiss();
                        BlackBoxCore.get().launchApk(mod.getPackage(), 0);
                    });
                }, () -> {
                    alertDialog.dismiss();
                    Toast.makeText(this, "An error occured while updating mod !", Toast.LENGTH_SHORT).show();
                });
            } else if(this.isAppInstalled(mod.getPackage()) && this.isVAppInstalled(mod.getPackage()) && this.getAppVersion(mod.getPackage()).equals(mod.getVersion()) && !this.getVAppVersion(mod.getPackage()).equals(mod.getVersion())) {
                alertDialog = setProgressDialog("Updating " + mod.getName() + " v" + mod.getVersion());

                this.updateMod(mod, () -> {
                    Toast.makeText(this, "Successfully updated " + mod.getName() + " v" + mod.getVersion() + " !", Toast.LENGTH_SHORT).show();
                    handler.post(() -> {
                        alertDialog.dismiss();
                        BlackBoxCore.get().launchApk(mod.getPackage(), 0);
                    });
                }, () -> {
                    alertDialog.dismiss();
                    Toast.makeText(this, "An error occured while updating mod !", Toast.LENGTH_SHORT).show();
                });
            } else if(this.isAppInstalled(mod.getPackage()) && this.isVAppInstalled(mod.getPackage()) && this.getAppVersion(mod.getPackage()).equals(mod.getVersion()) && this.getVAppVersion(mod.getPackage()).equals(mod.getVersion())) {
                alertDialog = setProgressDialog("Launching " + mod.getName() + "...");

                updateMod(mod, () -> {
                    Toast.makeText(this, "Launching " + mod.getName() + " v" + mod.getVersion() + " !", Toast.LENGTH_SHORT).show();
                    handler.post(() -> {
                        alertDialog.dismiss();
                        BlackBoxCore.get().launchApk(mod.getPackage(), 0);
                    });
                }, () -> {
                    Toast.makeText(this, "An error occured while updating mod !", Toast.LENGTH_SHORT).show();
                });
            } else {
                Toast.makeText(this, "An error occured while launching the mod !", Toast.LENGTH_SHORT).show();
            }
        });
    }

    private void updateMod(Mod mod, Runnable callback, Runnable errorCallback) {
        if(!BlackBoxCore.get().isInstalledXposedModule(mod.getModPackage()) || !BPackageManager.get().getPackageInfo(mod.getModPackage(),0 , BUserHandle.USER_XPOSED).versionName.equals(mod.getModVersion()) || !BlackBoxCore.get().isInstalled(mod.getPackage(), 0) || !BlackBoxCore.getBPackageManager().getPackageInfo(mod.getPackage(), 0, 0).versionName.equals(mod.getVersion())) {
            new Handler(Looper.getMainLooper()).post(() -> {
                try {
                    if (!BlackBoxCore.get().isInstalled(mod.getPackage(), 0) || !BPackageManager.get().getPackageInfo(mod.getPackage(), 0, 0).versionName.equals(mod.getVersion())) {
                        InstallResult installResult = BlackBoxCore.get().installPackageAsUser(mod.getPackage(), 0);
                        if (!installResult.success) {
                            Log.e("MainActivity", installResult.msg);
                            errorCallback.run();
                            return;
                        } else {
                          /*  BPackageSettings ps = BPackageManager.get().getPackageSetting(mod.getPackage(), 0);
                            Log.e("MainActivity", "Package setting: " + ps);
                            Log.e("MainActivity", "Package: " + ps.pkg);
                            Log.e("MainActivity", "applicationInfo: " + ps.pkg.applicationInfo);
                            ServiceInfo serviceInfo = new ServiceInfo();
                            serviceInfo.applicationInfo = ps.pkg.applicationInfo;
                            serviceInfo.enabled = true;
                            serviceInfo.name = mod.getModPackage() + ".FloatingService";

                            String[] outError = new String[1];
                            PackageParser.Package pkg = new PackageParser.Package(ps.pkg.packageName);
                            pkg.applicationInfo = ps.pkg.applicationInfo;
                            PackageParser.ParseComponentArgs args = new PackageParser.ParseComponentArgs(pkg, outError, 0, 0, 0, 0, 0, 0, null, 0, 0, 1);
                            Log.e("MainActivity", "outError: " + Arrays.toString(outError));
                            PackageParser.Service service = new PackageParser.Service(args, serviceInfo);
                            PackageParser.ServiceIntentInfo serviceIntentInfo = new PackageParser.ServiceIntentInfo(service);
                            service.intents.add(serviceIntentInfo);
                            ps.pkg.services.add(new BPackage.Service(service));
                            ps.save();
                            Log.e("MainActivity", "Service added");*/
                        }
                    }

                    if (!BlackBoxCore.get().isInstalled(mod.getModPackage(), BUserHandle.USER_XPOSED) || !BPackageManager.get().getPackageInfo(mod.getModPackage(), 0, BUserHandle.USER_XPOSED).versionName.equals(mod.getModVersion())) {
                        WebUtils.downloadFile(SERVER_URL + "/api/mods/" + mod.getPackage() + "/get", new JSONObject().put("token", AES.encrypt(LoginRepository.getInstance(null).getToken())),
                                response -> {
                                    try {
                                        byte[] decrypted = AES.decrypt(response);

                                        File file = new File(getFilesDir(), mod.getPackage() + "-" + mod.getVersion() + ".apk");
                                        FileOutputStream fileOutputStream = new FileOutputStream(file);
                                        fileOutputStream.write(decrypted);
                                        fileOutputStream.close();

                                        InstallResult result = BlackBoxCore.get().installXPModule(file);
                                        Log.d("BlackBox", "Install result : { success: " + result.success + ", msg: " + result.msg + " }");
                                        file.delete();

                                        if (result.success) {
                                            if (!BXposedManager.get().isModuleEnable(mod.getModPackage())) {
                                                BXposedManager.get().setModuleEnable(mod.getModPackage(), true);
                                            }

                                            callback.run();
                                        } else {
                                            errorCallback.run();
                                        }
                                    } catch (Exception e) {
                                        e.printStackTrace();
                                        errorCallback.run();
                                    }
                                },
                                Throwable::printStackTrace
                        );
                    } else {
                        if (!BXposedManager.get().isModuleEnable(mod.getModPackage())) {
                            BXposedManager.get().setModuleEnable(mod.getModPackage(), true);
                        }

                        callback.run();
                    }
                } catch(Exception e){
                    e.printStackTrace();
                }
            });
        } else {
            if (!BXposedManager.get().isModuleEnable(mod.getModPackage())) {
                BXposedManager.get().setModuleEnable(mod.getModPackage(), true);
            }
            callback.run();
        }
    }

    private void copyAppFiles(File source, File target) throws IOException {
        if(source.listFiles() == null || source.listFiles().length == 0) return;

        for(File file : source.listFiles()) {
            if(file.isDirectory()) {
                copyAppFiles(file, new File(target, file.getName()));
            } else {
                FileUtils.copyFile(file, new File(target, file.getName()));
            }
        }
    }

    private String getAppVersion(String pkg) {
        try {
            return this.getPackageManager().getPackageInfo(pkg, 0).versionName;
        } catch (PackageManager.NameNotFoundException ex) {
            ex.printStackTrace();
        }
        return "N/A";
    }

    private String getVAppVersion(String pkg) {
        return BPackageManager.get().getPackageInfo(pkg, 0, 0).versionName;
    }

    private boolean isAppInstalled(String pkg) {
        return this.getPackageManager().getLaunchIntentForPackage(pkg) != null;
    }

    private boolean isVAppInstalled(String pkg) {
        return BPackageManager.get().getApplicationInfo(pkg, 0, 0) != null;
    }

    public AlertDialog setProgressDialog(String title) {
        int llPadding = 30;
        LinearLayout ll = new LinearLayout(this);
        ll.setOrientation(LinearLayout.HORIZONTAL);
        ll.setPadding(llPadding, llPadding, llPadding, llPadding);
        ll.setGravity(Gravity.CENTER);
        LinearLayout.LayoutParams llParam = new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.WRAP_CONTENT,
                LinearLayout.LayoutParams.WRAP_CONTENT);
        llParam.gravity = Gravity.CENTER;
        ll.setLayoutParams(llParam);

        ProgressBar progressBar = new ProgressBar(this);
        progressBar.setIndeterminate(true);
        progressBar.setPadding(0, 0, llPadding, 0);
        progressBar.setLayoutParams(llParam);

        llParam = new LinearLayout.LayoutParams(ViewGroup.LayoutParams.WRAP_CONTENT,
                ViewGroup.LayoutParams.WRAP_CONTENT);
        llParam.gravity = Gravity.CENTER;
        TextView tvText = new TextView(this);
        tvText.setText(title);
        tvText.setTextColor(Color.parseColor("#000000"));
        tvText.setTextSize(15);
        tvText.setLayoutParams(llParam);

        ll.addView(progressBar);
        ll.addView(tvText);

        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setCancelable(false);
        builder.setView(ll);

        AlertDialog dialog = builder.create();
        dialog.show();
        Window window = dialog.getWindow();
        if (window != null) {
            WindowManager.LayoutParams layoutParams = new WindowManager.LayoutParams();
            layoutParams.copyFrom(dialog.getWindow().getAttributes());
            layoutParams.width = LinearLayout.LayoutParams.WRAP_CONTENT;
            layoutParams.height = LinearLayout.LayoutParams.WRAP_CONTENT;
            dialog.getWindow().setAttributes(layoutParams);
        }

        return dialog;
    }
}