#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TransformScalePulseAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransformScalePulseAnimation"));
	}

	template <typename T = uintptr_t> T& targetTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& expandTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& shrinkTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& maxScale() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Animation() {
		return ((T (*)(TransformScalePulseAnimation*))(Il2CppBase() + 0x4406C68))(this);
	}

};

}
