//
// Created by aimar on 12/28/2019.
//
#pragma once

#include <stdio.h>
#include <string>
#include <inttypes.h>
#include <codecvt>
#include <locale>
#include <dlfcn.h>

using namespace std;

#ifndef IL2CPP_H
#define IL2CPP_H

// ================================================================================================================================ //

#include "Internal.h"

template<typename T> struct Il2CppArray {
    Il2CppClass *klass;
    void *monitor;
    void *bounds;
    int max_length;
    T m_Items[65535];

    int getLength() {
        return max_length;
    }

    T *getPointer() {
        return (T *)m_Items;
    }
};

template<typename T>
using Array = Il2CppArray<T>;

struct Il2CppString {
    Il2CppClass *klass;
    void *monitor;
    int32_t length;
    uint16_t start_char;

    const char *CString();

    const wchar_t *WCString();

    static Il2CppString *Create(const char *s);
    static Il2CppString *Create(const wchar_t *s, int len);

    int getLength() {
        return length;
    }
};

typedef Il2CppString String;

template<typename T> struct Il2CppList {
    Il2CppClass *klass;
    void *unk1;
    Il2CppArray<T> *items;
    int size;
    int version;

    T *getItems() {
        return items->getPointer();
    }

    int getSize() {
        return size;
    }

    int getVersion() {
        return version;
    }
};

template<typename T>
using List = Il2CppList<T>;

template<typename K, typename V> struct Il2CppDictionary {
    Il2CppClass *klass;
    void *unk1;
    Il2CppArray<int **> *table;
    Il2CppArray<void **> *linkSlots;
    Il2CppArray<K> *keys;
    Il2CppArray<V> *values;
    int touchedSlots;
    int emptySlot;
    int size;

    K getKeys() {
        return keys->getPointer();
    }

    V getValues() {
        return values->getPointer();
    }

    int getNumKeys() {
        return keys->getLength();
    }

    int getNumValues() {
        return values->getLength();
    }

    int getSize() {
        return size;
    }
};

template<typename K, typename V>
using Dictionary = Il2CppDictionary<K, V>;

struct Il2CppRect {
    float m_XMin, m_YMin, m_width, m_height;

    static Il2CppRect New(float x, float y, float width, float height) {
        return {x, y, width, height};
    }
};

struct Il2CppColor {
    float r, g, b, a;

    static Il2CppColor Black() {
        Il2CppColor c = {0, 0, 0, 1};
        return c;
    }

    static Il2CppColor Blue() {
        Il2CppColor c = {0, 0, 1, 1};
        return c;
    }

    static Il2CppColor Cyan() {
        Il2CppColor c = {0, 1, 1, 1};
        return c;
    }

    static Il2CppColor Green() {
        Il2CppColor c = {0, 1, 0, 1};
        return c;
    }

    static Il2CppColor Orange() {
        Il2CppColor c = {1, 0.5f, 0, 1};
        return c;
    }

    static Il2CppColor Red() {
        Il2CppColor c = {1, 0, 0, 1};
        return c;
    }

    static Il2CppColor White() {
        Il2CppColor c = {1, 1, 1, 1};
        return c;
    }

    static Il2CppColor Gray() {
        Il2CppColor c = {0.5f, 0.5f, 0.5f, 1};
        return c;
    }

    static Il2CppColor Yellow() {
        Il2CppColor c = {1, 0.921568632f, 0.0156862754f, 1};
        return c;
    }
};

struct Il2CppVector2 {
    float x, y;

    static Il2CppVector2 Zero() {
        Il2CppVector2 v = {0, 0};
        return v;
    }

    static Il2CppVector2 Up() {
        Il2CppVector2 v = {0, 1};
        return v;
    }

    static Il2CppVector2 Down() {
        Il2CppVector2 v = {0, -1};
        return v;
    }

    static Il2CppVector2 Right() {
        Il2CppVector2 v = {1, 0};
        return v;
    }

    static Il2CppVector2 Left() {
        Il2CppVector2 v = {-1, 0};
        return v;
    }

    static float Distance(Il2CppVector2 a, Il2CppVector2 b) {
        float dx = a.x - b.x;
        float dy = a.y - b.y;
        return sqrtf(dx * dx + dy * dy);
    }

    Il2CppVector2 operator+(Il2CppVector2 b) {
        Il2CppVector2 v = {x + b.x, y + b.y};
        return v;
    }

    Il2CppVector2 operator-(Il2CppVector2 b) {
        Il2CppVector2 v = {x - b.x, y - b.y};
        return v;
    }
};

struct Il2CppVector3 {
    float x, y, z;

    static Il2CppVector3 Zero() {
        Il2CppVector3 v = {0, 0, 0};
        return v;
    }

    static Il2CppVector3 Up() {
        Il2CppVector3 v = {0, 1, 0};
        return v;
    }

    static Il2CppVector3 Down() {
        Il2CppVector3 v = {0, -1, 0};
        return v;
    }

    static Il2CppVector3 Right() {
        Il2CppVector3 v = {1, 0, 0};
        return v;
    }

    static Il2CppVector3 Left() {
        Il2CppVector3 v = {-1, 0, 0};
        return v;
    }

    static Il2CppVector3 Forward() {
        Il2CppVector3 v = {0, 0, 1};
        return v;
    }

    static Il2CppVector3 Back() {
        Il2CppVector3 v = {0, 0, -1};
        return v;
    }

    static float Distance(Il2CppVector3 a, Il2CppVector3 b) {
        float dx = a.x - b.x;
        float dy = a.y - b.y;
        float dz = a.z - b.z;
        return sqrtf(dx * dx + dy * dy + dz * dz);
    }

    static float Magnitude(Il2CppVector3 vector) {
        float f = vector.x * vector.x + vector.y * vector.y + vector.z * vector.z;
        return sqrtf(f);
    }

    static Il2CppVector3 Normalize(Il2CppVector3 value) {
        float num = Il2CppVector3::Magnitude(value);
        Il2CppVector3 result;
        if (num > 1E-05f) {
            result = {value.x / num, value.y / num, value.z / num};
        } else {
            result = Il2CppVector3::Zero();
        }
        return result;
    }

    Il2CppVector3 operator+(Il2CppVector3 b) {
        Il2CppVector3 v = {x + b.x, y + b.y, z + b.z};
        return v;
    }

    Il2CppVector3 operator-(Il2CppVector3 b) {
        Il2CppVector3 v = {x - b.x, y - b.y, y - b.y};
        return v;
    }
};

struct Il2CppQuaternion {
    float x, y, z, w;

    static float Dot(Il2CppQuaternion a, Il2CppQuaternion b) {
        return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
    }
};

void Il2CppAttach(const char *libname="libil2cpp.so");

uintptr_t Il2CppBase();

#endif
