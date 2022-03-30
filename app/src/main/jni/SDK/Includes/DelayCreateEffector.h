#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayCreateEffector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayCreateEffector"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& delayTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& autoAngle() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& radius() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& destroyAfterCreate() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& triggerTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Update() {
		return ((T (*)(DelayCreateEffector*))(Il2CppBase() + 0x42E6DEC))(this);
	}
	template <typename T = void> T CreateSubObject() {
		return ((T (*)(DelayCreateEffector*))(Il2CppBase() + 0x42E6E84))(this);
	}

};

}
