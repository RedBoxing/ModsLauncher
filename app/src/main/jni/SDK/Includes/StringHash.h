#pragma once
#include "Il2Cpp/Il2Cpp.h"

class StringHash
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringHash"));
	}

	template <typename T = bool> static T& _init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _crcTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uint32_t> static T& _crcPoly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> static T InitCRCTable() {
		return ((T (*)(void *))(Il2CppBase() + 0x42A670C))(0);
	}
	template <typename T = uint32_t> static T Hash(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42A68D8))(0, str);
	}
	template <typename T = uint32_t> static T Hash_1(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42A6A50))(0, bytes);
	}

};

}
