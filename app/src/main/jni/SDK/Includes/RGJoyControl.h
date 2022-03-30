#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGJoyControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGJoyControl"));
	}

	template <typename T = uintptr_t> T& joy_state() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& net_controller() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& joy_R() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& is_3rdAxisR() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& is_3rdAxisL() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = uintptr_t> T& window_pause() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& in_using() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& joystickInputRight() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& SpecialBtnType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& _isPauseInput() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _joyStateBeforePause() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& _pauseCoroutine() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = uintptr_t> T get_joystickInputRight() {
		return ((T (*)(RGJoyControl*))(Il2CppBase() + 0x1B62A84))(this);
	}
	template <typename T = void> T set_joystickInputRight(uintptr_t value) {
		return ((T (*)(RGJoyControl*, uintptr_t))(Il2CppBase() + 0x1B62A90))(this, value);
	}
	template <typename T = void> T SetUpMapping() {
		return ((T (*)(RGJoyControl*))(Il2CppBase() + 0x1B62A9C))(this);
	}
	template <typename T = void> T SetupControl() {
		return ((T (*)(RGJoyControl*))(Il2CppBase() + 0x1B62AF8))(this);
	}
	template <typename T = void> T SetupControl_1(uintptr_t value) {
		return ((T (*)(RGJoyControl*, uintptr_t))(Il2CppBase() + 0x1B62C3C))(this, value);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(RGJoyControl*))(Il2CppBase() + 0x1B62D5C))(this);
	}
	template <typename T = void> T UnUseController() {
		return ((T (*)(RGJoyControl*))(Il2CppBase() + 0x1B62E08))(this);
	}
	template <typename T = void> T PauseInput() {
		return ((T (*)(RGJoyControl*))(Il2CppBase() + 0x1B62E70))(this);
	}
	template <typename T = uintptr_t> T Pause() {
		return ((T (*)(RGJoyControl*))(Il2CppBase() + 0x1B62F00))(this);
	}
	template <typename T = void> T ContinueInput() {
		return ((T (*)(RGJoyControl*))(Il2CppBase() + 0x1B62FE0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RGJoyControl*))(Il2CppBase() + 0x1B630D0))(this);
	}
	template <typename T = void> T UpdateBtnAtkClick() {
		return ((T (*)(RGJoyControl*))(Il2CppBase() + 0x1B63B40))(this);
	}
	template <typename T = void> T BtnAttackClick() {
		return ((T (*)(RGJoyControl*))(Il2CppBase() + 0x1B64034))(this);
	}
	template <typename T = void> T BtnAttackRelease() {
		return ((T (*)(RGJoyControl*))(Il2CppBase() + 0x1B640E8))(this);
	}
	template <typename T = void> T UpdateBtnSwitchWeaponClick() {
		return ((T (*)(RGJoyControl*))(Il2CppBase() + 0x1B63C84))(this);
	}
	template <typename T = void> T UpdateBtnSkillClick() {
		return ((T (*)(RGJoyControl*))(Il2CppBase() + 0x1B63DB0))(this);
	}
	template <typename T = void> T BtnSkillClick() {
		return ((T (*)(RGJoyControl*))(Il2CppBase() + 0x1B6419C))(this);
	}
	template <typename T = void> T BtnSkillRelease() {
		return ((T (*)(RGJoyControl*))(Il2CppBase() + 0x1B6424C))(this);
	}
	template <typename T = void> T UpdateBtnSpecialClick() {
		return ((T (*)(RGJoyControl*))(Il2CppBase() + 0x1B63EF4))(this);
	}
	template <typename T = uintptr_t> T GetJoystickMovementInput() {
		return ((T (*)(RGJoyControl*))(Il2CppBase() + 0x1B63A18))(this);
	}
	template <typename T = void> T SwitchControllMode(int32_t mode) {
		return ((T (*)(RGJoyControl*, int32_t))(Il2CppBase() + 0x1B642FC))(this, mode);
	}
	template <typename T = void> T OnAtkBtnClick(bool isDown) {
		return ((T (*)(RGJoyControl*, bool))(Il2CppBase() + 0x1B620B0))(this, isDown);
	}
	template <typename T = void> T OnSkillBtnClick(bool isDown) {
		return ((T (*)(RGJoyControl*, bool))(Il2CppBase() + 0x1B6238C))(this, isDown);
	}
	template <typename T = void> T OnWeaponBtnClick() {
		return ((T (*)(RGJoyControl*))(Il2CppBase() + 0x1B629BC))(this);
	}
	template <typename T = void> T OnSpecialBtnClick(bool isDown) {
		return ((T (*)(RGJoyControl*, bool))(Il2CppBase() + 0x1B62644))(this, isDown);
	}

};

}
