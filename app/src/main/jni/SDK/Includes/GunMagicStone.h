#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunMagicStone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunMagicStone"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& hits() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bosses() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = void> T Attack() {
		return ((T (*)(GunMagicStone*))(Il2CppBase() + 0x2282608))(this);
	}

};

}
