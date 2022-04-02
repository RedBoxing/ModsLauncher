#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LimitPurchaseGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LimitPurchaseGroup"));
	}

	template <typename T = int32_t> T& idx() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& productId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& btnBuy() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_purchaseCount() {
		return ((T (*)(LimitPurchaseGroup*))(Il2CppBase() + 0x453C218))(this);
	}
	template <typename T = void> T set_purchaseCount(int32_t value) {
		return ((T (*)(LimitPurchaseGroup*, int32_t))(Il2CppBase() + 0x453C2DC))(this, value);
	}
	template <typename T = bool> T get_canBuy() {
		return ((T (*)(LimitPurchaseGroup*))(Il2CppBase() + 0x453C3BC))(this);
	}

};

}
