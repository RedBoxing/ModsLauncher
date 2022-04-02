#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired {

class GamepadTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired", "GamepadTemplate"));
	}

	template <typename T = uintptr_t> static T& typeGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_leftStickX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_leftStickY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_rightStickX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_rightStickY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_actionBottomRow1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_a() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_actionBottomRow2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_b() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_actionBottomRow3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_c() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_actionTopRow1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_x() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_actionTopRow2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_y() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_actionTopRow3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_z() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_leftShoulder1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_leftBumper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_leftShoulder2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_leftTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_rightShoulder1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_rightBumper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_rightShoulder2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_rightTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_center1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_back() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_center2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_center3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_guide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_leftStickButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_rightStickButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_dPadUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_dPadRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_dPadDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_dPadLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_leftStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_rightStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_dPad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_actionBottomRow1() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2688D84))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_a() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2688E18))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_actionBottomRow2() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2688EAC))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_b() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2688F40))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_actionBottomRow3() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2688FD4))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_c() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2689068))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_actionTopRow1() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x26890FC))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_x() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2689190))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_actionTopRow2() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2689224))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_y() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x26892B8))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_actionTopRow3() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x268934C))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_z() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x26893E0))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_leftShoulder1() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2689474))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_leftBumper() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2689508))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_leftShoulder2() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x268959C))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_leftTrigger() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2689630))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_rightShoulder1() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x26896C4))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_rightBumper() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2689758))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_rightShoulder2() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x26897EC))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_rightTrigger() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2689880))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_center1() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2689914))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_back() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x26899A8))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_center2() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2689A3C))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_start() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2689AD0))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_center3() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2689B64))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_guide() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2689BF8))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_leftStick() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2689C8C))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_rightStick() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2689D20))(this);
	}
	template <typename T = uintptr_t> T Rewired_IGamepadTemplate_get_dPad() {
		return ((T (*)(GamepadTemplate*))(Il2CppBase() + 0x2689DB4))(this);
	}

};

}
