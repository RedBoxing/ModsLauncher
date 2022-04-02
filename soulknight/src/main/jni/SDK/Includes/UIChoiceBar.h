#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIChoiceBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIChoiceBar"));
	}

	template <typename T = int32_t> T& item_count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& items() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& the_tag() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& char_img_list() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIChoiceBar*))(Il2CppBase() + 0x41B55C8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIChoiceBar*))(Il2CppBase() + 0x41B58F4))(this);
	}
	template <typename T = void> T GetChoice(int32_t value) {
		return ((T (*)(UIChoiceBar*, int32_t))(Il2CppBase() + 0x41B5AC8))(this, value);
	}
	template <typename T = void> T GetUnLock(int32_t value) {
		return ((T (*)(UIChoiceBar*, int32_t))(Il2CppBase() + 0x41B5BCC))(this, value);
	}

};

}
