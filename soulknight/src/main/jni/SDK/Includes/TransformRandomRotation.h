#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TransformRandomRotation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransformRandomRotation"));
	}

	template <typename T = float> T& minAngle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& maxAngle() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& targetTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(TransformRandomRotation*))(Il2CppBase() + 0x4406B4C))(this);
	}

};

}
