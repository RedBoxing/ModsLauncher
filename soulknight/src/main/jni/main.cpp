#include <pthread.h>
#include <jni.h>
#include <memory.h>
#include <dlfcn.h>
#include <cstdio>
#include <cstdlib>

#include "Patching/Patch.h"
#include "Patching/Memory.h"
#include "Includes/Utils.h"
#include "Includes/Logger.h"

bool firerate = false;

float (*old_test)(void *instance);
float test(void *instance) {
    
    return old_test(instance);
}

void* hack_thread(void*){
    //Il2CppAttach();

    //RGProtoWeapon::instance()->_addHP() = 250;

    LOGI(OBFUSCATE("Hooking Functions..."));

    //octo_hook((void*)RGProtoWeapon::Awake(), (void*)getlevel, (void**)&old_getlevel); //ExperianceController$getLevel (丝丞与东丏丂下丏丄)
   
    LOGI(OBFUSCATE("Mod Menu Initialized !"));
    return NULL;
}

extern "C"
JNIEXPORT void JNICALL Java_fr_redboxing_mods_soulknight_NativeLibrary_changeFeature(JNIEnv *env, jclass thisObj, jobject ctx, jint feature, jint value, jboolean boolean, jstring str) {
    const char *featureName = env->GetStringUTFChars(str, 0);
    LOGD(OBFUSCATE("Feature name: %d - %s | Value: = %d | Bool: = %d"), feature, featureName, value, boolean);

    switch (feature) {
        case 0:
            firerate = boolean;
            break;
        default:
            break;
    }
    return;
}

extern "C"
JNIEXPORT void JNICALL Java_fr_redboxing_mods_soulknight_NativeLibrary_init(JNIEnv * env, jclass obj, jobject thiz){
    MakeToast(env, thiz, OBFUSCATE("<b><font color=#ff0000>Mod by RedBoxing</font></b>"));
}

extern "C"
JNIEXPORT jstring JNICALL Java_fr_redboxing_mods_soulknight_NativeLibrary_getTitle(JNIEnv * env, jclass obj){
    return env->NewStringUTF(OBFUSCATE("<b>SOUL KNIGHT JNI MOD</b>"));
}

extern "C"
JNIEXPORT jstring JNICALL Java_fr_redboxing_mods_soulknight_NativeLibrary_getHeading(JNIEnv * env, jclass obj){
    return env->NewStringUTF(OBFUSCATE("<b><marquee><p style=\"font-size:30\">"
                                       "<p style=\"color:green;\">Modded by RedBoxing</p> | "
                                       "https://redboxing.fr</p>"
                                       "</marquee></b>"));
}

