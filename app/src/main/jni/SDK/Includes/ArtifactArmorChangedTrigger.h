#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactArmorChangedTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactArmorChangedTrigger"));
	}

	template <typename T = uintptr_t> T& changeType() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T OnEquip(uintptr_t weapon) {
		return ((T (*)(ArtifactArmorChangedTrigger*, uintptr_t))(Il2CppBase() + 0x1C95E9C))(this, weapon);
	}
	template <typename T = void> T OnUnequip() {
		return ((T (*)(ArtifactArmorChangedTrigger*))(Il2CppBase() + 0x1C95FE0))(this);
	}
	template <typename T = void> T OnArmorChanged(uintptr_t data) {
		return ((T (*)(ArtifactArmorChangedTrigger*, uintptr_t))(Il2CppBase() + 0x1C96050))(this, data);
	}
	template <typename T = void> T OnEquipb__2_0() {
		return ((T (*)(ArtifactArmorChangedTrigger*))(Il2CppBase() + 0x1C96278))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEquip(uintptr_t P0) {
		return ((T (*)(ArtifactArmorChangedTrigger*, uintptr_t))(Il2CppBase() + 0x1C9631C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnUnequip() {
		return ((T (*)(ArtifactArmorChangedTrigger*))(Il2CppBase() + 0x1C96324))(this);
	}

};

}
