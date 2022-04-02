#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DecorateGameObjectActive
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DecorateGameObjectActive"));
	}

	template <typename T = uintptr_t> T& targetObj() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& validSkins() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DecorateGameObjectActive*))(Il2CppBase() + 0x42E1F30))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DecorateGameObjectActive*))(Il2CppBase() + 0x42E2054))(this);
	}
	template <typename T = void> T RefreshDecoration(int32_t skinIndex) {
		return ((T (*)(DecorateGameObjectActive*, int32_t))(Il2CppBase() + 0x42E20D4))(this, skinIndex);
	}
	template <typename T = uintptr_t> T GetDecorateInfo(uintptr_t hero, int32_t skinIndex) {
		return ((T (*)(DecorateGameObjectActive*, uintptr_t, int32_t))(Il2CppBase() + 0x42E2264))(this, hero, skinIndex);
	}
	template <typename T = void> T OnSkinChanged(int32_t skinIndex) {
		return ((T (*)(DecorateGameObjectActive*, int32_t))(Il2CppBase() + 0x42E2404))(this, skinIndex);
	}

};

}
