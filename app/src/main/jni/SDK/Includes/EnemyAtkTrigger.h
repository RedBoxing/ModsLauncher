#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAtkTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAtkTrigger"));
	}

	template <typename T = float> T& destroy_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& hit_object() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = bool> T get_hitEnemy() {
		return ((T (*)(EnemyAtkTrigger*))(Il2CppBase() + 0x1FE3A70))(this);
	}
	template <typename T = bool> T get_hitPlayer() {
		return ((T (*)(EnemyAtkTrigger*))(Il2CppBase() + 0x1FE3AD8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EnemyAtkTrigger*))(Il2CppBase() + 0x1FE3B40))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(EnemyAtkTrigger*, uintptr_t))(Il2CppBase() + 0x1FE3C2C))(this, other);
	}

};

}
