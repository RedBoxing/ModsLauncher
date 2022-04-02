#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TransformLocker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransformLocker"));
	}

	template <typename T = bool> T& lockRotation() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& rotation() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& lockScaleDirection() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& scaleDirection() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Update() {
		return ((T (*)(TransformLocker*))(Il2CppBase() + 0x4406984))(this);
	}
	template <typename T = int32_t> T SignToInt(float num) {
		return ((T (*)(TransformLocker*, float))(Il2CppBase() + 0x4406AC8))(this, num);
	}

};

}
