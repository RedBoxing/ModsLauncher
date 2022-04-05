package fr.redboxing.mods.modslauncher;

import android.app.AlertDialog;
import android.content.ComponentName;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.graphics.Color;
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
import brut.androlib.ApkDecoder;
import brut.androlib.options.BuildOptions;
import brut.common.BrutException;
import brut.util.AaptManager;
import brut.util.OSDetection;
import com.google.gson.Gson;
import com.google.gson.JsonObject;
import com.lody.virtual.client.core.InstallStrategy;
import com.lody.virtual.client.core.VirtualCore;
import com.lody.virtual.client.ipc.VActivityManager;
import com.lody.virtual.client.ipc.VPackageManager;
import com.lody.virtual.os.VEnvironment;
import com.lody.virtual.remote.InstallResult;
import fr.redboxing.mods.modslauncher.data.LoginRepository;
import fr.redboxing.mods.modslauncher.mods.Mod;
import fr.redboxing.mods.modslauncher.mods.ModsItemAdapter;
import fr.redboxing.mods.modslauncher.utils.AES;
import fr.redboxing.mods.modslauncher.utils.WebUtils;
import org.json.JSONObject;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.xml.sax.SAXException;
import org.xmlpull.v1.XmlPullParserException;
import org.zeroturnaround.zip.ZipUtil;

