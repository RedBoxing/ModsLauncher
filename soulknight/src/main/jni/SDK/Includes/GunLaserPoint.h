#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunLaserPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunLaserPoint"));
	}

	template <typename T = int32_t> T& range() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = bool> T& hitBullet() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& hitBulletCount() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = bool> T& hitEnemy() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& hitEnemyCount() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = void> T Attack() {
		return ((T (*)(GunLaserPoint*))(Il2CppBase() + 0x227A578))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetEnemyTargets() {
		return ((T (*)(GunLaserPoint*))(Il2CppBase() + 0x227B950))(this);
	}
	template <typename T = bool> T Shoot() {
		return ((T (*)(GunLaserPoint*))(Il2CppBase() + 0x2279470))(this);
	}
	template <typename T = bool> T Intercept() {
		return ((T (*)(GunLaserPoint*))(Il2CppBase() + 0x2279C74))(this);
	}
	template <typename T = void> T CreateLaser(uintptr_t target, int32_t index) {
		return ((T (*)(GunLaserPoint*, uintptr_t, int32_t))(Il2CppBase() + 0x227B9F8))(this, target, index);
	}
	template <typename T = void> T CreateLaser_1(Il2CppVector3 position, int32_t index) {
		return ((T (*)(GunLaserPoint*, Il2CppVector3, int32_t))(Il2CppBase() + 0x227BB6C))(this, position, index);
	}

};

}
