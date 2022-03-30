#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UICameraSpilt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UICameraSpilt"));
	}

	template <typename T = uintptr_t> T& backgroundColor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& cam() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& addCallback() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& toTarget2() {
		return *(T*)((uintptr_t)this + 0x31);
	}

	template <typename T = void> T SpriteCamaer() {
		return ((T (*)(UICameraSpilt*))(Il2CppBase() + 0x41A2300))(this);
	}
	template <typename T = void> T OnSceneChanged(uintptr_t scene, uintptr_t sceneType) {
		return ((T (*)(UICameraSpilt*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41A27C8))(this, scene, sceneType);
	}
	template <typename T = void> T SwitchTarget(bool to2) {
		return ((T (*)(UICameraSpilt*, bool))(Il2CppBase() + 0x41A2450))(this, to2);
	}

};

}
