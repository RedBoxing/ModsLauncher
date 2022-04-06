package black.com.android.internal.content;

import java.io.File;

import top.niunaijun.blackreflection.annotation.BClassName;
import top.niunaijun.blackreflection.annotation.BField;
import top.niunaijun.blackreflection.annotation.BParamClassName;
import top.niunaijun.blackreflection.annotation.BStaticMethod;

@BClassName("com.android.internal.content.NativeLibraryHelper")
public interface NativeLibraryHelper {
    @BStaticMethod
    Integer copyNativeBinaries(@BParamClassName("com.android.internal.content.NativeLibraryHelper$Handle") Object Handle0, File File1, String String2);

    @BStaticMethod
    Integer findSupportedAbi(@BParamClassName("com.android.internal.content.NativeLibraryHelper$Handle") Object Handle0, @BParamClassName("[Ljava.lang.String;") String[] strings);

    @BClassName("com.android.internal.content.NativeLibraryHelper$Handle")
    interface Handle {
        @BField
        boolean extractNativeLibs();

        @BStaticMethod
        Object create(File File0);
    }
}
