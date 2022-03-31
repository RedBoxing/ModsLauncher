package fr.redboxing.mods.soulknightlauncher;

import android.annotation.SuppressLint;
import android.app.AlertDialog;
import android.app.ProgressDialog;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.graphics.Color;
import android.net.Uri;
import android.os.Build;
import android.provider.Settings;
import android.view.Gravity;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;
import android.widget.LinearLayout;
import android.widget.ProgressBar;
import android.widget.TextView;
import android.widget.Toast;
import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import com.lody.virtual.client.core.VirtualCore;
import com.lody.virtual.client.ipc.VActivityManager;


public class MainActivity extends AppCompatActivity {
    private static final String GAME_PACKAGE_NAME = "com.ChillyRoom.DungeonShooter";
    private static final String GAME_VERSION = "4.0.2";

    @SuppressLint("StaticFieldLeak")
    private static Context context;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        MainActivity.context = getApplicationContext();
        setContentView(R.layout.activity_main);

        if (Build.VERSION.SDK_INT >= 23) {
            if (!Settings.canDrawOverlays(this)) {
                Intent intent = new Intent(Settings.ACTION_MANAGE_OVERLAY_PERMISSION,
                        Uri.parse("package:" + getPackageName()));
                startActivityForResult(intent, 1234);
            }
        }

        if(!isGameInstalled(GAME_PACKAGE_NAME) || !this.getGameVersion(GAME_PACKAGE_NAME).equals(GAME_VERSION) || VirtualCore.get().getInstalledAppInfo(GAME_PACKAGE_NAME, 0) == null) {
            Toast.makeText(this, "Please wait while the game is being installed...", Toast.LENGTH_LONG).show();
            AlertDialog dialog = setProgressDialog();
            installApp(GAME_PACKAGE_NAME);
            dialog.dismiss();
            Toast.makeText(this, "Game installed successfully!", Toast.LENGTH_LONG).show();
        }

        if(isGameInstalled(GAME_PACKAGE_NAME) & this.getGameVersion(GAME_PACKAGE_NAME).equals(GAME_VERSION) & VirtualCore.get().getInstalledAppInfo(GAME_PACKAGE_NAME, 0) != null) {
            Toast.makeText(this, "Launching Game...", Toast.LENGTH_LONG).show();
            this.launchApp(GAME_PACKAGE_NAME);
            Toast.makeText(this, "Game launched successfully!", Toast.LENGTH_LONG).show();
        }
    }

    private String getGameVersion(String pkg) {
        try {
            return this.getPackageManager().getPackageInfo(pkg, 0).versionName;
        } catch (PackageManager.NameNotFoundException ex) {
            ex.printStackTrace();
        }
        return "N/A";
    }

    private boolean isGameInstalled(String pkg) {
        return this.getPackageManager().getLaunchIntentForPackage(pkg) != null;
    }

    private boolean isAppInstalled(String pkg) {
        return this.getPackageManager().getLaunchIntentForPackage(pkg) != null;
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

    public AlertDialog setProgressDialog() {
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
        tvText.setText("Loading ...");
        tvText.setTextColor(Color.parseColor("#000000"));
        tvText.setTextSize(20);
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

    public static Context getContext() {
        return context;
    }
}