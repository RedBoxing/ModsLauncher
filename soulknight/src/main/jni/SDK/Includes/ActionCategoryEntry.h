#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ActionCategoryEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionCategoryEntry"));
	}

	template <typename T = int32_t> T& actionCategoryId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& label() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T SetLabel(uintptr_t label) {
		return ((T (*)(ActionCategoryEntry*, uintptr_t))(Il2CppBase() + 0x21E5B24))(this, label);
	}
	template <typename T = void> T SetActive(bool state) {
		return ((T (*)(ActionCategoryEntry*, bool))(Il2CppBase() + 0x21E74D4))(this, state);
	}

};

}
