#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UnityInputSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityInputSource"));
	}

	template <typename T = Il2CppVector2> T& m_MousePosition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& m_MousePositionPrev() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_LastUpdatedFrame() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T Rewired_UI_IMouseInputSource_get_playerId() {
		return ((T (*)(UnityInputSource*))(Il2CppBase() + 0x269291C))(this);
	}
	template <typename T = int32_t> T Rewired_UI_ITouchInputSource_get_playerId() {
		return ((T (*)(UnityInputSource*))(Il2CppBase() + 0x2692A90))(this);
	}
	template <typename T = bool> T Rewired_UI_IMouseInputSource_get_enabled() {
		return ((T (*)(UnityInputSource*))(Il2CppBase() + 0x2692AF8))(this);
	}
	template <typename T = bool> T Rewired_UI_IMouseInputSource_get_locked() {
		return ((T (*)(UnityInputSource*))(Il2CppBase() + 0x2692B60))(this);
	}
	template <typename T = int32_t> T Rewired_UI_IMouseInputSource_get_buttonCount() {
		return ((T (*)(UnityInputSource*))(Il2CppBase() + 0x2692BD4))(this);
	}
	template <typename T = bool> T Rewired_UI_IMouseInputSource_GetButtonDown(int32_t button) {
		return ((T (*)(UnityInputSource*, int32_t))(Il2CppBase() + 0x2692C3C))(this, button);
	}
	template <typename T = bool> T Rewired_UI_IMouseInputSource_GetButtonUp(int32_t button) {
		return ((T (*)(UnityInputSource*, int32_t))(Il2CppBase() + 0x2692CBC))(this, button);
	}
	template <typename T = bool> T Rewired_UI_IMouseInputSource_GetButton(int32_t button) {
		return ((T (*)(UnityInputSource*, int32_t))(Il2CppBase() + 0x2692D3C))(this, button);
	}
	template <typename T = Il2CppVector2> T Rewired_UI_IMouseInputSource_get_screenPosition() {
		return ((T (*)(UnityInputSource*))(Il2CppBase() + 0x2692DBC))(this);
	}
	template <typename T = Il2CppVector2> T Rewired_UI_IMouseInputSource_get_screenPositionDelta() {
		return ((T (*)(UnityInputSource*))(Il2CppBase() + 0x2692EA0))(this);
	}
	template <typename T = Il2CppVector2> T Rewired_UI_IMouseInputSource_get_wheelDelta() {
		return ((T (*)(UnityInputSource*))(Il2CppBase() + 0x2692F7C))(this);
	}
	template <typename T = bool> T Rewired_UI_ITouchInputSource_get_touchSupported() {
		return ((T (*)(UnityInputSource*))(Il2CppBase() + 0x2692FE4))(this);
	}
	template <typename T = int32_t> T Rewired_UI_ITouchInputSource_get_touchCount() {
		return ((T (*)(UnityInputSource*))(Il2CppBase() + 0x269304C))(this);
	}
	template <typename T = uintptr_t> T Rewired_UI_ITouchInputSource_GetTouch(int32_t index) {
		return ((T (*)(UnityInputSource*, int32_t))(Il2CppBase() + 0x26930B4))(this, index);
	}
	template <typename T = void> T TryUpdate() {
		return ((T (*)(UnityInputSource*))(Il2CppBase() + 0x2692984))(this);
	}

};

}
