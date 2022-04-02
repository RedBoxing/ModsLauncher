#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LocalizeTargetDescChild
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LocalizeTargetDesc_Child"));
	}


	template <typename T = bool> T CanLocalize(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetDescChild*, uintptr_t))(Il2CppBase() + 0x45E5BF4))(this, cmp);
	}

};

}
