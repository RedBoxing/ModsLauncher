#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGSceneManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSceneManager"));
	}

	template <typename T = uintptr_t> T& curScene() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& enterSceneTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T OnChangeScene(uintptr_t scene) {
		return ((T (*)(RGSceneManager*, uintptr_t))(Il2CppBase() + 0x1C2B7A8))(this, scene);
	}
	template <typename T = void> T OnChangeScene_1(uintptr_t oldScene, uintptr_t newScene) {
		return ((T (*)(RGSceneManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C2B8CC))(this, oldScene, newScene);
	}

};

}
