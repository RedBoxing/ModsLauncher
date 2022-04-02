#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WIAfterAttackEnergy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WIAfterAttackEnergy"));
	}

	template <typename T = int32_t> T& energy() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _attribute() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = void> T AttackEffect() {
		return ((T (*)(WIAfterAttackEnergy*))(Il2CppBase() + 0x435D224))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackEffect() {
		return ((T (*)(WIAfterAttackEnergy*))(Il2CppBase() + 0x435D344))(this);
	}

};

}
