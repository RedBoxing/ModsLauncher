#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityRealName.UI {

class CommonAdditionTips
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityRealName.UI", "CommonAdditionTips"));
	}

	template <typename T = uintptr_t> T& TipText() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& ConfirmBtn() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& ChangeRealNameBtn() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& QuitBtn() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& fromPlayTimeAddition() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& AfterShowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AfterHideView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T add_AfterShowView(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43F8E68))(0, value);
	}
	template <typename T = void> static T remove_AfterShowView(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43FC0D4))(0, value);
	}
	template <typename T = void> static T add_AfterHideView(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43F8F64))(0, value);
	}
	template <typename T = void> static T remove_AfterHideView(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43FC1D0))(0, value);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(CommonAdditionTips*))(Il2CppBase() + 0x43FC2D0))(this);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(CommonAdditionTips*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43FC5D8))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(CommonAdditionTips*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43FCBA8))(this, objects);
	}
	template <typename T = bool> T OnEvent(uintptr_t navigationEvent) {
		return ((T (*)(CommonAdditionTips*, uintptr_t))(Il2CppBase() + 0x43FCC8C))(this, navigationEvent);
	}
	template <typename T = void> T ClickConfirm() {
		return ((T (*)(CommonAdditionTips*))(Il2CppBase() + 0x43FCD00))(this);
	}
	template <typename T = void> T ClickChangeRealName() {
		return ((T (*)(CommonAdditionTips*))(Il2CppBase() + 0x43FCE50))(this);
	}
	template <typename T = uintptr_t> static T ShowTips(Il2CppString* tip, bool fromTimeAddition) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x43F940C))(0, tip, fromTimeAddition);
	}
	template <typename T = void> T iFixBaseProxy_InitView() {
		return ((T (*)(CommonAdditionTips*))(Il2CppBase() + 0x43FD024))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(CommonAdditionTips*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43FD028))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HideView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(CommonAdditionTips*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43FD02C))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_OnEvent(uintptr_t P0) {
		return ((T (*)(CommonAdditionTips*, uintptr_t))(Il2CppBase() + 0x43FD030))(this, P0);
	}

};

}
