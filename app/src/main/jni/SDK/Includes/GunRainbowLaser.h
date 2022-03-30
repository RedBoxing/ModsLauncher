#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunRainbowLaser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunRainbowLaser"));
	}

	template <typename T = uintptr_t> T& idle_sp() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& atk_sp() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& sp_renderer() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunRainbowLaser*))(Il2CppBase() + 0x217153C))(this);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(GunRainbowLaser*))(Il2CppBase() + 0x217161C))(this);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(GunRainbowLaser*))(Il2CppBase() + 0x21716A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunRainbowLaser*))(Il2CppBase() + 0x2171734))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(GunRainbowLaser*))(Il2CppBase() + 0x217173C))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(GunRainbowLaser*))(Il2CppBase() + 0x2171744))(this);
	}

};

}
