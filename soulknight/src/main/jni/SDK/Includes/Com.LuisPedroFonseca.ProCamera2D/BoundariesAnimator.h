#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class BoundariesAnimator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "BoundariesAnimator"));
	}

	template <typename T = uintptr_t> T& OnTransitionStarted() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& OnTransitionFinished() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& UseTopBoundary() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& TopBoundary() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& UseBottomBoundary() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& BottomBoundary() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& UseLeftBoundary() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& LeftBoundary() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& UseRightBoundary() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& RightBoundary() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& TransitionDuration() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& TransitionEaseType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& ProCamera2D() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& NumericBoundaries() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& Vector3H() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& Vector3V() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& _hasFiredTransitionFinished() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = int32_t> T GetAnimsCount() {
		return ((T (*)(BoundariesAnimator*))(Il2CppBase() + 0x207AED8))(this);
	}
	template <typename T = void> T Transition() {
		return ((T (*)(BoundariesAnimator*))(Il2CppBase() + 0x207B094))(this);
	}
	template <typename T = uintptr_t> T LeftTransitionRoutine(float duration, bool turnOffBoundaryAfterwards) {
		return ((T (*)(BoundariesAnimator*, float, bool))(Il2CppBase() + 0x207B814))(this, duration, turnOffBoundaryAfterwards);
	}
	template <typename T = uintptr_t> T RightTransitionRoutine(float duration, bool turnOffBoundaryAfterwards) {
		return ((T (*)(BoundariesAnimator*, float, bool))(Il2CppBase() + 0x207B980))(this, duration, turnOffBoundaryAfterwards);
	}
	template <typename T = uintptr_t> T TopTransitionRoutine(float duration, bool turnOffBoundaryAfterwards) {
		return ((T (*)(BoundariesAnimator*, float, bool))(Il2CppBase() + 0x207BA8C))(this, duration, turnOffBoundaryAfterwards);
	}
	template <typename T = uintptr_t> T BottomTransitionRoutine(float duration, bool turnOffBoundaryAfterwards) {
		return ((T (*)(BoundariesAnimator*, float, bool))(Il2CppBase() + 0x207BB98))(this, duration, turnOffBoundaryAfterwards);
	}

};

}
