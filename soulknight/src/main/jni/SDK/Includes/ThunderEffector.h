#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ThunderEffector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ThunderEffector"));
	}

	template <typename T = uintptr_t> T& thunder() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& _thunderCount() {
		return *(T*)((uintptr_t)this + 0x84);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(ThunderEffector*))(Il2CppBase() + 0x1E438B8))(this);
	}
	template <typename T = void> T TriggerWith(uintptr_t other, bool isCritic, bool canThrough) {
		return ((T (*)(ThunderEffector*, uintptr_t, bool, bool))(Il2CppBase() + 0x1E4391C))(this, other, isCritic, canThrough);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWith(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(ThunderEffector*, uintptr_t, bool, bool))(Il2CppBase() + 0x1E43C34))(this, P0, P1, P2);
	}

};

}
