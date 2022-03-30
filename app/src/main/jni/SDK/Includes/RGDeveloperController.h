#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGDeveloperController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGDeveloperController"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = bool> T& restored() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& restoreFire() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& restoreSprite() {
		return *(T*)((uintptr_t)this + 0x188);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGDeveloperController*))(Il2CppBase() + 0x2219A6C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGDeveloperController*))(Il2CppBase() + 0x2219AC8))(this);
	}
	template <typename T = void> T Restore() {
		return ((T (*)(RGDeveloperController*))(Il2CppBase() + 0x2219B24))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(RGDeveloperController*))(Il2CppBase() + 0x2219D40))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(RGDeveloperController*))(Il2CppBase() + 0x2219D48))(this);
	}

};

}
