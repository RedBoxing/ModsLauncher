#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TransformExtention
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransformExtention"));
	}


	template <typename T = void> static T MoveSelfWorld(uintptr_t transform, Il2CppVector3 position) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4405D00))(0, transform, position);
	}
	template <typename T = void> static T MoveSelfLocal(uintptr_t transform, Il2CppVector3 localPosition) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4405F80))(0, transform, localPosition);
	}
	template <typename T = void> static T MoveSelfWorld_1(uintptr_t rectTransform, Il2CppVector3 position) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4406200))(0, rectTransform, position);
	}
	template <typename T = void> static T MoveSelfLocal_1(uintptr_t rectTransform, Il2CppVector3 localPosition) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4406480))(0, rectTransform, localPosition);
	}

};

}
