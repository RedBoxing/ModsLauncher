#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunStaffRotateListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunStaffRotateListener"));
	}

	template <typename T = int32_t> T& anglePerBullet() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _staffGun() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunStaffRotateListener*))(Il2CppBase() + 0x217CF68))(this);
	}
	template <typename T = void> T OnStaffBulletCreate(uintptr_t staffObject, int32_t bulletCount, int32_t index) {
		return ((T (*)(GunStaffRotateListener*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x217D05C))(this, staffObject, bulletCount, index);
	}

};

}
