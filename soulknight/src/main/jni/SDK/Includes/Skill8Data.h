#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Skill8Data
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Skill8Data"));
	}

	template <typename T = uintptr_t> T& meleeBulletConfig() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& minDistance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& CD() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& sound() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
