package fr.redboxing.mods.soulknight;

import android.content.Context;
import android.content.SharedPreferences;

public class Preferences {
    private static SharedPreferences.Editor editor;
    public static Context context;
    public static boolean savePref = false, animation = false, expanded = false;

    public static void changeFeatureInt(String feature, int featureId, int value) {
        NativeLibrary.changeFeature(context, featureId, value, false, feature);
        editor.putInt(String.valueOf(featureId), value).apply();
    }

    public static  void changeBool(String feature, int featureId, boolean value) {
        if (featureId == 1001)
            animation = value;
        if (featureId == 1002)
            expanded = value;
        if (featureId == 9998)
            savePref = value;
        NativeLibrary.changeFeature(context, featureId, 0, value, feature);
        editor.putBoolean(String.valueOf(featureId), value).apply();
    }

    public static int loadPrefInt(String featureName, int featureNum) {
        if (savePref) {
            SharedPreferences preferences = context.getSharedPreferences("soul_knight_jni_mod", 0);
            editor = preferences.edit();
            int i = preferences.getInt(String.valueOf(featureNum), 0);
            NativeLibrary.changeFeature(context, featureNum, i, false, featureName);
            return i;
        }
        return 0;
    }

    public static boolean loadPrefBoolean(String featureName, int featureNum) {
        SharedPreferences preferences = context.getSharedPreferences("soul_knight_jni_mod", 0);
        if (featureNum >= 9998) {
            savePref = preferences.getBoolean(String.valueOf(featureNum), false);
        }
        if (savePref || featureNum >= 1000) {
            editor = preferences.edit();
            //if (featureNum == 1001 && !preferences.contains("1001"))
            //    return true;
            boolean bool = preferences.getBoolean(String.valueOf(featureNum), false);
            NativeLibrary.changeFeature(context, featureNum, 0, bool, featureName);
            return bool;
        }
        return false;
    }
}