extern "C"
JNIEXPORT jstring JNICALL Java_fr_redboxing_mods_soulknight_NativeLibrary_getIcon(JNIEnv * env, jclass obj){
    return env->NewStringUTF(OBFUSCATE("iVBORw0KGgoAAAANSUhEUgAAADAAAAAwCAYAAABXAvmHAAAQBUlEQVRo3r2aa6wd11XHf2vvmTmv+/b19fX7ETtx4zgOsZ2kidrYVKgPFUqVprRQEEhVG0BqgZZ+ACEKAiGo+hRtlQoERC1VaAtV1UIjKDVt49Rtrx3Hdvx+xr72fd/zfszsvfgw51yfa187gQZG2joz+8zs+f/XWnuttdcey09/CGCBoH2uL3N/972vysv/t4dpt+Tmv5b3kM/34sm272xQqJWZmqosMU4A+Hb7fyFwM/DMpjsJ/CNZ8Q8Oi25dYfzq5aJ9y41G/TgiLy3Qkqpc8V5PtNADVfTZp8rTp35aIv9DAjtDGIsXpFzIvT0L7xk2+vCOyPVsjzyjVhkwSgioh8RDohB7peWh7pWqgykvled8uP+iBl9c19P85xcmJqo3v+PVIyBtqTtAyG94f6Dud7dEeufenOO+rGdVhOYNmhXBonivtJxSd+B8+mCHQC1RKTqRi2qY9Iam+lOJ8Ml/nZt8EtA9EOxLH9FXg4BtA4fchgdF3Ke3RvrgW3scD+XUD2fwBRETWTEZAxmBSBRRxfm0eYXYQTWBcqKUYmUuEV9x6puqpq5q6irUHAfqjg9+tjRzAOBxsF/pvPs24F4h+NW/0xvI02/tY+0Hljn/QC9+edbaQmBMNhTJB0IhEHKB0BNAIYLeUOiJLDlriMRgRDBiULGIWDHGGDEiIsYpgkfWOtHfuDebK4016j98EfRxsC/eRhPySsCb/MjnVkbhb354xLC3J0kyYmwYGYkFvPP0itIbGDJGsQI2FHxkKDlhom6YrQvFpqESG5re0PLQ9BA7T+IcaIL6RGtJ4urOB1XnKTl98qny7BMvpwm5jafxALYw+KU7suEvf2JN5O/JCRJiriXC4SnHlaLj0RHD/UMQRYY5b5jwhudLlkNFy/mW5ZoGlDBUxdAUQRFEhFCECMgBee8oJDH9SZ3+pOazPkbxpqn65S+VZn+FtiaWIiG3IKUANt//+Y1Z+8TH1mb9w/2Wywnmh9cchyYS8kZ565qArUOG8ZbwQtFytB4yFkecsxFFY2kYwYvAbRsIggGiuEm+OEVvveRHvWeZMcaKfuEbldkn2phuCpRyi8CSmFzfBwdC+dTfbMr7nX0B/3G1ZZ67klCMPWKEjX2W0Z6A85WAs5rjZLbAhTAiMdeBIabrXNLXmfYru0l0+lpNZO4qpjyNSRKfRxhRY5YZ86Ef1uc/0fZOye0IhEAc5voeCCz7f39N1r5tIPDPXGqZEzMJLVVaCIlYTBDSyuQ41TPI5UyWhjGLpHorad/U1yEMUK8iU5eR0jS4BFH1RjE9iBvy9vVnk/L+DsZuaXfbfQzghc/c22Ptz4/Y5OvHG8GlokPE48WQiMUHEdM9fRztH6YUBLc1D4zpAm4Wa8Z03YtCXAPR9FwVRY1Dk6IS1MV/CniojXFhjt5IwJt8//v7Qh58Yl3Gf/tU014rxWQN1MXgTIQNI84OreBk7wCJtS9j37IE0CX6jIAqNAyiHrxPrwEUq6hvorvDMPytOI7/eikC7dxmVd5I5ffuHwhwRa8T84nJGyUWg5gAE0Wc6+3nxOAyXBDeDGTJZtLRb0eqo4GypPnHAnhF0XYnJMoHgKeAUodENwFvs5XHFO7cnrf+ymRs8+JRA94YgjDiahhwLAhwUQBRlD62FJhbXnMbzYBYAeeuE+C6FtoS34K1j+Pc33YTkIXM0vCewAgrBT9f9yZnlIZYjA2ZtpYXmlWSKESMolEE3SZkbmc+LGE25mYNiCIuTvEvcFg48YAR5N0Kf9fGLMFCkpbp24LycCEQohYmi0/9s1i8sbwYN6klMTTr4GLIhNA9gU33b5f7NF3uU25h/x0C6lMNsITHV0z77EGIXgOtY4BZIGCtvh6RnoxBI4OJDCQIRoQZVS7GTRRFmnVoVNHQQDbTtvFbmQ+L/zcsQaZ9D4q4BJxbhF0QNL0y7e4eTPIongUCnQXEQ6QprxayIjWBqhNE4HwS4zpDOoeU5hB1aC67tORN+uJu21dzm3hg2pBbDfDuJukLoGmfAmJEHvDw+c4cSHN8ZSsCdae4QMhmDHNVcKrM4FNZdMJepYzUq2h2FdibJ7IskjwLfdr+NUCAx6IYUbyAE0HrNbz6Ns4bJvIia+LOdrKZdLxQAWQU0pXThYbn3v6IiVpM1SmJ6TiKNBGj1UBmJmHrXZDNXgduuDm6dp2LgXzc5G0XDrKuWWYoqdHCMJ/JMJXLMR7Oc7kAV+tQi7tzBkW0i4rqCqAXmEsJ5HL9CL1oak/75xPevCrLlZKnVXXk9Hr8AcArZnoSHzfQwb6UlFnKXaa/BiWfNBlsVhmKa9ieDKvcJI/OnqKWQFmFkgozecfsOsv5inBg1nG+qtQS8HqD/EV6gP7rBHyUxWrUueVIxXG86ti7LuI7F1qsbzpOp3K4njxVypipSdz6NTeA7yYBq8szPHrhCPdPX2Jzc47ltklP6CFOmK3ClTlhJjaUYqhXYmJgJCu8c3XIgTnH9yYTKom2jbitBSWCtOLRNiE1C+wUVhnLj4qeh6OAX9iYYXQmZqqYcNIpTZV0JsUJ5vQp/CO7IQoXSVwE7ipe45fOPMcvXjhIIVQyoeAszM56TkyH/GBoE4e3bOHipnUUBwdIpqbJfuyzDClsLCmj0441OeHn+gL+q5gwm/gbyxX2OgETNyGIO0Y275XlYrlSh1UKu/pC/ihreKbmONRUJhIoe2iMj9OolPCrRkEgQOl1Td4y+SK/ffr7rC9N4fKGStVz9iXPyXKW59fcwfcfey0XN62j3pNHjUHFIHNz1BXmVBnHs9sFrK1Cr4W7A8MhDyXf0QMx0LhOoF4va7a3JMIIwHji+WalRR9ZWt4wFMCIF341a3ksD+NOmXEw4xxzP/oe8ZaNZOMGw6UiG+cmuGfiAs1yzOGaMlH0TCYBh3ds57l3vI4Ld24iiaKbXWmj3vH3VBVOiGOUkKyHtRimAuV4C1QFcGWg3J3M1VSYENgM4BSOxwlPlhq8KYnYlbWsDS39VhlV2GCUSDyBBXfsGM0jR6i2PKWWoxx7jiXKnBiuLh/myN5t/OThXUwM9OGsTX1oZBe7XwTq9S63KcwrOFGGUYrAxsByquVTz6RmCnylQyAAnKg/DfJIJ3Q44CXn+Eq1wZFWwOuyAa+JLCsDYcBAAUNOFVVHXWHeWibzGcazOY5s3MAL923jwsgwU8dO4b/6LZgvp1If6IftW+H1u2DlcrBBCrpeX5ihtINTVpQegSaG0aCTcSgiekaVmDSZaSdzKmMq/Ho7bqoi4lWZ9XCgFXM0TlgbWNYHhtXW0G8gJ2nVbfquzby052EurhzhyugKin19+BNn4Ml/hFPnbghDl+HISTh6At77Trh7c5r/1OuLglZOhGXtGlNWICuiiU9X0B4OtZO5oJNKqPfNZ43JlBT6RPCoSmcV7VQoi3K8lXAyFgIBm46FB5JKi9Zrd+IH+tpeoAj/9E04fX7pYJokcOwMjB2F++5KS3a1RscJoigrEFZIep0TOJqoamqAZbw82x5VF1Y2xPFpRcfa7/PXs9n2kKp4VRLvaTql5j0152k4JRmfQi+NQyZI29VJuHAlHeUG8GItYmxKolJN54Mo2mjhVVEFo8L9xpJVQRDqAsdbiW8DOgTx8fZwrpPhBUBDvf+XhQWEtrF3cvKF1s6puvq0XEHGjqTqygTQbEIrxoQZwt6BhRBus3le+2vvZf0Dj6QkwiBNy9VDo7WwstphLNvE0AJqwI+913Oxs6RJ3TeAahtzJ4CllkBc/7qqnkZVUPUdnL7dUrxt0AvNp9J8/jhUK5ANYM0I0tfLXW94E4/98Z+Q618GCDbKsvvee1m5YmVqnJkwJew9NBoEwD3GstdaPFAEfqywv5X4RBHgDD75Wtv+F62Jfft8Sr37exH754BBVNHr2YOyyNN1J+3ouctwaRzWrYCNq2F4kGS+SDQzj28vUuJKiaf+6i+plYrkcAxYZTIUEu8IK3V2m4BdxlJAmVflBfUccE4rmgpa0S8C1zq1q6WKuzE+OYMN9gisanszs2QxT7uMWzVdJwwNwCM7kEKG8ORFGs/8O+P7v8sKX2NT5NmRdTzg53hLts5jg8ra/jyXcoNs+Np/8sizz7PVp7Z7Tj3f8Y4jztFIMViUQ2jyEWC2W3zdZZWOFmbVuz8TY58GidpxzUrHRcgN4u/47iSBo2dgYpZgwwp+dsiwczghTGKyVii0S+8iaS7lUXT/CXZ95+MUyhUy3nNFPafVcc57Kmk9wrWXvS0V9xc4pm4sbN2ogTTZUDeuJhDgdV1oZelKsC7Wzj13IHevZ5mL2TN2kJ5Wk7wVPMK8GooI8whXwhwv3HkPpU0bKA8PcLVU5vlalYuqaZKDeBCDGBHRj6tL/gFo3rgnZ2+BKMYnLxoJViJyb6dUJrctx7dTgsEBeGg7jeFhglKd04cv8K0Zz1fnLN8tG75fNjxXC/jxjl2c+/Qfcvnte3kpCrjy7GEqlWqa2InxxgSIDY0gT/uk/qdt0/GvdINDgLpq8hMRswkxW9saWGJOdNf2LOQL8DOvobZuFcdXruPoD04yOVOh1VMguWMt7u7NJCbCv+ONsPtubCshOHiG4MIkNshiw4wzUc6aIBIR+62kPvdh4GpbsK+YQMfQq6h7zkiwXES2d+1OyuLCcGdJaZFCD7J2JWbtCkxfL2Ghl8BE5D/wHgrvexf5+7YTFBsUhofprzn6rsyTbyrR8hENCv3O9vQGYiO0FT/dnLn0kTT3wHOLDY7gNjs0rg3ysneNPwiiwkuK+aCIyWBERUwiNrCSyYgpFAiWDRGsHiXavI7IFjBjl3DTJVpj55DeZWRrgjkxjrs6Q22yjMwfR6oOHR5Ur8aZoSEbJAQamGYyP/eZ+vipz6WS3+NgX3IrkMHL7JF1AsZ40qp+2ub6ng8yhQ+ZXM9OU+gJ7ECfBsuHkmB0xIRrRiRYPSKmr4CvNYnHTtM6cRFfrhFt3YDWWiTVFvH5q7ipecUYJXvZ20rTSiYKfKuFm5oeqx85+Mnq8we/C0zD4w6+4l6lbdZtIRwrAKN923a/O1yz9l3BqpEtwarl2GUDSCGHNmPvpudJLk6QvHQNX6phRpcRrF+FWdaHL9dJLl4hOXvRAJjBfhjqR8WfZmb66fl93/4ycJVt26ocOxa/WtusXfvcO0PGxgwwSD6/cnDvG94crFn3xrCvd4d32q9zFdxMETc5i1brkMtgRobTAJcJ0bki7toUfnoKTZKiBnJYiZ+pnT32b8TxVWCOnTs9Y6/+RvfiZ3a+L2DsCwHQBwxkNm3aHA6uvN94s02b8QaayTLCsEcKhZCeXiQTxl5dxc8VZ9z8/AVTKR5r1qYPutLcWWAOKLFzZ8LYmPs//tSg6/joRw379hn27ZP2ZuP1Fob5IFPowUYZrAUfN5NqsUIc14D6orZnj7Jv3//rxx63+tzGdLngoOujELo+4ki6IrvyCj8nuN3x31QF5dltayM3AAAAAElFTkSuQmCC"));
}

