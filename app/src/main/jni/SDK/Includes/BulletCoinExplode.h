#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletCoinExplode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletCoinExplode"));
	}

	template <typename T = uintptr_t> T& source_objcet() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BulletCoinExplode*, uintptr_t))(Il2CppBase() + 0x45AC1B0))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BulletCoinExplode*))(Il2CppBase() + 0x45AC72C))(this);
	}

};

}
