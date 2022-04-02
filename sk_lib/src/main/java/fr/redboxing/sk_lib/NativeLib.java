package fr.redboxing.sk_lib;

public class NativeLib {

    // Used to load the 'sk_lib' library on application startup.
    static {
        System.loadLibrary("sk_lib");
    }

    /**
     * A native method that is implemented by the 'sk_lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
}