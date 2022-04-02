#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGShield
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGShield"));
	}

	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& destroyCalled() {
		return *(T*)((uintptr_t)this + 0xAC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGShield*))(Il2CppBase() + 0x43D4AD4))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(RGShield*, uintptr_t, uintptr_t))(Il2CppBase() + 0x43D4B90))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T ReSetDestoryTime() {
		return ((T (*)(RGShield*))(Il2CppBase() + 0x43D4CE8))(this);
	}
	template <typename T = void> T DestoryObject() {
		return ((T (*)(RGShield*))(Il2CppBase() + 0x43D4D90))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RGShield*, uintptr_t, uintptr_t))(Il2CppBase() + 0x43D4E5C))(this, P0, P1);
	}

};

}
