#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TSDruid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TSDruid"));
	}

	template <typename T = bool> T& alreadyCast() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T RoleSkill() {
		return ((T (*)(TSDruid*))(Il2CppBase() + 0x18C55A8))(this);
	}
	template <typename T = uintptr_t> T CreateWolf() {
		return ((T (*)(TSDruid*))(Il2CppBase() + 0x18C5684))(this);
	}
	template <typename T = uintptr_t> T CreateBear() {
		return ((T (*)(TSDruid*))(Il2CppBase() + 0x18C5738))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(TSDruid*))(Il2CppBase() + 0x18C584C))(this);
	}

};

}
