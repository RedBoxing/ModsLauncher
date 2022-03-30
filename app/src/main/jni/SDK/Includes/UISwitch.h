#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UISwitch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UISwitch"));
	}

	template <typename T = uintptr_t> T& the_text() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& awake() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& the_mission() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UISwitch*))(Il2CppBase() + 0x41C0908))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UISwitch*))(Il2CppBase() + 0x41C09DC))(this);
	}
	template <typename T = void> T SetQuestionText(uintptr_t value1, Il2CppString* value2) {
		return ((T (*)(UISwitch*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x41C0D9C))(this, value1, value2);
	}
	template <typename T = void> T BtnYesClick() {
		return ((T (*)(UISwitch*))(Il2CppBase() + 0x41C0C4C))(this);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UISwitch*))(Il2CppBase() + 0x41C0AF8))(this);
	}

};

}
