#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExplodeDamageCarrier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeDamageCarrier"));
	}

	template <typename T = bool> T& customExplode() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(ExplodeDamageCarrier*))(Il2CppBase() + 0x4466F74))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(ExplodeDamageCarrier*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4464D98))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ExplodeDamageCarrier*))(Il2CppBase() + 0x4466FD0))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ExplodeDamageCarrier*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4467030))(this, P0, P1);
	}

};

}
