package fr.redboxing.mods.soulknight;

import android.app.Activity;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import de.robv.android.xposed.IXposedHookLoadPackage;
import de.robv.android.xposed.XC_MethodHook;
import de.robv.android.xposed.XposedBridge;
import de.robv.android.xposed.XposedHelpers;
import de.robv.android.xposed.callbacks.XC_LoadPackage;
import top.niunaijun.blackbox.BlackBoxCore;
import top.niunaijun.blackbox.fake.frameworks.BActivityManager;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.lang.reflect.Field;

public class XposedInjector implements IXposedHookLoadPackage {
    @Override
    public void handleLoadPackage(XC_LoadPackage.LoadPackageParam lpparam) throws Throwable {
        if (!lpparam.packageName.equals("com.ChillyRoom.DungeonShooter"))
            return;

        XposedBridge.log("Loaded xposed module for " + lpparam.packageName);

        try {
            Class.forName("de.robv.android.xposed.XposedBridge");
            ClassLoader classLoader = lpparam.classLoader;
            XposedHelpers.findAndHookMethod("com.chillyroomsdk.googleplay.MainActivity", lpparam.classLoader, "onCreate", Bundle.class, new XC_MethodHook() {
                @Override
                protected void afterHookedMethod(MethodHookParam param) throws Throwable {
                    Class<?> unityPlayer = classLoader.loadClass("com.unity3d.player.UnityPlayer");
                    Field currentActivityField = unityPlayer.getDeclaredField("currentActivity");
                    Activity currentActivity = (Activity) currentActivityField.get(null);

                    try {
                        XposedBridge.log("Loading libsoulknight.so...");
                        System.loadLibrary("soulknight");
                    } catch (UnsatisfiedLinkError e) {
                        new File(currentActivity.getFilesDir(), "libs/libsoulknight.so").delete();
                        File lib = extractNativeLibrary(currentActivity, "soulknight");
                        XposedBridge.log("Loading " + lib.getAbsolutePath() + "...");
                        System.load(lib.getAbsolutePath());
                        XposedBridge.log("libsoulknight.so loaded !");
                    }

                    if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
                        Intent intent = new Intent(BlackBoxCore.getContext(), FloatingService.class);
                        ComponentName name = BlackBoxCore.getContext().startForegroundService(intent);
                        XposedBridge.log("Starting service " + name);

                        // TODO: start service in the app and setup inter-app communication (broadcastreceiver)
                        /*MyBroadcastReceiver receiver = new MyBroadcastReceiver(MyBroadcastReceiver.Mode.GAME);
                        IntentFilter filter = new IntentFilter();
                        filter.addAction("fr.redboxing.mods.soulknight.INIT");
                        filter.addAction("fr.redboxing.mods.soulknight.CHANGE_FEATURE");
                        filter.addAction("fr.redboxing.mods.soulknight.GET_FEATURES");
                        filter.addAction("fr.redboxing.mods.soulknight.GET_TITLE");
                        filter.addAction("fr.redboxing.mods.soulknight.GET_HEADING");
                        filter.addAction("fr.redboxing.mods.soulknight.GET_ICON");
                        filter.addAction("fr.redboxing.mods.soulknight.GET_ICON_WEBVIEW_DATA");
                        currentActivity.registerReceiver(receiver, filter);*/
                    } else {
                        currentActivity.startService(new Intent(currentActivity, FloatingService.class));
                    }
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private static File extractNativeLibrary(Context ctx, String libraryName) throws IOException {
        String abi = Build.SUPPORTED_ABIS[0];
        String soName = "lib" + libraryName + ".so";
        File dir = new File(ctx.getFilesDir(), "libs");
        if (!dir.isDirectory()) {
            if (dir.isFile()) {
                dir.delete();
            }
            dir.mkdir();
        }
        File soFile = new File(dir, soName);
        if (!soFile.exists()) {
            InputStream in = XposedInjector.class.getClassLoader().getResourceAsStream("lib/" + abi + "/lib" + libraryName + ".so");
            if (in == null) {
                throw new UnsatisfiedLinkError("Unsupported ABI: " + abi);
            }
            //clean up old files
            for (String name : dir.list()) {
                if (name.startsWith("lib" + libraryName + "_")
                        || name.startsWith("lib" + libraryName + ".so")) {
                    new File(dir, name).delete();
                }
            }
            //extract so file
            soFile.createNewFile();
            FileOutputStream fout = new FileOutputStream(soFile);
            byte[] buf = new byte[1024];
            int i;
            while ((i = in.read(buf)) > 0) {
                fout.write(buf, 0, i);
            }
            in.close();
            fout.flush();
            fout.close();
        }
        return soFile;
    }
}
