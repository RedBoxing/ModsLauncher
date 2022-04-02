//
// Created by aimar on 12/28/2019.
//
#include <stdio.h>
#include <android/log.h>
#include <dlfcn.h>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

#ifndef API_H
#define API_H

namespace Il2Cpp
{
    int Init(const char *lib);

    int Init(void *handle);

    void *GetImageByName(const char *image);

    void *GetClassType(const char *image, const char *namespaze, const char *clazz);

    void *CreateArray(const char *image, const char *namespaze, const char *clazz, size_t length);

    void *GetMethodOffset(const char *image, const char *namespaze, const char *clazz, const char *name, int argsCount = 0);
    void *GetMethodOffset(const char *image, const char *namespaze, const char *clazz, const char *name, char **args, int argsCount = 0);
    size_t GetFieldOffset(const char *image, const char *namespaze, const char *clazz, const char *name);

    void GetStaticFieldValue(const char *image, const char *namespaze, const char *clazz, const char *name, void *output);
    void SetStaticFieldValue(const char *image, const char *namespaze, const char *clazz, const char *name, void* value);

    void *CreateClassInstance(const char *image, const char *namespaze, const char *clazz);

    bool IsAssembliesLoaded();

    void *CreateString(const char *str);
};


#endif //API_H
