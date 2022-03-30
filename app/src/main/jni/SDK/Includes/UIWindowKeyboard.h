#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowKeyboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowKeyboard"));
	}

	template <typename T = uintptr_t> T& skill() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& move() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& attack() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& special() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& emoticon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& keyMap() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& control() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& contrast() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& changeKeyType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& isWaitKeyPress() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& buttonTextAttack() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& buttonTextWeapon() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& buttonTextSkill() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& buttonTextSpecial() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& warningAttack() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& warningWeapon() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& warningSkill() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& warningSpecial() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowKeyboard*))(Il2CppBase() + 0x449FDF0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIWindowKeyboard*))(Il2CppBase() + 0x44A0080))(this);
	}
	template <typename T = void> T SavePostion() {
		return ((T (*)(UIWindowKeyboard*))(Il2CppBase() + 0x44A0350))(this);
	}
	template <typename T = void> T LoadPosition() {
		return ((T (*)(UIWindowKeyboard*))(Il2CppBase() + 0x44A0134))(this);
	}
	template <typename T = void> T DefaultPosition() {
		return ((T (*)(UIWindowKeyboard*))(Il2CppBase() + 0x44A058C))(this);
	}
	template <typename T = void> T OnClick_Reset() {
		return ((T (*)(UIWindowKeyboard*))(Il2CppBase() + 0x44A078C))(this);
	}
	template <typename T = void> T OnClick_Save() {
		return ((T (*)(UIWindowKeyboard*))(Il2CppBase() + 0x44A07EC))(this);
	}
	template <typename T = void> T OnClick_Default() {
		return ((T (*)(UIWindowKeyboard*))(Il2CppBase() + 0x44A09C4))(this);
	}
	template <typename T = void> T OnClick_Close() {
		return ((T (*)(UIWindowKeyboard*))(Il2CppBase() + 0x44A0854))(this);
	}
	template <typename T = void> T CloseWindow() {
		return ((T (*)(UIWindowKeyboard*))(Il2CppBase() + 0x44A0EF0))(this);
	}
	template <typename T = bool> T ValueChanged() {
		return ((T (*)(UIWindowKeyboard*))(Il2CppBase() + 0x44A0A24))(this);
	}
	template <typename T = void> T OnButtonClickAttack() {
		return ((T (*)(UIWindowKeyboard*))(Il2CppBase() + 0x44A0FCC))(this);
	}
	template <typename T = void> T OnButtonClickSwitch() {
		return ((T (*)(UIWindowKeyboard*))(Il2CppBase() + 0x44A10A8))(this);
	}
	template <typename T = void> T OnButtonClickSkill() {
		return ((T (*)(UIWindowKeyboard*))(Il2CppBase() + 0x44A112C))(this);
	}
	template <typename T = void> T OnButtonClickSpecial() {
		return ((T (*)(UIWindowKeyboard*))(Il2CppBase() + 0x44A11AC))(this);
	}
	template <typename T = void> T LostForce() {
		return ((T (*)(UIWindowKeyboard*))(Il2CppBase() + 0x44A104C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWindowKeyboard*))(Il2CppBase() + 0x44A1230))(this);
	}
	template <typename T = uintptr_t> T SetWaittingkey() {
		return ((T (*)(UIWindowKeyboard*))(Il2CppBase() + 0x44A128C))(this);
	}
	template <typename T = void> T OnClick_Closeb__28_0() {
		return ((T (*)(UIWindowKeyboard*))(Il2CppBase() + 0x44A1374))(this);
	}
	template <typename T = void> T OnClick_Closeb__28_1() {
		return ((T (*)(UIWindowKeyboard*))(Il2CppBase() + 0x44A1398))(this);
	}

};

}
