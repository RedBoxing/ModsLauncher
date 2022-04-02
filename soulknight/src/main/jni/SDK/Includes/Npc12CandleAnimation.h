#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Npc12CandleAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Npc12CandleAnimation"));
	}

	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& spriteAnimation() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& smokeEffect() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& particleSystem() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T FlashAnimation() {
		return ((T (*)(Npc12CandleAnimation*))(Il2CppBase() + 0x4528EC0))(this);
	}
	template <typename T = uintptr_t> T DelayFlashAnimation() {
		return ((T (*)(Npc12CandleAnimation*))(Il2CppBase() + 0x4528F30))(this);
	}

};

}
