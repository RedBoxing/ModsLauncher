#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Character.Player {

class PlayerCollisionDamage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Character.Player", "PlayerCollisionDamage"));
	}

	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& damageInterval() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _collider() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PlayerCollisionDamage*))(Il2CppBase() + 0x1C32004))(this);
	}
	template <typename T = void> T EnableCollider() {
		return ((T (*)(PlayerCollisionDamage*))(Il2CppBase() + 0x1C3209C))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(PlayerCollisionDamage*, uintptr_t))(Il2CppBase() + 0x1C32114))(this, other);
	}

};

}
