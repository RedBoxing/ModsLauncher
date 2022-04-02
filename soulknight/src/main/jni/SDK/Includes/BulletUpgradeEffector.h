#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletUpgradeEffector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletUpgradeEffector"));
	}

	template <typename T = uintptr_t> T& upgradedBullet() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isUpgrade() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T GetBullet() {
		return ((T (*)(BulletUpgradeEffector*))(Il2CppBase() + 0x1DF4B04))(this);
	}

};

}
