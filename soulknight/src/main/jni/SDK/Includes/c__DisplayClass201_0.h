#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass2010
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass201_0"));
	}

	template <typename T = bool> T& toFront() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T OnSwitchWeaponb__1(uintptr_t com) {
		return ((T (*)(cDisplayClass2010*, uintptr_t))(Il2CppBase() + 0x1C6FA88))(this, com);
	}

};

}
