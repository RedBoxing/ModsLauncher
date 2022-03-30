package fr.redboxing.mods.soulknightlauncher;

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
            System.loadLibrary("redboxing_soulknight");
            XposedBridge.log("SKLauncher loaded library !");
        }catch (Exception e){
            e.printStackTrace();
        }
    }
}
