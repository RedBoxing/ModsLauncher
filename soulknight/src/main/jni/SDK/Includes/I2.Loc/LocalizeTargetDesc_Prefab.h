#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LocalizeTargetDescPrefab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LocalizeTargetDesc_Prefab"));
	}


	template <typename T = bool> T CanLocalize(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetDescPrefab*, uintptr_t))(Il2CppBase() + 0x45E5CEC))(this, cmp);
	}

};

}
