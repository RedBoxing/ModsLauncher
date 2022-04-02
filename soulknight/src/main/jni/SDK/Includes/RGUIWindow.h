#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGUIWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGUIWindow"));
	}

	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& awake() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& imMask() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& trPanel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& pauseWhenShow() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& isClosing() {
		return *(T*)((uintptr_t)this + 0x39);
	}

	template <typename T = bool> T get_pauseWhenShow() {
		return ((T (*)(RGUIWindow*))(Il2CppBase() + 0x44C09B4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGUIWindow*))(Il2CppBase() + 0x44C09BC))(this);
	}
	template <typename T = void> T SetImageSize(uintptr_t image, float maxSize) {
		return ((T (*)(RGUIWindow*, uintptr_t, float))(Il2CppBase() + 0x44C0B30))(this, image, maxSize);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RGUIWindow*))(Il2CppBase() + 0x44C0D98))(this);
	}
	template <typename T = void> T OnClick_Close() {
		return ((T (*)(RGUIWindow*))(Il2CppBase() + 0x44C0E74))(this);
	}
	template <typename T = Il2CppVector2> T get_hidePosition() {
		return ((T (*)(RGUIWindow*))(Il2CppBase() + 0x44C0EDC))(this);
	}
	template <typename T = Il2CppVector2> T get_showPosition() {
		return ((T (*)(RGUIWindow*))(Il2CppBase() + 0x44C0F60))(this);
	}
	template <typename T = void> T ShowAnim() {
		return ((T (*)(RGUIWindow*))(Il2CppBase() + 0x44C0FE0))(this);
	}
	template <typename T = void> T CloseAnim() {
		return ((T (*)(RGUIWindow*))(Il2CppBase() + 0x44C1224))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(RGUIWindow*))(Il2CppBase() + 0x44C1490))(this);
	}

};

}
