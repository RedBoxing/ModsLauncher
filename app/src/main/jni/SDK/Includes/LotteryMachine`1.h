#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LotteryMachine1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LotteryMachine`1"));
	}

	template <typename T = Il2CppList<void*>*> T& itemList() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Random() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& weightOverall() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_Random() {
		return ((T (*)(LotteryMachine1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Random(uintptr_t value) {
		return ((T (*)(LotteryMachine1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T AddItem(uintptr_t value, int32_t weight) {
		return ((T (*)(LotteryMachine1*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, value, weight);
	}
	template <typename T = uintptr_t> T GetResult() {
		return ((T (*)(LotteryMachine1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetResult_1(uintptr_t random) {
		return ((T (*)(LotteryMachine1*, uintptr_t))(Il2CppBase() + 0x0))(this, random);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(LotteryMachine1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LotteryMachine1*))(Il2CppBase() + 0x0))(this);
	}

};

}
