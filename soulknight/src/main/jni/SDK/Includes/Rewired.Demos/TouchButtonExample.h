#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos {

class TouchButtonExample
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos", "TouchButtonExample"));
	}

	template <typename T = bool> T& allowMouseControl() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isPressed() {
		return *(T*)((uintptr_t)this + 0x19);
	}

	template <typename T = bool> T get_isPressed() {
		return ((T (*)(TouchButtonExample*))(Il2CppBase() + 0x2685B44))(this);
	}
	template <typename T = void> T set_isPressed(bool value) {
		return ((T (*)(TouchButtonExample*, bool))(Il2CppBase() + 0x2685B4C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TouchButtonExample*))(Il2CppBase() + 0x2685B58))(this);
	}
	template <typename T = void> T Restart() {
		return ((T (*)(TouchButtonExample*))(Il2CppBase() + 0x2685BC8))(this);
	}
	template <typename T = void> T UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown(uintptr_t eventData) {
		return ((T (*)(TouchButtonExample*, uintptr_t))(Il2CppBase() + 0x2685C28))(this, eventData);
	}
	template <typename T = void> T UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp(uintptr_t eventData) {
		return ((T (*)(TouchButtonExample*, uintptr_t))(Il2CppBase() + 0x2685D40))(this, eventData);
	}
	template <typename T = bool> static T IsMousePointerId(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2685CC8))(0, id);
	}

};

}
