#pragma once
#include "Il2Cpp/Il2Cpp.h"

class fsUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "fsUtil"));
	}


	template <typename T = Il2CppString*> static T ToJson(uintptr_t data, bool isPretty) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x0))(0, data, isPretty);
	}
	template <typename T = Il2CppString*> static T ToJson_1(uintptr_t data, bool isPretty) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4606F74))(0, data, isPretty);
	}
	template <typename T = Il2CppString*> static T ToJson_2(uintptr_t data, uintptr_t type, bool isPretty) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4607008))(0, data, type, isPretty);
	}
	template <typename T = uintptr_t> static T ParseJson(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x0))(0, json);
	}
	template <typename T = uintptr_t> static T ParseJson_1(Il2CppString* json, uintptr_t type) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x46071C4))(0, json, type);
	}

};

}
