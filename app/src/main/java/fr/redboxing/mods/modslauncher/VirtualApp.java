package fr.redboxing.mods.modslauncher;

import android.app.Application;
import android.content.Context;
import com.lody.virtual.client.core.VirtualCore;
import com.lody.virtual.client.stub.VASettings;

public class VirtualApp extends Application {
    public static final String XPOSED_INSTALLER_PACKAGE = "de.robv.android.xposed.installer";
    public static Context CONTEXT = null;

    @Override
    public void onCreate() {
        super.onCreate();
    }

    @Override
    protected void attachBaseContext(Context base) {
        super.attachBaseContext(base);
        CONTEXT = base;
        VASettings.ENABLE_IO_REDIRECT = true;
        VASettings.ENABLE_INNER_SHORTCUT = false;

        try {
            VirtualCore.get().startup(this);
        } catch (Throwable throwable) {
            throwable.printStackTrace();
        }
    }
}