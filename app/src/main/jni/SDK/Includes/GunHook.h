#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunHook
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunHook"));
	}

	template <typename T = bool> T& hook() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = bool> T& attackable() {
		return *(T*)((uintptr_t)this + 0x19D);
	}
	template <typename T = uintptr_t> T& hook_sprite() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(GunHook*))(Il2CppBase() + 0x24A62C8))(this);
	}
	template <typename T = void> T ReleaseHook() {
		return ((T (*)(GunHook*))(Il2CppBase() + 0x24A6410))(this);
	}
	template <typename T = void> T StoreHook() {
		return ((T (*)(GunHook*))(Il2CppBase() + 0x24A648C))(this);
	}
	template <typename T = void> T AttackEvent() {
		return ((T (*)(GunHook*))(Il2CppBase() + 0x24A650C))(this);
	}
	template <typename T = void> T AttackWaitFrame() {
		return ((T (*)(GunHook*))(Il2CppBase() + 0x24A6680))(this);
	}
	template <typename T = void> T Attackable() {
		return ((T (*)(GunHook*))(Il2CppBase() + 0x24A63AC))(this);
	}
	template <typename T = void> T Disattackable() {
		return ((T (*)(GunHook*))(Il2CppBase() + 0x24A6620))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunHook*))(Il2CppBase() + 0x24A66EC))(this);
	}
	template <typename T = void> T CreateBullet(float speed, float angle) {
		return ((T (*)(GunHook*, float, float))(Il2CppBase() + 0x24A6878))(this, speed, angle);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunHook*))(Il2CppBase() + 0x24A6B10))(this);
	}

};

}
