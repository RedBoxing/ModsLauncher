#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LaserEffector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LaserEffector"));
	}

	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& laserBullet() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& buffBoosts() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& reflectCount() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& scale() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> static T& attackTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& positionOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppVector3> T get_bulletPosition() {
		return ((T (*)(LaserEffector*))(Il2CppBase() + 0x4259A94))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(LaserEffector*))(Il2CppBase() + 0x4259C74))(this);
	}
	template <typename T = void> T BoostByBuff() {
		return ((T (*)(LaserEffector*))(Il2CppBase() + 0x4259CE0))(this);
	}
	template <typename T = void> T TriggerWith(uintptr_t other, bool isCritic, bool canThrough) {
		return ((T (*)(LaserEffector*, uintptr_t, bool, bool))(Il2CppBase() + 0x4259F78))(this, other, isCritic, canThrough);
	}
	template <typename T = uintptr_t> T CreateLaser() {
		return ((T (*)(LaserEffector*))(Il2CppBase() + 0x425A0A8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(LaserEffector*))(Il2CppBase() + 0x425A198))(this);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWith(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(LaserEffector*, uintptr_t, bool, bool))(Il2CppBase() + 0x425A1A0))(this, P0, P1, P2);
	}

};

}
