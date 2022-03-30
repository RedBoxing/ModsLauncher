#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FishingMinigame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishingMinigame"));
	}

	template <typename T = uintptr_t> T& touchBlocker() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& fishingIndicator() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& countdownIndicator() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& countdownObj() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& hookImg() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& glowImg() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& clickButton() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& buttonInnerObj() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& fxSucceed() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& fxFail() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& darkImg() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& hookColor() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& soundSucceed() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& soundFail() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector2> T& probeRange() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& standardProbeDistanceShiftFactor() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& indicatorMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& indicatorMaxAcceleration() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& indicatorStdFrameRate() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& probeTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& minWaitTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& maxWaitTime() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& probeInterval() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& attachAcceleration() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& leaveSpeedFactor() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& attachDistanceFactor() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& distanceBiasRange() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& angleBiasRange() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& _waitTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& indicatorSize() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& _probeTime() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& _timePass() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& _indicatorState() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& indicatorAnim() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = void*> T& onFinish() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& _trembleCmd() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _trembleFinish() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& _initDistanceToCenter() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& _canCatch() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppVector3> T& _floatingVelocity() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& _latestAcceleration() {
		return *(T*)((uintptr_t)this + 0x114);
	}

	template <typename T = void> T Start() {
		return ((T (*)(FishingMinigame*))(Il2CppBase() + 0x450C9D0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FishingMinigame*))(Il2CppBase() + 0x450CD90))(this);
	}
	template <typename T = void> T Result() {
		return ((T (*)(FishingMinigame*))(Il2CppBase() + 0x450DC60))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(FishingMinigame*))(Il2CppBase() + 0x450E080))(this);
	}
	template <typename T = void> T ShiftStandardDistanceToCenter() {
		return ((T (*)(FishingMinigame*))(Il2CppBase() + 0x450D558))(this);
	}
	template <typename T = float> T Acceleration() {
		return ((T (*)(FishingMinigame*))(Il2CppBase() + 0x450E110))(this);
	}
	template <typename T = void> T ChangeOrientation(Il2CppVector3 displacement) {
		return ((T (*)(FishingMinigame*, Il2CppVector3))(Il2CppBase() + 0x450E1CC))(this, displacement);
	}
	template <typename T = void> T IndicatorFloating(bool stable) {
		return ((T (*)(FishingMinigame*, bool))(Il2CppBase() + 0x450D61C))(this, stable);
	}
	template <typename T = bool> T Updateb__40_0(float dt) {
		return ((T (*)(FishingMinigame*, float))(Il2CppBase() + 0x450E638))(this, dt);
	}
	template <typename T = void> T Updateb__40_1() {
		return ((T (*)(FishingMinigame*))(Il2CppBase() + 0x450E6E8))(this);
	}
	template <typename T = void> T Resultb__41_0() {
		return ((T (*)(FishingMinigame*))(Il2CppBase() + 0x450E7B0))(this);
	}
	template <typename T = void> T Resultb__41_1() {
		return ((T (*)(FishingMinigame*))(Il2CppBase() + 0x450E814))(this);
	}

};

}
