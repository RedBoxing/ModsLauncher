#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CameraShakeBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraShakeBehaviour"));
	}

	template <typename T = int32_t> T& shakeLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CameraShake() {
		return ((T (*)(CameraShakeBehaviour*))(Il2CppBase() + 0x186A19C))(this);
	}

};

}
