#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TSEngineer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TSEngineer"));
	}

	template <typename T = uintptr_t> T& cdAnim() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T RoleSkill() {
		return ((T (*)(TSEngineer*))(Il2CppBase() + 0x18C6F34))(this);
	}
	template <typename T = void> T CreateBattery() {
		return ((T (*)(TSEngineer*))(Il2CppBase() + 0x18C798C))(this);
	}
	template <typename T = void> T CreateLaserBattery() {
		return ((T (*)(TSEngineer*))(Il2CppBase() + 0x18C706C))(this);
	}
	template <typename T = void> T ShowMasterCDAnim() {
		return ((T (*)(TSEngineer*))(Il2CppBase() + 0x18C7534))(this);
	}
	template <typename T = void> T EndShowInSkill() {
		return ((T (*)(TSEngineer*))(Il2CppBase() + 0x18C7CB4))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(TSEngineer*))(Il2CppBase() + 0x18C7D74))(this);
	}

};

}
