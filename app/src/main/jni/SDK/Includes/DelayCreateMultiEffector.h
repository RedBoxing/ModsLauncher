#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayCreateMultiEffector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayCreateMultiEffector"));
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
	template <typename T = bool> T& destroyAfterCreate() {
		return *(T*)((uintptr_t)this + 0x85);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& angleInBetween() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& followTarget() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& triggerTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}

	template <typename T = void> T Update() {
		return ((T (*)(DelayCreateMultiEffector*))(Il2CppBase() + 0x42E74C4))(this);
	}
	template <typename T = void> T CreateSubObject() {
		return ((T (*)(DelayCreateMultiEffector*))(Il2CppBase() + 0x42E755C))(this);
	}

};

}
