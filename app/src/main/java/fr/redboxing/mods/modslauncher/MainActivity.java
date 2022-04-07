package fr.redboxing.mods.modslauncher;

import android.app.AlertDialog;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.content.pm.PackageParser;
import android.content.pm.ServiceInfo;
import android.graphics.*;
import android.net.Uri;
import android.os.*;
import android.provider.Settings;
import android.util.Log;
import android.view.Gravity;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;
import android.widget.*;
import androidx.appcompat.app.AppCompatActivity;
import brut.androlib.Androlib;
import brut.androlib.AndrolibException;
import brut.androlib.ApkDecoder;
import brut.androlib.options.BuildOptions;
import com.google.gson.Gson;
import com.google.gson.JsonObject;
import fr.redboxing.mods.modslauncher.data.LoginRepository;
import fr.redboxing.mods.modslauncher.mods.Mod;
import fr.redboxing.mods.modslauncher.mods.ModsItemAdapter;
import fr.redboxing.mods.modslauncher.utils.AES;
import fr.redboxing.mods.modslauncher.utils.WebUtils;
import org.json.JSONObject;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import top.niunaijun.blackbox.BlackBoxCore;
import top.niunaijun.blackbox.core.system.pm.BPackageSettings;
import top.niunaijun.blackbox.core.system.user.BUserHandle;
import top.niunaijun.blackbox.entity.pm.InstallResult;
import top.niunaijun.blackbox.fake.frameworks.BPackageManager;
import top.niunaijun.blackbox.fake.frameworks.BXposedManager;
import top.niunaijun.blackbox.utils.FileUtils;

