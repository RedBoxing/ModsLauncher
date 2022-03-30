#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunLottery
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunLottery"));
	}

	template <typename T = uintptr_t> T& audioNothing() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& spriteNothing() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& spriteReward() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = bool> T& canReward() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = int32_t> T& ran() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = uintptr_t> T& tossController() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(GunLottery*))(Il2CppBase() + 0x227E290))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunLottery*, bool, bool))(Il2CppBase() + 0x227E300))(this, value1, manual);
	}
	template <typename T = void> T Toss() {
		return ((T (*)(GunLottery*))(Il2CppBase() + 0x227E4C8))(this);
	}
	template <typename T = void> T CreateCoin(int32_t coinIndex, int32_t count) {
		return ((T (*)(GunLottery*, int32_t, int32_t))(Il2CppBase() + 0x227E71C))(this, coinIndex, count);
	}
	template <typename T = void> T OnSpecialAnimFinish() {
		return ((T (*)(GunLottery*))(Il2CppBase() + 0x227EA34))(this);
	}
	template <typename T = uintptr_t> T GetReward() {
		return ((T (*)(GunLottery*))(Il2CppBase() + 0x227EB84))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunLottery*))(Il2CppBase() + 0x227EC64))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunLottery*))(Il2CppBase() + 0x227EDB4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunLottery*))(Il2CppBase() + 0x227EE1C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunLottery*, bool, bool))(Il2CppBase() + 0x227EE24))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunLottery*))(Il2CppBase() + 0x227EE34))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunLottery*))(Il2CppBase() + 0x227EE3C))(this);
	}

};

}
