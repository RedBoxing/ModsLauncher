#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChargeKeyProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChargeKeyProcessor"));
	}

	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& HoldTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& onHoldMax() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = float> T get_HoldTime() {
		return ((T (*)(ChargeKeyProcessor*))(Il2CppBase() + 0x187817C))(this);
	}
	template <typename T = void> T add_onHoldMax(uintptr_t value) {
		return ((T (*)(ChargeKeyProcessor*, uintptr_t))(Il2CppBase() + 0x1878184))(this, value);
	}
	template <typename T = void> T remove_onHoldMax(uintptr_t value) {
		return ((T (*)(ChargeKeyProcessor*, uintptr_t))(Il2CppBase() + 0x1878270))(this, value);
	}
	template <typename T = float> T get_CurrentProgress() {
		return ((T (*)(ChargeKeyProcessor*))(Il2CppBase() + 0x187835C))(this);
	}
	template <typename T = bool> T get_IsHoldComplete() {
		return ((T (*)(ChargeKeyProcessor*))(Il2CppBase() + 0x187845C))(this);
	}
	template <typename T = bool> T get_IsHolding() {
		return ((T (*)(ChargeKeyProcessor*))(Il2CppBase() + 0x18784D0))(this);
	}
	template <typename T = void> T OnKeyDown() {
		return ((T (*)(ChargeKeyProcessor*))(Il2CppBase() + 0x187859C))(this);
	}
	template <typename T = void> T OnKeyUp() {
		return ((T (*)(ChargeKeyProcessor*))(Il2CppBase() + 0x1878604))(this);
	}

};

}
