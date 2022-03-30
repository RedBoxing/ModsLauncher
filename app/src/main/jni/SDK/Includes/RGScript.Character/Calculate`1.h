#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Character {

class Calculate1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Character", "Calculate`1"));
	}

	template <typename T = void*> static T& Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& Sub() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& Clamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& Less() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& Equal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& Negative() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void*> static T get_Add() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = void> static T set_Add(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, value);
	}
	template <typename T = void*> static T get_Sub() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = void> static T set_Sub(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, value);
	}
	template <typename T = void*> static T get_Clamp() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = void> static T set_Clamp(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, value);
	}
	template <typename T = void*> static T get_Less() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = void> static T set_Less(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, value);
	}
	template <typename T = void*> static T get_Equal() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = void> static T set_Equal(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, value);
	}
	template <typename T = void*> static T get_Negative() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = void> static T set_Negative(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, value);
	}

};

}
