#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactShopContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactShopContainer"));
	}

	template <typename T = bool> T& specifyWeaponName() {
		return *(T*)((uintptr_t)this + 0xB1);
	}
	template <typename T = uintptr_t> T& partItem() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(ArtifactShopContainer*, int32_t))(Il2CppBase() + 0x1CA8C08))(this, seed);
	}
	template <typename T = void> T OnLocalPlayerEnter() {
		return ((T (*)(ArtifactShopContainer*))(Il2CppBase() + 0x1CA9350))(this);
	}
	template <typename T = void> T OnLocalPlayerExit() {
		return ((T (*)(ArtifactShopContainer*))(Il2CppBase() + 0x1CA93C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(ArtifactShopContainer*, int32_t))(Il2CppBase() + 0x1CA9438))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnLocalPlayerEnter() {
		return ((T (*)(ArtifactShopContainer*))(Il2CppBase() + 0x1CA9440))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnLocalPlayerExit() {
		return ((T (*)(ArtifactShopContainer*))(Il2CppBase() + 0x1CA9448))(this);
	}

};

}
