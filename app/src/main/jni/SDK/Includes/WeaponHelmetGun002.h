#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponHelmetGun002
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponHelmetGun002"));
	}

	template <typename T = float> T& atkRangeAsFunnel() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = float> T& speed_correction() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(WeaponHelmetGun002*))(Il2CppBase() + 0x449D5B0))(this);
	}
	template <typename T = void> T AdjustAngle() {
		return ((T (*)(WeaponHelmetGun002*))(Il2CppBase() + 0x449D610))(this);
	}
	template <typename T = void> T _DoAttack(Il2CppVector3 atkPosOffset) {
		return ((T (*)(WeaponHelmetGun002*, Il2CppVector3))(Il2CppBase() + 0x449D68C))(this, atkPosOffset);
	}
	template <typename T = void> T CreateBullet(int32_t i) {
		return ((T (*)(WeaponHelmetGun002*, int32_t))(Il2CppBase() + 0x449D7DC))(this, i);
	}
	template <typename T = void> T OnTypicalChange() {
		return ((T (*)(WeaponHelmetGun002*))(Il2CppBase() + 0x449DAB8))(this);
	}
	template <typename T = float> T FunnelModeAtkRange() {
		return ((T (*)(WeaponHelmetGun002*))(Il2CppBase() + 0x449DB3C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(WeaponHelmetGun002*))(Il2CppBase() + 0x449DBBC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTypicalChange() {
		return ((T (*)(WeaponHelmetGun002*))(Il2CppBase() + 0x449DBC4))(this);
	}
	template <typename T = float> T iFixBaseProxy_FunnelModeAtkRange() {
		return ((T (*)(WeaponHelmetGun002*))(Il2CppBase() + 0x449DBCC))(this);
	}

};

}
