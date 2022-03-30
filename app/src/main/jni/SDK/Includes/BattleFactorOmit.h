#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BattleFactorOmit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattleFactorOmit"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, void*>*> static T& omitList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T HasOmit(uintptr_t f1, uintptr_t f2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B216B8))(0, f1, f2);
	}
	template <typename T = bool> static T IsFactorValid(Il2CppList<uintptr_t>* current, uintptr_t toCheck) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1B217D8))(0, current, toCheck);
	}

};

}
