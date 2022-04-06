package fr.redboxing.mods.modslauncher;

import android.annotation.SuppressLint;
import android.app.Application;
import android.content.Context;
import android.util.Log;
import top.niunaijun.blackbox.BlackBoxCore;
import top.niunaijun.blackbox.app.configuration.ClientConfiguration;
import top.niunaijun.blackbox.fake.frameworks.BXposedManager;
import top.niunaijun.blackbox.utils.compat.SystemPropertiesCompat;

public class App extends Application {
    @SuppressLint("StaticFieldLeak")
    public static Context CONTEXT;

    @Override
    public void onCreate() {
        super.onCreate();
        BlackBoxCore.get().doCreate();

        String arch = System.getProperty("os.arch");
        if(arch != null && arch.equals("aarch64")) {
            System.setProperty("sun.arch.data.model", "64");
        } else {
            System.setProperty("sun.arch.data.model", "32");
        }
    }

    @Override
    protected void attachBaseContext(Context base) {
        super.attachBaseContext(base);
        CONTEXT = base;
        BlackBoxCore.get().doAttachBaseContext(base, new ClientConfiguration() {
                @Override
                public String getHostPackageName() {
                    return base.getPackageName();
                }

            @Override
            public boolean isEnableLauncherActivity() {
                return false;
            }
        });

        if(!BlackBoxCore.get().isInstallGms(0)) {
            BlackBoxCore.get().installGms(0);
        }

        if(!BXposedManager.get().isXPEnable()) {
            BXposedManager.get().setXPEnable(true);
        }
    }
}