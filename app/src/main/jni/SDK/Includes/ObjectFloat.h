#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectFloat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectFloat"));
	}

	template <typename T = float> T& amplitude() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& upDirection() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& randomInitPhase() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& _passedTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& _curOffset() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& _phase() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ObjectFloat*))(Il2CppBase() + 0x1D5CF30))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ObjectFloat*))(Il2CppBase() + 0x1D5CFB0))(this);
	}

};

}
