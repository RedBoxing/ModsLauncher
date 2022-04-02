#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.MVC {

class View1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.MVC", "View`1"));
	}

	template <typename T = uintptr_t> T& _controller() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _viewExtension() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T get_IsShowing() {
		return ((T (*)(View1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnShow(uintptr_t data) {
		return ((T (*)(View1*, uintptr_t))(Il2CppBase() + 0x0))(this, data);
	}
	template <typename T = void> T OnHide(uintptr_t data) {
		return ((T (*)(View1*, uintptr_t))(Il2CppBase() + 0x0))(this, data);
	}
	template <typename T = void> T OnRefresh(uintptr_t data) {
		return ((T (*)(View1*, uintptr_t))(Il2CppBase() + 0x0))(this, data);
	}
	template <typename T = void> T ProcessMessage(uintptr_t command, uintptr_t data) {
		return ((T (*)(View1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, command, data);
	}
	template <typename T = void> T OnBackButtonClicked() {
		return ((T (*)(View1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(View1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T HandleCommand(uintptr_t command, uintptr_t data) {
		return ((T (*)(View1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, command, data);
	}
	template <typename T = void> T DispatchMessage(uintptr_t message) {
		return ((T (*)(View1*, uintptr_t))(Il2CppBase() + 0x0))(this, message);
	}

};

}
