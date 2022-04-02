#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class BaseSpecializationManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "BaseSpecializationManager"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& mSpecializations() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& mSpecializationsFallbacks() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T InitializeSpecializations() {
		return ((T (*)(BaseSpecializationManager*))(Il2CppBase() + 0x420FF50))(this);
	}
	template <typename T = Il2CppString*> T GetCurrentSpecialization() {
		return ((T (*)(BaseSpecializationManager*))(Il2CppBase() + 0x421058C))(this);
	}
	template <typename T = Il2CppString*> T GetFallbackSpecialization(Il2CppString* specialization) {
		return ((T (*)(BaseSpecializationManager*, Il2CppString*))(Il2CppBase() + 0x4210630))(this, specialization);
	}

};

}
