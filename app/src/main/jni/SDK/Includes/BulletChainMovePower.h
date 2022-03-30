#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletChainMovePower
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletChainMovePower"));
	}

	template <typename T = uintptr_t> T& power() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& unit_val_x() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& unit_val_y() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& offset_x_speed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& offset_count() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& curve() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& spr() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mat() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& laser_time() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BulletChainMovePower*))(Il2CppBase() + 0x45ABE0C))(this);
	}
	template <typename T = void> T SetTarget(Il2CppVector3 targetPos) {
		return ((T (*)(BulletChainMovePower*, Il2CppVector3))(Il2CppBase() + 0x45ABED0))(this, targetPos);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BulletChainMovePower*))(Il2CppBase() + 0x45AC0AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetTarget(Il2CppVector3 P0) {
		return ((T (*)(BulletChainMovePower*, Il2CppVector3))(Il2CppBase() + 0x45AC1AC))(this, P0);
	}

};

}
