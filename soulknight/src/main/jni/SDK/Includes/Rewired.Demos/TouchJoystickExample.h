#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos {

class TouchJoystickExample
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos", "TouchJoystickExample"));
	}

	template <typename T = bool> T& allowMouseControl() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& radius() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& origAnchoredPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& origWorldPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& origScreenResolution() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& origScreenOrientation() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& hasFinger() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& lastFingerId() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector2> T& position() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = Il2CppVector2> T get_position() {
		return ((T (*)(TouchJoystickExample*))(Il2CppBase() + 0x2685DEC))(this);
	}
	template <typename T = void> T set_position(Il2CppVector2 value) {
		return ((T (*)(TouchJoystickExample*, Il2CppVector2))(Il2CppBase() + 0x2685DF4))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TouchJoystickExample*))(Il2CppBase() + 0x2685DFC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TouchJoystickExample*))(Il2CppBase() + 0x2685FC4))(this);
	}
	template <typename T = void> T Restart() {
		return ((T (*)(TouchJoystickExample*))(Il2CppBase() + 0x268607C))(this);
	}
	template <typename T = void> T StoreOrigValues() {
		return ((T (*)(TouchJoystickExample*))(Il2CppBase() + 0x2685E70))(this);
	}
	template <typename T = void> T UpdateValue(Il2CppVector3 value) {
		return ((T (*)(TouchJoystickExample*, Il2CppVector3))(Il2CppBase() + 0x26861A8))(this, value);
	}
	template <typename T = void> T UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown(uintptr_t eventData) {
		return ((T (*)(TouchJoystickExample*, uintptr_t))(Il2CppBase() + 0x26862E8))(this, eventData);
	}
	template <typename T = void> T UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp(uintptr_t eventData) {
		return ((T (*)(TouchJoystickExample*, uintptr_t))(Il2CppBase() + 0x2686424))(this, eventData);
	}
	template <typename T = void> T UnityEngine_EventSystems_IDragHandler_OnDrag(uintptr_t eventData) {
		return ((T (*)(TouchJoystickExample*, uintptr_t))(Il2CppBase() + 0x26864F4))(this, eventData);
	}
	template <typename T = bool> static T IsMousePointerId(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x26863AC))(0, id);
	}

};

}
