#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwitchDropdown
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwitchDropdown"));
	}

	template <typename T = uintptr_t> T& syncDropdown() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& dropdownItems() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& scrollRect() {
		return *(T*)((uintptr_t)this + 0x150);
	}

	template <typename T = void> T SyncDropdown() {
		return ((T (*)(SwitchDropdown*))(Il2CppBase() + 0x18BF9D4))(this);
	}
	template <typename T = void> T Sync(uintptr_t dropdown) {
		return ((T (*)(SwitchDropdown*, uintptr_t))(Il2CppBase() + 0x18BFA38))(this, dropdown);
	}

};

}
