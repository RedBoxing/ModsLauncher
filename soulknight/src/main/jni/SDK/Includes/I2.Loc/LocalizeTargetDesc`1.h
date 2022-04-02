#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LocalizeTargetDesc1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LocalizeTargetDesc`1"));
	}


	template <typename T = uintptr_t> T CreateTarget(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetDesc1*, uintptr_t))(Il2CppBase() + 0x0))(this, cmp);
	}
	template <typename T = uintptr_t> T GetTargetType() {
		return ((T (*)(LocalizeTargetDesc1*))(Il2CppBase() + 0x0))(this);
	}

};

}
