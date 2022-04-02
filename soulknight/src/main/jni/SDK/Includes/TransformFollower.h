#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TransformFollower
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransformFollower"));
	}

	template <typename T = uintptr_t> T& targetTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& followRotation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& followPosition() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = bool> T& followLocal() {
		return *(T*)((uintptr_t)this + 0x22);
	}

	template <typename T = void> T Update() {
		return ((T (*)(TransformFollower*))(Il2CppBase() + 0x4406700))(this);
	}

};

}
