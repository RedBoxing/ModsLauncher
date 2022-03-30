#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LocalPositionAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocalPositionAnimation"));
	}

	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& initPosition() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& startOnTaken() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& _isStartAnim() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = float> T& _startTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Update() {
		return ((T (*)(LocalPositionAnimation*))(Il2CppBase() + 0x42687C0))(this);
	}
	template <typename T = void> T StartAnim() {
		return ((T (*)(LocalPositionAnimation*))(Il2CppBase() + 0x4268948))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(LocalPositionAnimation*))(Il2CppBase() + 0x4268A04))(this);
	}

};

}
