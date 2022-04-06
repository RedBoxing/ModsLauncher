package top.niunaijun.blackbox.utils.compat;

import android.os.Build;
import android.util.Log;
import black.com.android.internal.content.BRNativeLibraryHelper;
import black.com.android.internal.content.BRNativeLibraryHelperHandle;
import black.dalvik.system.BRVMRuntime;
import top.niunaijun.blackbox.utils.AbiUtils;

import java.io.File;
import java.util.List;

public class NativeLibraryHelperCompat {
    public static int copyNativeBinaries(File apkFile, File sharedLibraryFolder) {
        if(Build.VERSION.SDK_INT >= Build.VERSION_CODES.LOLLIPOP) {
            try {
                Object handle = BRNativeLibraryHelperHandle.getWithException().create(apkFile);

                String abi = null;
                AbiUtils abiUtils = new AbiUtils(apkFile);
                if(abiUtils.isEmptyAib()) {
                    return 0;
                }

                boolean is64 = BRVMRuntime.get(BRVMRuntime.get().getRuntime()).is64Bit();
                if(is64 && abiUtils.is64Bit()) {
                    if(Build.SUPPORTED_64_BIT_ABIS.length > 0) {
                        Integer i = BRNativeLibraryHelper.get().findSupportedAbi(handle, Build.SUPPORTED_64_BIT_ABIS);
                        if(i >= 0) {
                            abi = Build.SUPPORTED_64_BIT_ABIS[i];
                        }
                    }
                } else {
                    if(Build.SUPPORTED_32_BIT_ABIS.length > 0) {
                        Integer i = BRNativeLibraryHelper.get().findSupportedAbi(handle, Build.SUPPORTED_32_BIT_ABIS);
                        if(i >= 0) {
                            abi = Build.SUPPORTED_32_BIT_ABIS[i];
                        }
                    }
                }

                if(abi == null) {
                    Log.e("NativeLibraryHelperCompat", "copyNativeBinaries: no supported abi found");
                    return -1;
                }

                return BRNativeLibraryHelper.get().copyNativeBinaries(handle, sharedLibraryFolder, abi);
            } catch (Exception ex) {
                ex.printStackTrace();
                return -1;
            }
        }

        return -1;
    }
}
