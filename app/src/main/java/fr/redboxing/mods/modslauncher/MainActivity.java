package fr.redboxing.mods.modslauncher;

import android.annotation.SuppressLint;
import android.app.AlertDialog;
import android.app.ProgressDialog;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.graphics.Color;
import android.net.Uri;
import android.os.AsyncTask;
import android.os.Build;
import android.provider.Settings;
import android.util.Log;
import android.view.Gravity;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;
import android.widget.*;
import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import com.android.volley.RequestQueue;
import com.android.volley.toolbox.Volley;
import com.google.gson.Gson;
import com.lody.virtual.client.core.VirtualCore;
import com.lody.virtual.client.ipc.VActivityManager;
import com.lody.virtual.remote.InstallResult;
import fr.redboxing.mods.modslauncher.data.LoginRepository;
import fr.redboxing.mods.modslauncher.mods.Mod;
import fr.redboxing.mods.modslauncher.mods.ModsItemAdapter;
import fr.redboxing.mods.modslauncher.ui.login.LoginActivity;
import fr.redboxing.mods.modslauncher.utils.AES;
import fr.redboxing.mods.modslauncher.utils.WebUtils;
import okhttp3.*;
import org.json.JSONObject;

import javax.crypto.BadPaddingException;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.NoSuchPaddingException;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;
import java.util.Arrays;


public class MainActivity extends AppCompatActivity {
    public static final String SERVER_URL = "http://192.168.1.45:3000";

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
            WebUtils.postString(SERVER_URL + "/api/mods", new JSONObject().put("token", AES.encrypt(LoginRepository.getInstance(null).getUser().getToken())),
                result -> {
                    try {
                        String decrypted = AES.decrypt(result);
                        mods.addAll((Arrays.asList(new Gson().fromJson(decrypted, Mod[].class))));
                        ModsItemAdapter modsItemAdapter = new ModsItemAdapter(this, mods);
                        listView.setAdapter(modsItemAdapter);
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
                    launchApp(mod.getPackage());
                }, () -> {
                    alertDialog.dismiss();
                    Toast.makeText(this, "An error occured while updating mod !", Toast.LENGTH_SHORT).show();
                });
            } else if(this.isAppInstalled(mod.getPackage()) && this.isVAppInstalled(mod.getPackage()) && this.getAppVersion(mod.getPackage()).equals(mod.getVersion()) && this.getVAppVersion(mod.getPackage()).equals(mod.getVersion())) {
                alertDialog = setProgressDialog("Updating " + mod.getName() + " v" + mod.getVersion());

                this.updateMod(mod, () -> {
                    Toast.makeText(this, "Successfully updated " + mod.getName() + " v" + mod.getVersion() + " !", Toast.LENGTH_SHORT).show();
                    alertDialog.dismiss();
                    launchApp(mod.getPackage());
                }, () -> {
                    alertDialog.dismiss();
                    Toast.makeText(this, "An error occured while updating mod !", Toast.LENGTH_SHORT).show();
                });
            } else if(this.isAppInstalled(mod.getPackage()) && this.isVAppInstalled(mod.getPackage()) && this.getAppVersion(mod.getPackage()) == mod.getVersion() && this.getVAppVersion(mod.getPackage()) == mod.getVersion()) {
                updateMod(mod, () -> {
                    Toast.makeText(this, "Launching " + mod.getName() + " v" + mod.getVersion() + " !", Toast.LENGTH_SHORT).show();
                    launchApp(mod.getPackage());
                }, () -> {
                    Toast.makeText(this, "An error occured while updating mod !", Toast.LENGTH_SHORT).show();
                });
            } else {
                Toast.makeText(this, "An error occured while launching the mod !", Toast.LENGTH_SHORT).show();
            }
        });
    }

    private void updateMod(Mod mod, Runnable callback, Runnable errorCallback) {
        installApp(mod.getPackage());

        try {
            WebUtils.downloadFile(SERVER_URL + "/api/mods/" + mod.getPackage() + "/get", new JSONObject().put("token", AES.encrypt(LoginRepository.getInstance(null).getUser().getToken())),
                    response -> {
                        try {
                            byte[] decrypted = AES.decrypt(response);

                            new File(getFilesDir() + "/" + mod.getPackage() + "/" + mod.getVersion()).mkdirs();
                            File file = new File(getFilesDir() + "/" + mod.getPackage() + "/" + mod.getVersion() + "/" + mod.getPackage() + "-" + mod.getVersion() + ".apk");
                            FileOutputStream fileOutputStream = new FileOutputStream(file);
                            fileOutputStream.write(decrypted);
                            fileOutputStream.close();

                            InstallResult result = VirtualCore.get().installPackage(file.getAbsolutePath(), 0);
                            Log.e("InstallResult", result.toString());
                            file.delete();

                            if(result.isSuccess) {
                                callback.run();
                            } else {
                                errorCallback.run();
                            }
                        } catch (InvalidAlgorithmParameterException | NoSuchPaddingException | IllegalBlockSizeException | NoSuchAlgorithmException | BadPaddingException | InvalidKeyException | IOException e) {
                            e.printStackTrace();
                        }
                    },
                    Throwable::printStackTrace);
        } catch (Exception e) {
            e.printStackTrace();
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
        try {
            return VirtualCore.get().getPackageManager().getPackageInfo(pkg, 0).versionName;
        } catch (PackageManager.NameNotFoundException ex) {
            ex.printStackTrace();
        }
        return "N/A";
    }

    private boolean isAppInstalled(String pkg) {
        return this.getPackageManager().getLaunchIntentForPackage(pkg) != null;
    }

    private boolean isVAppInstalled(String pkg) {
        return VirtualCore.get().getInstalledAppInfo(pkg, 0) != null;
    }

    public void launchApp(String pkg)
    {
        Intent launch = VirtualCore.get().getLaunchIntent(pkg, 0);
        VActivityManager.get().startActivity(launch, 0);
    }

    public void installApp(String pkg) {
        try {
            VirtualCore.get().installPackage(getPackageManager().getApplicationInfo(pkg, 0).sourceDir, 0);
        } catch (PackageManager.NameNotFoundException ex) {
            ex.printStackTrace();
        }
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
        builder.setCancelable(true);
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