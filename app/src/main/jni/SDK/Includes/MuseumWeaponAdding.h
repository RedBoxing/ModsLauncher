#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MuseumWeaponAdding
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MuseumWeaponAdding"));
	}

	template <typename T = uintptr_t> T& largeFrame() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& smallFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& continiousLargePadding() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& weapons() {
		return *(T*)((uintptr_t)this + 0x50);
	}


};

}
