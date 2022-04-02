#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGCoin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGCoin"));
	}

	template <typename T = int32_t> T& value() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& range() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& type() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& rigibody2d() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& friction() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& inertial_vel() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector2> T& force_direction() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& find_target() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_list() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGCoin*))(Il2CppBase() + 0x19E38B0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGCoin*))(Il2CppBase() + 0x19E3990))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(RGCoin*))(Il2CppBase() + 0x19E3A84))(this);
	}
	template <typename T = void> T GetItem() {
		return ((T (*)(RGCoin*))(Il2CppBase() + 0x19E45C0))(this);
	}
	template <typename T = void> T GetForce(Il2CppVector2 value1, float value2) {
		return ((T (*)(RGCoin*, Il2CppVector2, float))(Il2CppBase() + 0x19E3540))(this, value1, value2);
	}
	template <typename T = void> T FindTarget() {
		return ((T (*)(RGCoin*))(Il2CppBase() + 0x19E3FCC))(this);
	}

};

}
