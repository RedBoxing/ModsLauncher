#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemUnstableGate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemUnstableGate"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& mapDistribution() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemUnstableGate*, uintptr_t))(Il2CppBase() + 0x219DBCC))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemUnstableGate*, uintptr_t))(Il2CppBase() + 0x219DE20))(this, P0);
	}

};

}
