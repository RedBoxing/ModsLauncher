#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunDarkShield
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunDarkShield"));
	}

	template <typename T = float> T& holdRange() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& bulletAngleRange() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& reflectMin() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = float> T& reflectMax() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& maxMoveTime() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = bool> T& _useWeapon() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _bulletScanBuffer() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _bulletModifiers() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}

	template <typename T = int32_t> T get_ControllerFacing() {
		return ((T (*)(GunDarkShield*))(Il2CppBase() + 0x2491EC8))(this);
	}
	template <typename T = float> T get_HoldVelocity() {
		return ((T (*)(GunDarkShield*))(Il2CppBase() + 0x2491FE0))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunDarkShield*))(Il2CppBase() + 0x2492048))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunDarkShield*))(Il2CppBase() + 0x24920B8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunDarkShield*))(Il2CppBase() + 0x2492124))(this);
	}
	template <typename T = void> T ScanBullet() {
		return ((T (*)(GunDarkShield*))(Il2CppBase() + 0x2492198))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(GunDarkShield*))(Il2CppBase() + 0x24926D0))(this);
	}
	template <typename T = void> T GizmosDrawSector(int32_t angle, Il2CppVector3 position, float radius) {
		return ((T (*)(GunDarkShield*, int32_t, Il2CppVector3, float))(Il2CppBase() + 0x2492984))(this, angle, position, radius);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunDarkShield*))(Il2CppBase() + 0x2492D7C))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunDarkShield*))(Il2CppBase() + 0x2492D84))(this);
	}

};

}