extern "C"
JNIEXPORT jstring JNICALL Java_fr_redboxing_mods_soulknight_NativeLibrary_getIconWebViewData(JNIEnv * env, jclass obj){
    return NULL;
}

extern "C"
JNIEXPORT jobjectArray JNICALL Java_fr_redboxing_mods_soulknight_NativeLibrary_getFeatureList(JNIEnv *env, jclass jobj){
    // Usage:
    // Category_(text)
    // Toggle_(feature name)
    // SeekBar_(feature name)_(min value)_(max value)
    // Spinner_(feature name)_(Items e.g. item1,item2,item3)
    // Button_(feature name)
    // ButtonLink_(feature name)_(URL/Link here)
    // ButtonOnOff_(feature name)
    // InputValue_(feature name)
    // CheckBox_(feature name)
    // RadioButton_(feature name)_(Items e.g. radio1,radio2,radio3)
    // RichTextView_(Text with limited HTML support)
    // RichWebView_(Full HTML support)

    const char *features[]= {
        OBFUSCATE("Category_Test Category"),
        OBFUSCATE("Toggle_Firerate"),  //0
    };
    
    int Total_Feature = (sizeof features / sizeof features[0]); 
    jobjectArray ret = (jobjectArray)env->NewObjectArray(Total_Feature, env->FindClass(OBFUSCATE("java/lang/String")), env->NewStringUTF(OBFUSCATE("")));

    for(int i = 0; i < Total_Feature; i++) {
        env->SetObjectArrayElement(ret, i, env->NewStringUTF(features[i]));
    }
    return(ret);
}

__attribute__((constructor))
void lib_main() {
    pthread_t ptid;
    pthread_create(&ptid, NULL, hack_thread, NULL);
}