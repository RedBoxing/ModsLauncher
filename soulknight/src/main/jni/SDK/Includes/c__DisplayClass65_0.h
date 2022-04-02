#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass650
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass65_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& bluePrint() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CreateTransformWeaponItemb__0(bool isToggle) {
		return ((T (*)(cDisplayClass650*, bool))(Il2CppBase() + 0x4578C70))(this, isToggle);
	}

};

}
