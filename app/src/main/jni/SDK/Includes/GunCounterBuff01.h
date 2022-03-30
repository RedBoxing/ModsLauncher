#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunCounterBuff01
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunCounterBuff01"));
	}

	template <typename T = int32_t> T& max_count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& deviation_effect_count() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& consume() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& deviation() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& special_consume() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& special_deviation() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& curve() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunCounterBuff01*))(Il2CppBase() + 0x248F0BC))(this);
	}
	template <typename T = void> T AfterAttackEvent() {
		return ((T (*)(GunCounterBuff01*))(Il2CppBase() + 0x248F240))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GunCounterBuff01*))(Il2CppBase() + 0x248F398))(this);
	}

};

}
