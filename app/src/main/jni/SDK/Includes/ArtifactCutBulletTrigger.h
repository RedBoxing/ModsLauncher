#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactCutBulletTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactCutBulletTrigger"));
	}

	template <typename T = bool> T& passBulletAsArgument() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T OnEquip(uintptr_t weapon) {
		return ((T (*)(ArtifactCutBulletTrigger*, uintptr_t))(Il2CppBase() + 0x1CA10DC))(this, weapon);
	}
	template <typename T = void> T OnUnequip() {
		return ((T (*)(ArtifactCutBulletTrigger*))(Il2CppBase() + 0x1CA1220))(this);
	}
	template <typename T = void> T OnCutBullet(uintptr_t data) {
		return ((T (*)(ArtifactCutBulletTrigger*, uintptr_t))(Il2CppBase() + 0x1CA1290))(this, data);
	}
	template <typename T = void> T OnEquipb__1_0() {
		return ((T (*)(ArtifactCutBulletTrigger*))(Il2CppBase() + 0x1CA1668))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEquip(uintptr_t P0) {
		return ((T (*)(ArtifactCutBulletTrigger*, uintptr_t))(Il2CppBase() + 0x1CA170C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnUnequip() {
		return ((T (*)(ArtifactCutBulletTrigger*))(Il2CppBase() + 0x1CA1714))(this);
	}

};

}
