#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LocalizeTargetDescType2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LocalizeTargetDesc_Type`2"));
	}


	template <typename T = bool> T CanLocalize(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetDescType2*, uintptr_t))(Il2CppBase() + 0x0))(this, cmp);
	}
	template <typename T = uintptr_t> T CreateTarget(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetDescType2*, uintptr_t))(Il2CppBase() + 0x0))(this, cmp);
	}

};

}
