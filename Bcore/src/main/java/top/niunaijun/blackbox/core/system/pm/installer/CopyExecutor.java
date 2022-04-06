package top.niunaijun.blackbox.core.system.pm.installer;


import java.io.File;

import android.os.Build;
import top.niunaijun.blackbox.core.env.BEnvironment;
import top.niunaijun.blackbox.core.system.pm.BPackageSettings;
import top.niunaijun.blackbox.entity.pm.InstallOption;
import top.niunaijun.blackbox.utils.FileUtils;
import top.niunaijun.blackbox.utils.compat.NativeLibraryHelperCompat;

/**
 * Created by Milk on 4/24/21.
 * * ∧＿∧
 * (`･ω･∥
 * 丶　つ０
 * しーＪ
 * 此处无Bug
 * 拷贝文件相关
 */
public class CopyExecutor implements Executor {

    @Override
    public int exec(BPackageSettings ps, InstallOption option, int userId) {
        try {
            if (!option.isFlag(InstallOption.FLAG_SYSTEM)) {
                NativeLibraryHelperCompat.copyNativeBinaries(new File(ps.pkg.baseCodePath), BEnvironment.getAppLibDir(ps.pkg.packageName));
            }
        } catch (Exception e) {
            e.printStackTrace();
            return -1;
        }
        if (option.isFlag(InstallOption.FLAG_STORAGE)) {
            // 外部安装
            File origFile = new File(ps.pkg.baseCodePath);
            File newFile = BEnvironment.getBaseApkDir(ps.pkg.packageName);
            try {
                if (option.isFlag(InstallOption.FLAG_URI_FILE)) {
                    boolean b = FileUtils.renameTo(origFile, newFile);
                    if (!b) {
                        FileUtils.copyFile(origFile, newFile);
                    }
                } else {
                    FileUtils.copyFile(origFile, newFile);
                }
                // update baseCodePath
                ps.pkg.baseCodePath = newFile.getAbsolutePath();

                String[] splitCodePaths = null;
                if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
                    if(ps.pkg.splitNames != null) {
                        splitCodePaths = ps.pkg.splitCodePaths;
                        for(int i = 0; i < ps.pkg.splitNames.length; i++) {
                            File splitFile = new File(ps.pkg.splitCodePaths[i]);
                            File newSplitFile = new File(BEnvironment.getAppDir(ps.pkg.packageName), ps.pkg.splitNames[i] + ".apk");
                            FileUtils.copyFile(splitFile, newSplitFile);
                            NativeLibraryHelperCompat.copyNativeBinaries(newSplitFile, BEnvironment.getAppLibDir(ps.pkg.packageName));
                            splitCodePaths[i] = new File(BEnvironment.getAppDir(ps.pkg.packageName), ps.pkg.splitNames[i]).getAbsolutePath();
                        }
                    }
                }

                ps.pkg.splitCodePaths = splitCodePaths;
            } catch (Exception e) {
                e.printStackTrace();
                return -1;
            }
        } else if (option.isFlag(InstallOption.FLAG_SYSTEM)) {
            // 系统安装
        }
        return 0;
    }
}
