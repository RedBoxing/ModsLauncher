package fr.redboxing.mods.soulknight;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;

import java.util.function.Consumer;

public class MyBroadcastReceiver extends BroadcastReceiver {
    private final Mode mode;
    private Consumer<String[]> getFeatureCallback;
    private Consumer<String> getTitleCallback;
    private Consumer<String> getHeadingCallback;
    private Consumer<String> getIconCallback;
    private Consumer<String> getIconWebViewDataCallback;

    public MyBroadcastReceiver(Mode mode) {
        this.mode = mode;
    }

    @Override
    public void onReceive(Context context, Intent intent) {
        if(this.mode == Mode.GAME) {
            switch (intent.getAction()) {
                case "fr.redboxing.mods.soulknight.INIT":
                    NativeLibrary.init(context);
                    break;
                case "fr.redboxing.mods.soulknight.CHANGE_FEATURE":
                    NativeLibrary.changeFeature(context,
                            intent.getIntExtra("feature", 0),
                            intent.getIntExtra("value", 0),
                            intent.getBooleanExtra("bool", false),
                            intent.getStringExtra("str")
                    );
                    break;
                case "fr.redboxing.mods.soulknight.GET_FEATURES":
                    String[] features = NativeLibrary.getFeatureList();
                    Intent i = new Intent("fr.redboxing.mods.soulknight.FEATURES");
                    i.putExtra("features", features);
                    context.sendBroadcast(i);
                    break;
                case "fr.redboxing.mods.soulknight.GET_TITLE":
                    String title = NativeLibrary.getTitle();
                    Intent i2 = new Intent("fr.redboxing.mods.soulknight.TITLE");
                    i2.putExtra("title", title);
                    context.sendBroadcast(i2);
                    break;
                case "fr.redboxing.mods.soulknight.GET_HEADING":
                    String heading = NativeLibrary.getHeading();
                    Intent i3 = new Intent("fr.redboxing.mods.soulknight.HEADING");
                    i3.putExtra("heading", heading);
                    context.sendBroadcast(i3);
                    break;
                case "fr.redboxing.mods.soulknight.GET_ICON":
                    String icon = NativeLibrary.getIcon();
                    Intent i4 = new Intent("fr.redboxing.mods.soulknight.ICON");
                    i4.putExtra("icon", icon);
                    context.sendBroadcast(i4);
                    break;
                case "fr.redboxing.mods.soulknight.GET_ICON_WEBVIEW_DATA":
                    String iconWebViewData = NativeLibrary.getIconWebViewData();
                    Intent i5 = new Intent("fr.redboxing.mods.soulknight.ICON_WEBVIEW_DATA");
                    i5.putExtra("iconWebViewData", iconWebViewData);
                    context.sendBroadcast(i5);
                    break;
            }
        } else if(this.mode == Mode.MENU) {
            switch (intent.getAction()) {
                case "fr.redboxing.mods.soulknight.FEATURES":
                    String[] features = intent.getStringArrayExtra("features");
                    if(this.getFeatureCallback != null) {
                        this.getFeatureCallback.accept(features);
                    }
                    break;
                case "fr.redboxing.mods.soulknight.TITLE":
                    String title = intent.getStringExtra("title");
                    if(this.getTitleCallback != null) {
                        this.getTitleCallback.accept(title);
                    }
                    break;
                case "fr.redboxing.mods.soulknight.HEADING":
                    String heading = intent.getStringExtra("heading");
                    if(this.getHeadingCallback != null) {
                        this.getHeadingCallback.accept(heading);
                    }
                    break;
                case "fr.redboxing.mods.soulknight.ICON":
                    String icon = intent.getStringExtra("icon");
                    if(this.getIconCallback != null) {
                        this.getIconCallback.accept(icon);
                    }
                    break;
                case "fr.redboxing.mods.soulknight.ICON_WEBVIEW_DATA":
                    String iconWebViewData = intent.getStringExtra("iconWebViewData");
                    if(this.getIconWebViewDataCallback != null) {
                        this.getIconWebViewDataCallback.accept(iconWebViewData);
                    }
                    break;
            }
        }
    }

    public Consumer<String[]> getGetFeatureCallback() {
        return getFeatureCallback;
    }

    public void setGetFeatureCallback(Consumer<String[]> getFeatureCallback) {
        this.getFeatureCallback = getFeatureCallback;
    }

    public Consumer<String> getGetTitleCallback() {
        return getTitleCallback;
    }

    public void setGetTitleCallback(Consumer<String> getTitleCallback) {
        this.getTitleCallback = getTitleCallback;
    }

    public Consumer<String> getGetHeadingCallback() {
        return getHeadingCallback;
    }

    public void setGetHeadingCallback(Consumer<String> getHeadingCallback) {
        this.getHeadingCallback = getHeadingCallback;
    }

    public Consumer<String> getGetIconCallback() {
        return getIconCallback;
    }

    public void setGetIconCallback(Consumer<String> getIconCallback) {
        this.getIconCallback = getIconCallback;
    }

    public Consumer<String> getGetIconWebViewDataCallback() {
        return getIconWebViewDataCallback;
    }

    public void setGetIconWebViewDataCallback(Consumer<String> getIconWebViewDataCallback) {
        this.getIconWebViewDataCallback = getIconWebViewDataCallback;
    }

    enum Mode {
        GAME,
        MENU
    }
}
