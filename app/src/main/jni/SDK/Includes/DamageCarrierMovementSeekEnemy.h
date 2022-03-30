#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DamageCarrierMovementSeekEnemy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageCarrierMovementSeekEnemy"));
	}

	template <typename T = uintptr_t> T& _rigidBody() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _damageCarrier() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _rg_random() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& seekType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& fixDirectionInterval() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& changeTargetInterval() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& angleSpeed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& seekDelay() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _target() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_cache() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DamageCarrierMovementSeekEnemy*))(Il2CppBase() + 0x428F2C0))(this);
	}
	template <typename T = uintptr_t> T CurrentTarget() {
		return ((T (*)(DamageCarrierMovementSeekEnemy*))(Il2CppBase() + 0x428F474))(this);
	}
	template <typename T = void> T StartSeeking() {
		return ((T (*)(DamageCarrierMovementSeekEnemy*))(Il2CppBase() + 0x428F5D8))(this);
	}
	template <typename T = void> T FindTarget() {
		return ((T (*)(DamageCarrierMovementSeekEnemy*))(Il2CppBase() + 0x428F640))(this);
	}
	template <typename T = bool> T IsTargetDead() {
		return ((T (*)(DamageCarrierMovementSeekEnemy*))(Il2CppBase() + 0x428FD98))(this);
	}
	template <typename T = void> T SeekTarget() {
		return ((T (*)(DamageCarrierMovementSeekEnemy*))(Il2CppBase() + 0x428F960))(this);
	}

};

}
