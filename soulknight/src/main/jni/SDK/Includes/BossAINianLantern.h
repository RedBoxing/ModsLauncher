#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAINianLantern
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAINianLantern"));
	}

	template <typename T = Il2CppVector3> T& originPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isAttack() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& exploded() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = uintptr_t> T& explodeObj() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sourceObj() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& col() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& speed() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BossAINianLantern*))(Il2CppBase() + 0x1DE6A44))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(BossAINianLantern*, uintptr_t))(Il2CppBase() + 0x1DE6B50))(this, other);
	}
	template <typename T = void> T SetTarget(Il2CppVector3 target) {
		return ((T (*)(BossAINianLantern*, Il2CppVector3))(Il2CppBase() + 0x1DE6720))(this, target);
	}
	template <typename T = uintptr_t> T Attacking(Il2CppVector3 target) {
		return ((T (*)(BossAINianLantern*, Il2CppVector3))(Il2CppBase() + 0x1DE6FA8))(this, target);
	}
	template <typename T = void> T Explode() {
		return ((T (*)(BossAINianLantern*))(Il2CppBase() + 0x1DE6C80))(this);
	}

};

}
