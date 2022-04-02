#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityRealName.UI {

class VisitorConfirmView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityRealName.UI", "VisitorConfirmView"));
	}

	template <typename T = bool> static T& RefleshWaitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& countDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& txGuest() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& VerifyRealNameBtn() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& AfterShowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& AfterHideView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> static T add_AfterShowView(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43F8A0C))(0, value);
	}
	template <typename T = void> static T remove_AfterShowView(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43FFE54))(0, value);
	}
	template <typename T = void> static T add_AfterHideView(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43F8B3C))(0, value);
	}
	template <typename T = void> static T remove_AfterHideView(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43FFF84))(0, value);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(VisitorConfirmView*))(Il2CppBase() + 0x44000B4))(this);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(VisitorConfirmView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4400314))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(VisitorConfirmView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x440050C))(this, objects);
	}
	template <typename T = uintptr_t> static T ShowWindow() {
		return ((T (*)(void *))(Il2CppBase() + 0x43FEDF8))(0);
	}
	template <typename T = void> T OnClick_Register() {
		return ((T (*)(VisitorConfirmView*))(Il2CppBase() + 0x4400638))(this);
	}
	template <typename T = void> T OnClick_Close() {
		return ((T (*)(VisitorConfirmView*))(Il2CppBase() + 0x4400884))(this);
	}
	template <typename T = uintptr_t> T CountDown() {
		return ((T (*)(VisitorConfirmView*))(Il2CppBase() + 0x4400458))(this);
	}
	template <typename T = void> T iFixBaseProxy_InitView() {
		return ((T (*)(VisitorConfirmView*))(Il2CppBase() + 0x4400A7C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(VisitorConfirmView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4400A80))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HideView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(VisitorConfirmView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4400A84))(this, P0);
	}

};

}
