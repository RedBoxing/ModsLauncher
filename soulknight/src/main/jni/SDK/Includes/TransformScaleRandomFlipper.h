#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TransformScaleRandomFlipper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransformScaleRandomFlipper"));
	}

	template <typename T = uintptr_t> T& targetTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(TransformScaleRandomFlipper*))(Il2CppBase() + 0x4406DC4))(this);
	}

};

}
