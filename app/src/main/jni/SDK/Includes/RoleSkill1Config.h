#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoleSkill1Config
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoleSkill1Config"));
	}

	template <typename T = float> T& bulletScaleFactor() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& extraBulletAngle() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& extraBulletCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& extraBulletWithMasterShotGunBuff() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& extraBulletForLevelUp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& deviation() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& damageFactor() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
