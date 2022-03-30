#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired {

class HOTASTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired", "HOTASTemplate"));
	}

	template <typename T = uintptr_t> static T& typeGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickMiniStick1X() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickMiniStick1Y() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickMiniStick1Press() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickMiniStick2X() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickMiniStick2Y() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickMiniStick2Press() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickTriggerStage2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickPinkyButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickPinkyTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickButton1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickButton2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickButton3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickButton4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickButton5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickButton6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickButton7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickButton8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickButton9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickButton10() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickBaseButton1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickBaseButton2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickBaseButton3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickBaseButton4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickBaseButton5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickBaseButton6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickBaseButton7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickBaseButton8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickBaseButton9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickBaseButton10() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickBaseButton11() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickBaseButton12() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat1Up() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat1UpRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat1Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat1DownRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat1Down() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat1DownLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat1Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat1Up_Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat2Up() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat2Up_right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat2Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat2Down_Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat2Down() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat2Down_Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat2Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat2Up_Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat3Up() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat3Up_Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat3Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat3Down_Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat3Down() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat3Down_Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat3Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat3Up_Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat4Up() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat4Up_Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat4Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat4Down_Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat4Down() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat4Down_Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat4Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat4Up_Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_mode1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_mode2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_mode3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttle1Axis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttle2Axis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttle1MinDetent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttle2MinDetent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleButton1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleButton2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleButton3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleButton4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleButton5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleButton6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleButton7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleButton8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleButton9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleButton10() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleBaseButton1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleBaseButton2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleBaseButton3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleBaseButton4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleBaseButton5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleBaseButton6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleBaseButton7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleBaseButton8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleBaseButton9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleBaseButton10() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleBaseButton11() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleBaseButton12() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleBaseButton13() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleBaseButton14() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleBaseButton15() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleSlider1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleSlider2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleSlider3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleSlider4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleDial1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleDial2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleDial3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleDial4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleMiniStickX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleMiniStickY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleMiniStickPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleWheel1Forward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleWheel1Back() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleWheel1Press() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleWheel2Forward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleWheel2Back() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleWheel2Press() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleWheel3Forward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleWheel3Back() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleWheel3Press() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat1Up() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat1Up_Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat1Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat1Down_Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat1Down() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat1Down_Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat1Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat1Up_Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat2Up() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat2Up_Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat2Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat2Down_Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat2Down() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat2Down_Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat2Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat2Up_Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat3Up() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat3Up_Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat3Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat3Down_Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat3Down() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat3Down_Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat3Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat3Up_Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat4Up() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat4Up_Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat4Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat4Down_Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat4Down() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat4Down_Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat4Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat4Up_Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_leftPedal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_rightPedal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_slidePedals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickMiniStick1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickMiniStick2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_stickHat4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttle1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttle2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleMiniStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_throttleHat4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickTrigger() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x2689EC8))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickTriggerStage2() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x2689F5C))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickPinkyButton() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x2689FF0))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickPinkyTrigger() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268A084))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickButton1() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268A118))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickButton2() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268A1AC))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickButton3() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268A240))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickButton4() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268A2D4))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickButton5() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268A368))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickButton6() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268A3FC))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickButton7() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268A490))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickButton8() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268A524))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickButton9() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268A5B8))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickButton10() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268A64C))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickBaseButton1() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268A6E0))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickBaseButton2() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268A774))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickBaseButton3() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268A808))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickBaseButton4() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268A89C))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickBaseButton5() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268A930))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickBaseButton6() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268A9C4))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickBaseButton7() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268AA58))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickBaseButton8() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268AAEC))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickBaseButton9() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268AB80))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickBaseButton10() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268AC14))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickBaseButton11() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268ACA8))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickBaseButton12() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268AD3C))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_mode1() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268ADD0))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_mode2() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268AE64))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_mode3() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268AEF8))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleButton1() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268AF8C))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleButton2() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268B020))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleButton3() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268B0B4))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleButton4() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268B148))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleButton5() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268B1DC))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleButton6() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268B270))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleButton7() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268B304))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleButton8() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268B398))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleButton9() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268B42C))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleButton10() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268B4C0))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleBaseButton1() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268B554))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleBaseButton2() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268B5E8))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleBaseButton3() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268B67C))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleBaseButton4() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268B710))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleBaseButton5() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268B7A4))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleBaseButton6() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268B838))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleBaseButton7() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268B8CC))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleBaseButton8() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268B960))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleBaseButton9() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268B9F4))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleBaseButton10() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268BA88))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleBaseButton11() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268BB1C))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleBaseButton12() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268BBB0))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleBaseButton13() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268BC44))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleBaseButton14() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268BCD8))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleBaseButton15() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268BD6C))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleSlider1() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268BE00))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleSlider2() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268BE94))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleSlider3() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268BF28))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleSlider4() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268BFBC))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleDial1() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268C050))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleDial2() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268C0E4))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleDial3() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268C178))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleDial4() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268C20C))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleWheel1Forward() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268C2A0))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleWheel1Back() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268C334))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleWheel1Press() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268C3C8))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleWheel2Forward() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268C45C))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleWheel2Back() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268C4F0))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleWheel2Press() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268C584))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleWheel3Forward() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268C618))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleWheel3Back() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268C6AC))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleWheel3Press() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268C740))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_leftPedal() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268C7D4))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_rightPedal() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268C868))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_slidePedals() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268C8FC))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stick() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268C990))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickMiniStick1() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268CA24))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickMiniStick2() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268CAB8))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickHat1() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268CB4C))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickHat2() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268CBE0))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickHat3() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268CC74))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_stickHat4() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268CD08))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttle1() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268CD9C))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttle2() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268CE30))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleMiniStick() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268CEC4))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleHat1() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268CF58))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleHat2() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268CFEC))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleHat3() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268D080))(this);
	}
	template <typename T = uintptr_t> T Rewired_IHOTASTemplate_get_throttleHat4() {
		return ((T (*)(HOTASTemplate*))(Il2CppBase() + 0x268D114))(this);
	}

};

}
