#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UISplash
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UISplash"));
	}

	template <typename T = uintptr_t> T& animCat() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& logoTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& AgeBtn() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& readyToNextScene() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UISplash*))(Il2CppBase() + 0x4241BF8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UISplash*))(Il2CppBase() + 0x4241D94))(this);
	}
	template <typename T = void> T NextScene() {
		return ((T (*)(UISplash*))(Il2CppBase() + 0x4241F00))(this);
	}
	template <typename T = uintptr_t> T GoingNextScene() {
		return ((T (*)(UISplash*))(Il2CppBase() + 0x4241F70))(this);
	}
	template <typename T = uintptr_t> T CreatingSingleton() {
		return ((T (*)(UISplash*))(Il2CppBase() + 0x4241E4C))(this);
	}

};

}
