#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ThornBoostBulletModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ThornBoostBulletModifier"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _largable() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_camp() {
		return ((T (*)(ThornBoostBulletModifier*))(Il2CppBase() + 0x1E4240C))(this);
	}
	template <typename T = bool> T get_largable() {
		return ((T (*)(ThornBoostBulletModifier*))(Il2CppBase() + 0x1E4247C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ThornBoostBulletModifier*))(Il2CppBase() + 0x1E424DC))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(ThornBoostBulletModifier*))(Il2CppBase() + 0x1E4253C))(this);
	}
	template <typename T = void> T Modify(int32_t damage, int32_t critic, float size) {
		return ((T (*)(ThornBoostBulletModifier*, int32_t, int32_t, float))(Il2CppBase() + 0x1E425A0))(this, damage, critic, size);
	}

};

}
