#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CircularRandomModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CircularRandomModel"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& startAngle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector2> T& angleRange() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& angleSpeed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& bulletInterval() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& leftTransform() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& leftOffset() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& rightTransform() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& rightOffset() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = Il2CppVector3> T get_LeftPosition() {
		return ((T (*)(CircularRandomModel*))(Il2CppBase() + 0x1B89AC0))(this);
	}
	template <typename T = Il2CppVector3> T get_RightPosition() {
		return ((T (*)(CircularRandomModel*))(Il2CppBase() + 0x1B89B60))(this);
	}

};

}
