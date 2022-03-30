#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RandomTalk
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomTalk"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& talks() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& i2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector2> T& intervalRange() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RandomTalk*))(Il2CppBase() + 0x44DC3F0))(this);
	}
	template <typename T = uintptr_t> T Talking() {
		return ((T (*)(RandomTalk*))(Il2CppBase() + 0x44DC460))(this);
	}

};

}
