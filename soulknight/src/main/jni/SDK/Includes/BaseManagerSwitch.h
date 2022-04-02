#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BaseManagerSwitch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseManagerSwitch"));
	}

	template <typename T = uintptr_t> T& baseManager() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& troopManager() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& artifactsManager() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T GetManager() {
		return ((T (*)(BaseManagerSwitch*))(Il2CppBase() + 0x418C038))(this);
	}
	template <typename T = void> static T NormalModeInitByFactor() {
		return ((T (*)(void *))(Il2CppBase() + 0x418C1D8))(0);
	}
	template <typename T = void> static T InitArtifactsMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x418C254))(0);
	}

};

}
