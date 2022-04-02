#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletNotMove
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletNotMove"));
	}

	template <typename T = bool> T& isMoveAuto() {
		return *(T*)((uintptr_t)this + 0x101);
	}
	template <typename T = Il2CppVector3> T& _prevPosition() {
		return *(T*)((uintptr_t)this + 0x104);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletNotMove*))(Il2CppBase() + 0x2389B2C))(this);
	}
	template <typename T = uintptr_t> T MoveUpdate() {
		return ((T (*)(BulletNotMove*))(Il2CppBase() + 0x2389C6C))(this);
	}
	template <typename T = uintptr_t> T DirectionUpdating() {
		return ((T (*)(BulletNotMove*))(Il2CppBase() + 0x2389D3C))(this);
	}
	template <typename T = void> T ReboundBullet(bool changeDirection) {
		return ((T (*)(BulletNotMove*, bool))(Il2CppBase() + 0x2389E0C))(this, changeDirection);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(BulletNotMove*))(Il2CppBase() + 0x238A010))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_MoveUpdate() {
		return ((T (*)(BulletNotMove*))(Il2CppBase() + 0x238A018))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_DirectionUpdating() {
		return ((T (*)(BulletNotMove*))(Il2CppBase() + 0x238A020))(this);
	}
	template <typename T = void> T iFixBaseProxy_ReboundBullet(bool P0) {
		return ((T (*)(BulletNotMove*, bool))(Il2CppBase() + 0x238A028))(this, P0);
	}

};

}
