#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponCustomDisplayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponCustomDisplayer"));
	}

	template <typename T = uintptr_t> T& currentDisplayer() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Display(uintptr_t parent, uintptr_t displayer) {
		return ((T (*)(WeaponCustomDisplayer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4497F98))(this, parent, displayer);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(WeaponCustomDisplayer*))(Il2CppBase() + 0x44980F4))(this);
	}
	template <typename T = void> T Displayb__1_0() {
		return ((T (*)(WeaponCustomDisplayer*))(Il2CppBase() + 0x44981F4))(this);
	}

};

}
