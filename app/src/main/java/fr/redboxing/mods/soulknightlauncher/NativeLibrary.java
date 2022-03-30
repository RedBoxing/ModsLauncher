package fr.redboxing.mods.soulknightlauncher;

import android.content.Context;

public class NativeLibrary {
    public static native void init(Context ctx);

    public static native void changeFeature(Context context, int feature, int value, boolean bool, String str);

    public static native String[] getFeatureList();

    public static native String getTitle();

    public static native String getHeading();

    public static native String getIcon();

    public static native String getIconWebViewData();
}
