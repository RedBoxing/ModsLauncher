#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactBulletModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactBulletModifier"));
	}


	template <typename T = uintptr_t> T ModifyBulletDamage(uintptr_t weapon, uintptr_t damageInfo) {
		return ((T (*)(ArtifactBulletModifier*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C9A2C0))(this, weapon, damageInfo);
	}
	template <typename T = uintptr_t> T ModifyBulletInfo(uintptr_t weapon, uintptr_t bulletInfo) {
		return ((T (*)(ArtifactBulletModifier*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C9A3D4))(this, weapon, bulletInfo);
	}
	template <typename T = void> T OnBulletEmit(uintptr_t weapon, uintptr_t bullet) {
		return ((T (*)(ArtifactBulletModifier*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C9BA70))(this, weapon, bullet);
	}
	template <typename T = void> T OnHit(uintptr_t weapon, uintptr_t bullet) {
		return ((T (*)(ArtifactBulletModifier*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C9A614))(this, weapon, bullet);
	}

};

}
