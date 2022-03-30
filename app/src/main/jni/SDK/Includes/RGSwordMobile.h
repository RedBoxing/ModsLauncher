#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGSwordMobile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSwordMobile"));
	}

	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0xC4);
	}

	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(RGSwordMobile*, uintptr_t, uintptr_t))(Il2CppBase() + 0x43DE2E8))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T StartMove() {
		return ((T (*)(RGSwordMobile*))(Il2CppBase() + 0x43DE3F8))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RGSwordMobile*, uintptr_t, uintptr_t))(Il2CppBase() + 0x43DE590))(this, P0, P1);
	}

};

}
