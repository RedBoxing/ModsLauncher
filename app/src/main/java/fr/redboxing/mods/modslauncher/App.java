package fr.redboxing.mods.modslauncher;

import android.annotation.SuppressLint;
import android.app.Application;
import android.content.Context;
import top.niunaijun.blackbox.BlackBoxCore;
import top.niunaijun.blackbox.app.configuration.ClientConfiguration;
import top.niunaijun.blackbox.fake.frameworks.BXposedManager;

public class App extends Application {
    @SuppressLint("StaticFieldLeak")
    public static Context CONTEXT;

    @Override
    public void onCreate() {
        super.onCreate();
        BlackBoxCore.get().doCreate();
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
            public boolean isEnableDaemonService() {
                return false;
            }

            @Override
            public boolean isEnableLauncherActivity() {
                return true;
            }
        });

       /* List<ApplicationInfo> apps = BlackBoxCore.get().getInstalledApplications(0, 0);
        for(ApplicationInfo app : apps) {
            BlackBoxCore.get().uninstallPackage(app.packageName);
        }*/

        if(!BlackBoxCore.get().isInstallGms(0)) {
            BlackBoxCore.get().installGms(0);
        }

        if(!BXposedManager.get().isXPEnable()) {
            BXposedManager.get().setXPEnable(true);
        }
    }
}
