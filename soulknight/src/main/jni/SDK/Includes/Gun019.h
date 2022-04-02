#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun019
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun019"));
	}

	template <typename T = float> T& speed_correction() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = int32_t> T& continuousCount() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& delayTotal() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = bool> T& in_atk() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun019*))(Il2CppBase() + 0x2575BE0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Gun019*))(Il2CppBase() + 0x2575C40))(this);
	}
	template <typename T = void> T CalculateTotalTime() {
		return ((T (*)(Gun019*))(Il2CppBase() + 0x2575CAC))(this);
	}
	template <typename T = void> T ResetShootInterval() {
		return ((T (*)(Gun019*))(Il2CppBase() + 0x2575D20))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun019*))(Il2CppBase() + 0x2575D94))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(Gun019*))(Il2CppBase() + 0x2575E34))(this);
	}
	template <typename T = void> T OnTypicalChange() {
		return ((T (*)(Gun019*))(Il2CppBase() + 0x25760B4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun019*))(Il2CppBase() + 0x257614C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(Gun019*))(Il2CppBase() + 0x2576154))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTypicalChange() {
		return ((T (*)(Gun019*))(Il2CppBase() + 0x257615C))(this);
	}

};

}
