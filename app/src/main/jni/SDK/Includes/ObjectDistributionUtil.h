#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectDistributionUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectDistributionUtil"));
	}


	template <typename T = void*> static T GetRandomData(Il2CppArray<uintptr_t>* distribution, uintptr_t rg_random) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(0, distribution, rg_random);
	}
	template <typename T = uintptr_t> static T GetRandom(Il2CppArray<uintptr_t>* distribution, uintptr_t rg_random) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1D54A58))(0, distribution, rg_random);
	}
	template <typename T = void*> static T GetLimitCountRandomData(Il2CppArray<uintptr_t>* distribution, uintptr_t rg_random) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(0, distribution, rg_random);
	}
	template <typename T = uintptr_t> static T GetRandomObject(Il2CppArray<uintptr_t>* distribution, uintptr_t rg_random) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1D54E10))(0, distribution, rg_random);
	}
	template <typename T = uintptr_t> static T GetRandomObject_1(Il2CppArray<uintptr_t>* distribution, uintptr_t rg_random) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1D55030))(0, distribution, rg_random);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetRandomObjects(Il2CppArray<uintptr_t>* probabilities, uintptr_t rg_random) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1D551CC))(0, probabilities, rg_random);
	}

};

}
