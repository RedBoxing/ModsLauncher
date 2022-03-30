#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos {

class UIPointer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos", "UIPointer"));
	}

	template <typename T = bool> T& _hideHardwarePointer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _autoSort() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> T& _canvas() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T get_autoSort() {
		return ((T (*)(UIPointer*))(Il2CppBase() + 0x26866EC))(this);
	}
	template <typename T = void> T set_autoSort(bool value) {
		return ((T (*)(UIPointer*, bool))(Il2CppBase() + 0x268674C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIPointer*))(Il2CppBase() + 0x268680C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIPointer*))(Il2CppBase() + 0x2686A34))(this);
	}
	template <typename T = void> T OnTransformParentChanged() {
		return ((T (*)(UIPointer*))(Il2CppBase() + 0x2686B44))(this);
	}
	template <typename T = void> T OnCanvasGroupChanged() {
		return ((T (*)(UIPointer*))(Il2CppBase() + 0x2686BB0))(this);
	}
	template <typename T = void> T OnScreenPositionChanged(Il2CppVector2 screenPosition) {
		return ((T (*)(UIPointer*, Il2CppVector2))(Il2CppBase() + 0x2686C1C))(this, screenPosition);
	}
	template <typename T = void> T GetDependencies() {
		return ((T (*)(UIPointer*))(Il2CppBase() + 0x268696C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(UIPointer*))(Il2CppBase() + 0x2686E5C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTransformParentChanged() {
		return ((T (*)(UIPointer*))(Il2CppBase() + 0x2686E64))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnCanvasGroupChanged() {
		return ((T (*)(UIPointer*))(Il2CppBase() + 0x2686E6C))(this);
	}

};

}
