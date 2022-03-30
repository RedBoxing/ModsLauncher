#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectTremble
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectTremble"));
	}

	template <typename T = float> T& xAmplitude() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& yAmplitude() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& interval() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& _deltaPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& _passedTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Update() {
		return ((T (*)(ObjectTremble*))(Il2CppBase() + 0x1DCC81C))(this);
	}

};

}
