package fr.redboxing.mods.soulknight;

import android.app.AndroidAppHelper;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import de.robv.android.xposed.IXposedHookLoadPackage;
import de.robv.android.xposed.XposedBridge;
import de.robv.android.xposed.callbacks.XC_LoadPackage;

public class XposedInjector implements IXposedHookLoadPackage {
    @Override
    public void handleLoadPackage(XC_LoadPackage.LoadPackageParam lpparam) throws Throwable {
        if (!lpparam.packageName.equals("com.ChillyRoom.DungeonShooter"))
            return;

        XposedBridge.log("SKLauncher " + lpparam.packageName);

        try {
            //System.load("/data/local/tmp/libsaygus.so");
            System.loadLibrary("soulknight");

            Context ctx = AndroidAppHelper.currentApplication();
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
                ctx.startForegroundService(new Intent(ctx, FloatingService.class));
            } else {
                ctx.startService(new Intent(ctx, FloatingService.class));
            }

            XposedBridge.log("SKLauncher loaded library !");
        }catch (Exception e){
            e.printStackTrace();
        }
    }
}
