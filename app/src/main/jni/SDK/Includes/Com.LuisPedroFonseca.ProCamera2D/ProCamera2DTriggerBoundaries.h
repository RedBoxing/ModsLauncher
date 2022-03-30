#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DTriggerBoundaries
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DTriggerBoundaries"));
	}

	template <typename T = Il2CppString*> static T& TriggerName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& NumericBoundaries() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& AreBoundariesRelative() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& UseTopBoundary() {
		return *(T*)((uintptr_t)this + 0xB1);
	}
	template <typename T = float> T& TopBoundary() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& UseBottomBoundary() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& BottomBoundary() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& UseLeftBoundary() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& LeftBoundary() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& UseRightBoundary() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& RightBoundary() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& TransitionDuration() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& TransitionEaseType() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& ChangeZoom() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& TargetZoom() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& ZoomSmoothness() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& _setAsStartingBoundaries() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& _initialCamSize() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& _boundsAnim() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& _targetTopBoundary() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& _targetBottomBoundary() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& _targetLeftBoundary() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& _targetRightBoundary() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = bool> T& _transitioning() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppVector3> T& _newPos() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = int32_t> T& _poOrder() {
		return *(T*)((uintptr_t)this + 0x118);
	}

	template <typename T = bool> T get_IsCurrentTrigger() {
		return ((T (*)(ProCamera2DTriggerBoundaries*))(Il2CppBase() + 0x2C2DDFC))(this);
	}
	template <typename T = void> T set_SetAsStartingBoundaries(bool value) {
		return ((T (*)(ProCamera2DTriggerBoundaries*, bool))(Il2CppBase() + 0x2C2DE88))(this, value);
	}
	template <typename T = bool> T get_SetAsStartingBoundaries() {
		return ((T (*)(ProCamera2DTriggerBoundaries*))(Il2CppBase() + 0x2C2E110))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ProCamera2DTriggerBoundaries*))(Il2CppBase() + 0x2C2E170))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ProCamera2DTriggerBoundaries*))(Il2CppBase() + 0x2C2E1F8))(this);
	}
	template <typename T = Il2CppVector3> T OverridePosition(float deltaTime, Il2CppVector3 originalPosition) {
		return ((T (*)(ProCamera2DTriggerBoundaries*, float, Il2CppVector3))(Il2CppBase() + 0x2C2EA3C))(this, deltaTime, originalPosition);
	}
	template <typename T = int32_t> T get_POOrder() {
		return ((T (*)(ProCamera2DTriggerBoundaries*))(Il2CppBase() + 0x2C2EB00))(this);
	}
	template <typename T = void> T set_POOrder(int32_t value) {
		return ((T (*)(ProCamera2DTriggerBoundaries*, int32_t))(Il2CppBase() + 0x2C2EB60))(this, value);
	}
	template <typename T = void> T EnteredTrigger() {
		return ((T (*)(ProCamera2DTriggerBoundaries*))(Il2CppBase() + 0x2C2EBD4))(this);
	}
	template <typename T = uintptr_t> T TurnOffPreviousTrigger(uintptr_t trigger) {
		return ((T (*)(ProCamera2DTriggerBoundaries*, uintptr_t))(Il2CppBase() + 0x2C2ED88))(this, trigger);
	}
	template <typename T = void> T SetBoundaries() {
		return ((T (*)(ProCamera2DTriggerBoundaries*))(Il2CppBase() + 0x2C2E7D4))(this);
	}
	template <typename T = void> T GetTargetBoundaries() {
		return ((T (*)(ProCamera2DTriggerBoundaries*))(Il2CppBase() + 0x2C2E570))(this);
	}
	template <typename T = uintptr_t> T Transition() {
		return ((T (*)(ProCamera2DTriggerBoundaries*))(Il2CppBase() + 0x2C2EE50))(this);
	}
	template <typename T = uintptr_t> T MoveCameraToTarget() {
		return ((T (*)(ProCamera2DTriggerBoundaries*))(Il2CppBase() + 0x2C2EF5C))(this);
	}
	template <typename T = void> T LimitToNumericBoundaries(uintptr_t horizontalPos, uintptr_t verticalPos) {
		return ((T (*)(ProCamera2DTriggerBoundaries*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2C2F03C))(this, horizontalPos, verticalPos);
	}
	template <typename T = void> T Startb__31_0() {
		return ((T (*)(ProCamera2DTriggerBoundaries*))(Il2CppBase() + 0x2C2F3FC))(this);
	}
	template <typename T = void> T Startb__31_1() {
		return ((T (*)(ProCamera2DTriggerBoundaries*))(Il2CppBase() + 0x2C2F464))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(ProCamera2DTriggerBoundaries*))(Il2CppBase() + 0x2C2F4CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_EnteredTrigger() {
		return ((T (*)(ProCamera2DTriggerBoundaries*))(Il2CppBase() + 0x2C2F4D4))(this);
	}

};

}
