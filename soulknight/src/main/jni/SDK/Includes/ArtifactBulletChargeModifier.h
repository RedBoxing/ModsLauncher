#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactBulletChargeModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactBulletChargeModifier"));
	}

	template <typename T = float> T& addStrength() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& addSpeedFactor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& addSizeFactor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& addDamageFactor() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& addCritFactor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& addRepelFactor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& addThrough() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T ModifyBulletDamage(uintptr_t weapon, uintptr_t damageInfo) {
		return ((T (*)(ArtifactBulletChargeModifier*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C99E94))(this, weapon, damageInfo);
	}
	template <typename T = uintptr_t> T ModifyBulletInfo(uintptr_t weapon, uintptr_t bulletInfo) {
		return ((T (*)(ArtifactBulletChargeModifier*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C9A114))(this, weapon, bulletInfo);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_ModifyBulletDamage(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ArtifactBulletChargeModifier*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C9A290))(this, P0, P1);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_ModifyBulletInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ArtifactBulletChargeModifier*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C9A378))(this, P0, P1);
	}

};

}
