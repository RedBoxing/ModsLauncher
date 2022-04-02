#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGShortLasetBuff
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGShortLasetBuff"));
	}

	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGShortLasetBuff*))(Il2CppBase() + 0x43D8BC8))(this);
	}
	template <typename T = void> T UpdateCriticFactor() {
		return ((T (*)(RGShortLasetBuff*))(Il2CppBase() + 0x43D8C34))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGShortLasetBuff*))(Il2CppBase() + 0x43D8D04))(this);
	}
	template <typename T = void> T OnHit(uintptr_t other, bool isCritic) {
		return ((T (*)(RGShortLasetBuff*, uintptr_t, bool))(Il2CppBase() + 0x43D8D7C))(this, other, isCritic);
	}
	template <typename T = void> T iFixBaseProxy_UpdateCriticFactor() {
		return ((T (*)(RGShortLasetBuff*))(Il2CppBase() + 0x43D959C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(RGShortLasetBuff*))(Il2CppBase() + 0x43D95A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnHit(uintptr_t P0, bool P1) {
		return ((T (*)(RGShortLasetBuff*, uintptr_t, bool))(Il2CppBase() + 0x43D95AC))(this, P0, P1);
	}

};

}
