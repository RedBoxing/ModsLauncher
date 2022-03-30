#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LaserBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LaserBullet"));
	}

	template <typename T = float> T& laserSize() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = int32_t> T& reflectCount() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& targets() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_list() {
		return *(T*)((uintptr_t)this + 0x118);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(LaserBullet*))(Il2CppBase() + 0x42589E8))(this);
	}
	template <typename T = void> T DetectTrace() {
		return ((T (*)(LaserBullet*))(Il2CppBase() + 0x4258AFC))(this);
	}
	template <typename T = void> T FindTarget(Il2CppVector3 start, Il2CppVector3 direction, uintptr_t lastCollider, int32_t reflectCount) {
		return ((T (*)(LaserBullet*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t))(Il2CppBase() + 0x4258E48))(this, start, direction, lastCollider, reflectCount);
	}
	template <typename T = void> T UpdateTrail() {
		return ((T (*)(LaserBullet*))(Il2CppBase() + 0x42593C0))(this);
	}
	template <typename T = void> T DetectTraceb__5_0() {
		return ((T (*)(LaserBullet*))(Il2CppBase() + 0x42594B4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(LaserBullet*))(Il2CppBase() + 0x4259528))(this);
	}

};

}
