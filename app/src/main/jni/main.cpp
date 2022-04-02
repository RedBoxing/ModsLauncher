#include <jni.h>

extern "C"
JNIEXPORT jbyteArray JNICALL Java_fr_redboxing_mods_modslauncher_utils_AES_getEncryptionKey(JNIEnv * env, jclass obj){
    jbyte bytes[] = { 91, -1, -59, 48, -103, 79, -47, 6, -3, 62, 84, 33, 25, -49, 73, -99, -54, 30, -20, -19, 24, -30, 33, -44, -117, 73, -95, -91, 99, -86, 43, -51 };
    jbyteArray ret = env->NewByteArray(32);
    env->SetByteArrayRegion (ret, 0, 32, bytes);
    return ret;
}

extern "C"
JNIEXPORT jbyteArray JNICALL Java_fr_redboxing_mods_modslauncher_utils_AES_getEncryptionInitVector(JNIEnv * env, jclass obj){
    jbyte bytes[] = { -112, -88, -37, -93, -101, -15, -45, -57, 4, -97, 41, -29, -42, 95, 21, 42 };
    jbyteArray ret = env->NewByteArray(16);
    env->SetByteArrayRegion (ret, 0, 16, bytes);
    return ret;
}