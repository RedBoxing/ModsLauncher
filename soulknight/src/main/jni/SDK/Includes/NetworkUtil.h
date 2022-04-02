#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NetworkUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetworkUtil"));
	}

	template <typename T = uintptr_t> static T& javaClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x4460954))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBroadcastAddresss() {
		return ((T (*)(void *))(Il2CppBase() + 0x4460A18))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetAllAddress() {
		return ((T (*)(void *))(Il2CppBase() + 0x4460AE8))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetAllBroadcastAddress() {
		return ((T (*)(void *))(Il2CppBase() + 0x4461080))(0);
	}
	template <typename T = uintptr_t> static T CaculateMaskAddress(uintptr_t ip, uintptr_t mask) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x446172C))(0, ip, mask);
	}
	template <typename T = bool> static T NetworkCanUse() {
		return ((T (*)(void *))(Il2CppBase() + 0x4461864))(0);
	}

};

}
