#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI {

class UIWindowSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI", "UIWindowSetting"));
	}

	template <typename T = bool> T& _isShowing() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _buttonsNavigationUtil() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Show() {
		return ((T (*)(UIWindowSetting*))(Il2CppBase() + 0x453E3A0))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(UIWindowSetting*))(Il2CppBase() + 0x453E404))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowSetting*))(Il2CppBase() + 0x453E464))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWindowSetting*))(Il2CppBase() + 0x453E514))(this);
	}

};

}
