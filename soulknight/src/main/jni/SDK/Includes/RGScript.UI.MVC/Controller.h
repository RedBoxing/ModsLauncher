#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.MVC {

class Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.MVC", "Controller"));
	}

	template <typename T = uintptr_t> T& _model() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _view() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsShowing() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T get_IsShowing() {
		return ((T (*)(Controller*))(Il2CppBase() + 0x44FC1B4))(this);
	}
	template <typename T = void> T set_IsShowing(bool value) {
		return ((T (*)(Controller*, bool))(Il2CppBase() + 0x44FC1BC))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Controller*))(Il2CppBase() + 0x44FC1C8))(this);
	}
	template <typename T = void> T DispatchMessage(uintptr_t message) {
		return ((T (*)(Controller*, uintptr_t))(Il2CppBase() + 0x44FC37C))(this, message);
	}
	template <typename T = void> T Show(uintptr_t extraParams) {
		return ((T (*)(Controller*, uintptr_t))(Il2CppBase() + 0x44E9280))(this, extraParams);
	}
	template <typename T = void> T Hide(uintptr_t extraParams) {
		return ((T (*)(Controller*, uintptr_t))(Il2CppBase() + 0x44FC6A0))(this, extraParams);
	}

};

}
