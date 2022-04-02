#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletSpriteAni
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletSpriteAni"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& invert_time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& time() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& sp_render() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BulletSpriteAni*))(Il2CppBase() + 0x2392888))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BulletSpriteAni*))(Il2CppBase() + 0x239295C))(this);
	}

};

}
