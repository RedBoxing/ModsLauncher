#ifndef UTILS_H
#define UTILS_H
#include <jni.h>
#include <unistd.h>
#include <dirent.h>
#if defined(__aarch64__)
#include "X64Hook/And64InlineHook.hpp"
#else
#include "Substrate/CydiaSubstrate.h"
#endif
#include "Obfuscate.h"

typedef unsigned long DWORD;
static DWORD libBase;

const char* libName = OBFUSCATE("libil2cpp.so");

const char* offset2String(uintptr_t offset);
uintptr_t string2Offset(const char *c);
DWORD findLibrary(const char *library);
DWORD getAbsoluteAddress(DWORD relativeAddr, const char *libraryName);
bool isLibraryLoaded(const char *libraryName);
void MakeToast(JNIEnv* env, jobject thiz, const char* text);
void octo_hook(void *orig_fcn, void* new_fcn, void **orig_fcn_ptr);

uintptr_t string2Offset(const char *c) {
    int base = 16;
    // See if this function catches all possibilities.
    // If it doesn't, the function would have to be amended
    // whenever you add a combination of architecture and
    // compiler that is not yet addressed.
    static_assert(sizeof(uintptr_t) == sizeof(unsigned long)
                  || sizeof(uintptr_t) == sizeof(unsigned long long),
                  "Please add string to handle conversion for this architecture.");

    // Now choose the correct function ...
    if (sizeof(uintptr_t) == sizeof(unsigned long)) {
        return strtoul(c, nullptr, base);
    }

    // All other options exhausted, sizeof(uintptr_t) == sizeof(unsigned long long))
    return strtoull(c, nullptr, base);
}

const char* offset2String(uintptr_t offset) {
    return reinterpret_cast<const char*>(offset);
}

DWORD findLibrary(const char *library) {
    char filename[0xFF] = {0},
            buffer[1024] = {0};
    FILE *fp = NULL;
    DWORD address = 0;

    snprintf(filename, sizeof(filename), OBFUSCATE("/proc/self/maps"));
 
    fp = fopen( filename, OBFUSCATE("rt"));
    if( fp == NULL ){
        perror(OBFUSCATE("fopen"));
        goto done;
    }

    while( fgets( buffer, sizeof(buffer), fp ) ) {
        if( strstr( buffer, library ) ){
            address = (DWORD)strtoul( buffer, NULL, 16 );
            goto done;
        }
    }

    done:

    if(fp){
        fclose(fp);
    }

    return address;
}

DWORD getAbsoluteAddress(DWORD relativeAddr) {
    if (libBase == 0)
        libBase = findLibrary(libName);
    if (libBase != 0)
        return (reinterpret_cast<DWORD>(libBase + relativeAddr));
    else
        return 0;
}

bool isLibraryLoaded(const char *libraryName) {
    char filename[0xFF] = {0};
    char line[512] = {0};
    FILE *fp = NULL;

    snprintf(filename, sizeof(filename), OBFUSCATE("/proc/self/maps"));

    fp = fopen( filename, "rt" );
    if (fp != NULL) {
        while (fgets(line, sizeof(line), fp)) {
            if (strstr(line, libraryName))
                return true;
        }
        fclose(fp);
    }
    return false;
}

void MakeToast(JNIEnv* env, jobject thiz, const char* text){
    jstring jstr = env->NewStringUTF(text);

    jclass html = env->FindClass(OBFUSCATE("android/text/Html"));
    jmethodID methodFromHtml = env->GetStaticMethodID(html, OBFUSCATE("fromHtml"), OBFUSCATE("(Ljava/lang/String;)Landroid/text/Spanned;"));
    jobject htmlstr = env->CallStaticObjectMethod(html, methodFromHtml, jstr);

    jclass toast = env->FindClass(OBFUSCATE("android/widget/Toast"));
    jmethodID methodMakeText = env->GetStaticMethodID(toast, OBFUSCATE("makeText"), OBFUSCATE("(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;"));

    if (methodMakeText == NULL) {
        return;
    }

    jobject toastobj = env->CallStaticObjectMethod(toast, methodMakeText,  thiz, htmlstr, 0);

    jmethodID methodShow = env->GetMethodID(toast, OBFUSCATE("show"), OBFUSCATE("()V"));
    if (methodShow == NULL) {
        return;
    }
    env->CallVoidMethod(toastobj, methodShow);
}

void octo_hook(void *orig_fcn, void* new_fcn, void **orig_fcn_ptr)
{
#if defined(__aarch64__)
    A64HookFunction(orig_fcn, new_fcn, orig_fcn_ptr);
#else
    MSHookFunction(orig_fcn, new_fcn, orig_fcn_ptr);
#endif
}
#endif