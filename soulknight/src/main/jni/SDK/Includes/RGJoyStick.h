#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGJoyStick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGJoyStick"));
	}

	template <typename T = float> T& joyStickRadius() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& joy_state() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& net_controller() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& centerBall() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& lastFingerID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& centerBallMoving() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& move_value() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& img_ball() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& img_bg() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& bg_recttransform() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& free_mode() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& axis_mode() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = bool> T& track_finger() {
		return *(T*)((uintptr_t)this + 0x62);
	}
	template <typename T = uintptr_t> T& inputModule() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _joyStateBeforePause() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& _isPauseInput() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& _pauseCoroutine() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& MoveTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_LastFingerId() {
		return ((T (*)(RGJoyStick*))(Il2CppBase() + 0x1B64554))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGJoyStick*))(Il2CppBase() + 0x1B645B4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RGJoyStick*))(Il2CppBase() + 0x1B6473C))(this);
	}
	template <typename T = void> T SetupControl() {
		return ((T (*)(RGJoyStick*))(Il2CppBase() + 0x1B65A48))(this);
	}
	template <typename T = void> T SetupControl_1(uintptr_t value) {
		return ((T (*)(RGJoyStick*, uintptr_t))(Il2CppBase() + 0x1B65B0C))(this, value);
	}
	template <typename T = void> T UnUseController() {
		return ((T (*)(RGJoyStick*))(Il2CppBase() + 0x1B65B88))(this);
	}
	template <typename T = void> T PauseInput() {
		return ((T (*)(RGJoyStick*))(Il2CppBase() + 0x1B65BF0))(this);
	}
	template <typename T = uintptr_t> T Pause() {
		return ((T (*)(RGJoyStick*))(Il2CppBase() + 0x1B65C88))(this);
	}
	template <typename T = void> T ContinueInput() {
		return ((T (*)(RGJoyStick*))(Il2CppBase() + 0x1B65D68))(this);
	}
	template <typename T = void> T JoyStickFree() {
		return ((T (*)(RGJoyStick*))(Il2CppBase() + 0x1B647C8))(this);
	}
	template <typename T = void> T JoyStickStatic() {
		return ((T (*)(RGJoyStick*))(Il2CppBase() + 0x1B651F0))(this);
	}
	template <typename T = void> T SwitchControl(int32_t value) {
		return ((T (*)(RGJoyStick*, int32_t))(Il2CppBase() + 0x1B65F5C))(this, value);
	}
	template <typename T = void> T SwitchAxis(int32_t value) {
		return ((T (*)(RGJoyStick*, int32_t))(Il2CppBase() + 0x1B662A4))(this, value);
	}
	template <typename T = float> static T SignedAngle(Il2CppVector2 a, Il2CppVector2 b) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x1B66320))(0, a, b);
	}
	template <typename T = Il2CppVector2> static T ClampVec8Way(Il2CppVector2 v) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x1B65DE8))(0, v);
	}

};

}
