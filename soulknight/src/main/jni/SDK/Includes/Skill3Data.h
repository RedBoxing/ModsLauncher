#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Skill3Data
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Skill3Data"));
	}

	template <typename T = uintptr_t> T& sound() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& landDamage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& burningEfx() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& burningEfxAngry() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& validDistance() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& animationLength() {
		return *(T*)((uintptr_t)this + 0x38);
	}


};

}
