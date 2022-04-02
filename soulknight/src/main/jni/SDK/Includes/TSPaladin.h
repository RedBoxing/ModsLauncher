#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TSPaladin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TSPaladin"));
	}

	template <typename T = int32_t> T& restoreArmor() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T RoleSkill() {
		return ((T (*)(TSPaladin*))(Il2CppBase() + 0x18CBE3C))(this);
	}
	template <typename T = void> T Scan() {
		return ((T (*)(TSPaladin*))(Il2CppBase() + 0x18CC424))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(TSPaladin*))(Il2CppBase() + 0x18CC85C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scan() {
		return ((T (*)(TSPaladin*))(Il2CppBase() + 0x18CC864))(this);
	}

};

}
