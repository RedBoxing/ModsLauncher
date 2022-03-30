#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class UIControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "UIControl"));
	}

	template <typename T = uintptr_t> T& title() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _showTitle() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& _uidCounter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(UIControl*))(Il2CppBase() + 0x1BDF7B0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIControl*))(Il2CppBase() + 0x1BDF810))(this);
	}
	template <typename T = bool> T get_showTitle() {
		return ((T (*)(UIControl*))(Il2CppBase() + 0x1BDF924))(this);
	}
	template <typename T = void> T set_showTitle(bool value) {
		return ((T (*)(UIControl*, bool))(Il2CppBase() + 0x1BDF984))(this, value);
	}
	template <typename T = void> T SetCancelCallback(uintptr_t cancelCallback) {
		return ((T (*)(UIControl*, uintptr_t))(Il2CppBase() + 0x1BDFA90))(this, cancelCallback);
	}
	template <typename T = int32_t> static T GetNextUid() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BDF874))(0);
	}

};

}