import javax.crypto.BadPaddingException;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.NoSuchPaddingException;
import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import javax.xml.transform.Transformer;
import javax.xml.transform.TransformerException;
import javax.xml.transform.TransformerFactory;
import javax.xml.transform.dom.DOMSource;
import javax.xml.transform.stream.StreamResult;
import java.io.*;
import java.lang.reflect.Field;
import java.lang.reflect.Modifier;
import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import static fr.redboxing.mods.modslauncher.VirtualApp.XPOSED_INSTALLER_PACKAGE;


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

        try {
            this.ensureXposed();
        } catch (IOException e) {
            e.printStackTrace();
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
                    launchApp(mod.getPackage());
                    Intent intent = new Intent();
                    intent.setComponent(new ComponentName(mod.getPackage(), mod.getPackage() + ".FloatingActivity"));
                    VActivityManager.get().startActivity(intent, 0);
                }, () -> {
                    alertDialog.dismiss();
                    Toast.makeText(this, "An error occured while updating mod !", Toast.LENGTH_SHORT).show();
                });
            } else if(this.isAppInstalled(mod.getPackage()) && this.isVAppInstalled(mod.getPackage()) && this.getAppVersion(mod.getPackage()).equals(mod.getVersion()) && !this.getVAppVersion(mod.getPackage()).equals(mod.getVersion())) {
                alertDialog = setProgressDialog("Updating " + mod.getName() + " v" + mod.getVersion());

                this.updateMod(mod, () -> {
                    Toast.makeText(this, "Successfully updated " + mod.getName() + " v" + mod.getVersion() + " !", Toast.LENGTH_SHORT).show();
                    alertDialog.dismiss();
                    launchApp(mod.getPackage());
                    Intent intent = new Intent();
                    intent.setComponent(new ComponentName(mod.getPackage(), mod.getPackage() + ".FloatingActivity"));
                    VActivityManager.get().startActivity(intent, 0);
                }, () -> {
                    alertDialog.dismiss();
                    Toast.makeText(this, "An error occured while updating mod !", Toast.LENGTH_SHORT).show();
                });
            } else if(this.isAppInstalled(mod.getPackage()) && this.isVAppInstalled(mod.getPackage()) && this.getAppVersion(mod.getPackage()).equals(mod.getVersion()) && this.getVAppVersion(mod.getPackage()).equals(mod.getVersion())) {
                alertDialog = setProgressDialog("Launching " + mod.getName() + "...");

                updateMod(mod, () -> {
                    Toast.makeText(this, "Launching " + mod.getName() + " v" + mod.getVersion() + " !", Toast.LENGTH_SHORT).show();
                    alertDialog.dismiss();
                    launchApp(mod.getPackage());

                    Intent intent = new Intent();
                    intent.setComponent(new ComponentName(mod.getModPackage(), (mod.getModPackage() + ".FloatingService")));
                    ComponentName cm = VActivityManager.get().startService(null, intent, null, 0);
                }, () -> {
                    Toast.makeText(this, "An error occured while updating mod !", Toast.LENGTH_SHORT).show();
                });
            } else {
                Toast.makeText(this, "An error occured while launching the mod !", Toast.LENGTH_SHORT).show();
            }
        });
    }

    private void updateMod(Mod mod, Runnable callback, Runnable errorCallback) {
        new Handler(Looper.getMainLooper()).post(() -> {
            installApp(mod.getPackage());

            try {
                WebUtils.downloadFile(SERVER_URL + "/api/mods/" + mod.getPackage() + "/get", new JSONObject().put("token", AES.encrypt(LoginRepository.getInstance(null).getToken())),
                        response -> {
                            try {
                                byte[] decrypted = AES.decrypt(response);

                                File file = new File(getFilesDir(), mod.getPackage() + "-" + mod.getVersion() + ".apk");
                                FileOutputStream fileOutputStream = new FileOutputStream(file);
                                fileOutputStream.write(decrypted);
                                fileOutputStream.close();

                                InstallResult result = VirtualCore.get().installPackage(file.getAbsolutePath(), InstallStrategy.UPDATE_IF_EXIST);
                                file.delete();

                                if(result.isSuccess) {
                                    this.enableXposedModule(VEnvironment.getDataAppPackageDirectory(result.packageName) + "/base.apk");
                                    // patch app's manifest
                                    File baseApk = new File(VEnvironment.getDataAppPackageDirectory(mod.getPackage()) + "/base.apk");
                                    File outputDir = new File(getFilesDir() + "/" + mod.getPackage());
                                    if(outputDir.exists()) outputDir.delete();

                                    try {
                                        Field osField = OSDetection.class.getDeclaredField("OS");
                                        osField.setAccessible(true);
                                        Field modifiersField = Field.class.getDeclaredField("accessFlags");
                                        modifiersField.setAccessible(true);
                                        modifiersField.setInt(osField,osField.getModifiers() & ~Modifier.FINAL);
                                        osField.set(null, "linux");

                                        Log.e("TEST", (String) osField.get(null));
                                    } catch (NoSuchFieldException | IllegalAccessException e) {
                                        e.printStackTrace();
                                    }

                                    ApkDecoder apkDecoder = new ApkDecoder();
                                    apkDecoder.setDecodeAssets((short) 0x0000);
                                    apkDecoder.setDecodeSources((short) 0x0000);
                                    apkDecoder.setDecodeResources((short) 0x0100);
                                    apkDecoder.setForceDecodeManifest((short) 0x0001);
                                    apkDecoder.setForceDelete(true);
                                    apkDecoder.setOutDir(outputDir);
                                    apkDecoder.setApkFile(baseApk);

                                    try {
                                        apkDecoder.decode();
                                    } catch (Exception e) {
                                        e.printStackTrace();
                                        errorCallback.run();
                                        return;
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
                                    Androlib androlib = new Androlib();
                                    androlib.build(outputDir,patchedBaseApk);

                                    // copy patched base.apk to data/app/
                                    if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.Q) {
                                        FileUtils.copy(new FileInputStream(patchedBaseApk), new FileOutputStream(baseApk));
                                    }

                                    outputDir.delete();

                                    callback.run();
                                } else {
                                    errorCallback.run();
                                }
                            } catch (InvalidAlgorithmParameterException | NoSuchPaddingException | IllegalBlockSizeException | NoSuchAlgorithmException | BadPaddingException | InvalidKeyException | IOException | ParserConfigurationException | SAXException | TransformerException e) {
                                e.printStackTrace();
                                errorCallback.run();
                            } catch (BrutException e) {
                                e.printStackTrace();
                            }
                        },
                        Throwable::printStackTrace);
            } catch (Exception e) {
                e.printStackTrace();
            }
        });
    }

    private void ensureXposed() throws IOException {
        if(!VirtualCore.get().isAppInstalled(XPOSED_INSTALLER_PACKAGE)) {
            AlertDialog alertDialog = setProgressDialog("Setting up...");

            InputStream is = this.getAssets().open("XposedInstaller_3.1.5.apk");
            File xposedInstallerApk = new File(getFilesDir() + "/XposedInstaller_3.1.5.apk");
            FileOutputStream fileOutputStream = new FileOutputStream(xposedInstallerApk);
            byte[] buffer = new byte[1024];
            int length;
            while ((length = is.read(buffer)) > 0) {
                fileOutputStream.write(buffer, 0, length);
            }
            fileOutputStream.close();
            is.close();

            if(!xposedInstallerApk.exists()) {
                alertDialog.dismiss();
                Toast.makeText(this, "Xposed installer not found !", Toast.LENGTH_SHORT).show();
                return;
            }

            InstallResult result = VirtualCore.get().installPackage(xposedInstallerApk.getAbsolutePath(), 0);
            xposedInstallerApk.delete();

            alertDialog.dismiss();
            if(!result.isSuccess) {
                Toast.makeText(this, "An error occured while installing Xposed !", Toast.LENGTH_SHORT).show();
            }
        }
    }

    private void enableXposedModule(String moduleFile) {
        if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.N) {
            File file = new File(VEnvironment.getDataUserPackageDirectory(0, XPOSED_INSTALLER_PACKAGE), "/exposed_conf/modules.list");
            try {
                if(!file.exists()) {
                    file.getParentFile().mkdirs();
                    file.createNewFile();
                }

                BufferedReader reader = new BufferedReader(new FileReader(file));
                String line = reader.readLine();
                boolean found = false;
                while(line != null) {
                    if(line.contains(moduleFile)) {
                        found = true;
                        reader.close();
                        break;
                    }

                    line = reader.readLine();
                }

                if(!found) {
                    BufferedWriter writer = new BufferedWriter(new FileWriter(file, true));
                    writer.write(moduleFile + "\n");
                    writer.close();
                }
            } catch (IOException e) {
                e.printStackTrace();
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
        return VPackageManager.get().getPackageInfo(pkg, 0, 0).versionName;
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