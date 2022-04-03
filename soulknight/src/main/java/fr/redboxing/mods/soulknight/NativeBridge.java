package fr.redboxing.mods.soulknight;

import android.content.Context;
import android.content.Intent;

public class NativeBridge {
    public static void init(Context context) {
        Intent intent = new Intent("fr.redboxing.mods.soulknight.INIT");
        context.sendBroadcast(intent);
    }

    public static void changeFeature(Context context, int feature, int value, boolean bool, String str) {
        Intent intent = new Intent("fr.redboxing.mods.soulknight.CHANGE_FEATURE");
        intent.putExtra("feature", feature);
        intent.putExtra("value", value);
        intent.putExtra("bool", bool);
        intent.putExtra("str", str);
        context.sendBroadcast(intent);
    }

    public static void getFeatureList(Context context) {
        Intent intent = new Intent("fr.redboxing.mods.soulknight.GET_FEATURE_LIST");
        context.sendBroadcast(intent);
    }

    public static void getTitle(Context context) {
        Intent intent = new Intent("fr.redboxing.mods.soulknight.GET_TITLE");
        context.sendBroadcast(intent);
    }

    public static void getHeading(Context context) {
        Intent intent = new Intent("fr.redboxing.mods.soulknight.GET_HEADING");
        context.sendBroadcast(intent);
    }

    public static void getIcon(Context context) {
        Intent intent = new Intent("fr.redboxing.mods.soulknight.GET_ICON");
        context.sendBroadcast(intent);
    }

    public static void getIconWebViewData(Context context) {
        Intent intent = new Intent("fr.redboxing.mods.soulknight.GET_ICON_WEBVIEW_DATA");
        context.sendBroadcast(intent);
    }
}