import javax.crypto.BadPaddingException;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.NoSuchPaddingException;
import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.transform.Transformer;
import javax.xml.transform.TransformerFactory;
import javax.xml.transform.dom.DOMSource;
import javax.xml.transform.stream.StreamResult;
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

        if (Build.VERSION.SDK_INT >= 23) {
            if (!Settings.canDrawOverlays(this)) {
                Intent intent = new Intent(Settings.ACTION_MANAGE_OVERLAY_PERMISSION,
                        Uri.parse("package:" + getPackageName()));
                startActivityForResult(intent, 1234);
                return;
            }
        }

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
                    alertDialog.dismiss();
                    BlackBoxCore.get().launchApk(mod.getPackage(), 0);
                }, () -> {
                    alertDialog.dismiss();
                    Toast.makeText(this, "An error occured while updating mod !", Toast.LENGTH_SHORT).show();
                });
            } else if(this.isAppInstalled(mod.getPackage()) && this.isVAppInstalled(mod.getPackage()) && this.getAppVersion(mod.getPackage()).equals(mod.getVersion()) && !this.getVAppVersion(mod.getPackage()).equals(mod.getVersion())) {
                alertDialog = setProgressDialog("Updating " + mod.getName() + " v" + mod.getVersion());

                this.updateMod(mod, () -> {
                    Toast.makeText(this, "Successfully updated " + mod.getName() + " v" + mod.getVersion() + " !", Toast.LENGTH_SHORT).show();
                    alertDialog.dismiss();
                    BlackBoxCore.get().launchApk(mod.getPackage(), 0);
                }, () -> {
                    alertDialog.dismiss();
                    Toast.makeText(this, "An error occured while updating mod !", Toast.LENGTH_SHORT).show();
                });
            } else if(this.isAppInstalled(mod.getPackage()) && this.isVAppInstalled(mod.getPackage()) && this.getAppVersion(mod.getPackage()).equals(mod.getVersion()) && this.getVAppVersion(mod.getPackage()).equals(mod.getVersion())) {
                alertDialog = setProgressDialog("Launching " + mod.getName() + "...");

                updateMod(mod, () -> {
                    Toast.makeText(this, "Launching " + mod.getName() + " v" + mod.getVersion() + " !", Toast.LENGTH_SHORT).show();
                    alertDialog.dismiss();
                    BlackBoxCore.get().launchApk(mod.getPackage(), 0);
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
                        // patch app's manifest
                        File appDir = new File(getFilesDir(), "tmp/" + mod.getPackage());
                        if(!appDir.exists()) {
                            appDir.mkdirs();
                        }

                        File origDir = new File(getPackageManager().getApplicationInfo(mod.getPackage(), 0).sourceDir).getParentFile();
                        copyAppFiles(origDir, appDir);

                        File apk = new File(appDir, "base.apk");

                      /*  try {
                            patchAPK(apk, mod);
                        } catch (Exception ex) {
                            ex.printStackTrace();
                            errorCallback.run();
                            return;
                        }*/

                        InstallResult installResult = BlackBoxCore.get().installPackageAsUser(new File(getPackageManager().getApplicationInfo(mod.getPackage(), 0).sourceDir), 0);
                        if (!installResult.success) {
                            Log.e("MainActivity", installResult.msg);
                            errorCallback.run();
                            return;
                        } else {
                            BPackageSettings ps = BPackageManager.get().getPackageSetting(mod.getPackage());
                            PackageParser.Package pkg = ps.pkg.parsedPackage;

                            ServiceInfo serviceInfo = new ServiceInfo();
                            serviceInfo.applicationInfo = pkg.applicationInfo;
                            serviceInfo.enabled = true;
                            serviceInfo.name = mod.getModPackage() + ".FloatingService";

                            PackageParser.ParseComponentArgs args = new PackageParser.ParseComponentArgs(null, null, 0, 0, 0, 0, 0, null, 0, 0, 0);
                            PackageParser.Service service = new PackageParser.Service(args, serviceInfo);
                            ps.pkg.services.add(service);
                            ps.save();
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

    private void patchAPK(File apk, Mod mod) throws Exception {
        File outputDir = new File(getFilesDir() + "/" + mod.getPackage());
        File frameworkDir = new File(getFilesDir() + "/framework");
        if(outputDir.exists()) outputDir.delete();

        File apktoolJar = new File(getFilesDir() + "/apktool.jar");
        if(!apktoolJar.exists()) {
            FileOutputStream os = new FileOutputStream(apktoolJar);
            InputStream is = getAssets().open("apktool_2.6.1.jar");

            byte[] buffer = new byte[1024];
            int length;
            while ((length = is.read(buffer)) > 0) {
                os.write(buffer, 0, length);
            }

            is.close();
            os.close();
        }

        ApkDecoder apkDecoder = new ApkDecoder();
        apkDecoder.setDecodeAssets((short) 0x0000);
        apkDecoder.setDecodeSources((short) 0x0000);
        //apkDecoder.setDecodeResources((short) 0x0100);
        apkDecoder.setForceDelete(true);
        apkDecoder.setFrameworkDir(frameworkDir.getAbsolutePath());
        apkDecoder.setOutDir(outputDir);
        apkDecoder.setApkFile(apk);

        try {
            apkDecoder.decode();
        } finally {
            apkDecoder.close();
        }

        File manifestFile = new File(outputDir, "AndroidManifest.xml");

        // patch manifest to add service entry to application using DOM
        DocumentBuilderFactory factory = DocumentBuilderFactory.newInstance();
        DocumentBuilder builder = factory.newDocumentBuilder();
        Document document = builder.parse(new FileInputStream(manifestFile));
        Element root = document.getDocumentElement();
        Element application = (Element) root.getElementsByTagName("application").item(0);
        Element service = document.createElement("service");
        service.setAttribute("android:name", (mod.getModPackage() + ".FloatingService"));
        application.appendChild(service);

        // write patched manifest to base.apk
        TransformerFactory transformerFactory = TransformerFactory.newInstance();
        Transformer transformer = transformerFactory.newTransformer();
        DOMSource source = new DOMSource(document);

        StreamResult resultStream = new StreamResult(new FileOutputStream(manifestFile));
        transformer.transform(source, resultStream);

        File patchedBaseApk = new File(outputDir, "base.apk");

        BuildOptions buildOptions = new BuildOptions();
        buildOptions.frameworkFolderLocation = frameworkDir.getAbsolutePath();
        Androlib androlib = new Androlib(buildOptions);
        androlib.build(outputDir,patchedBaseApk);

        // copy patched base.apk to data/app/
        apk.delete();
        FileUtils.copyFile(patchedBaseApk, apk);

        outputDir.delete();
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