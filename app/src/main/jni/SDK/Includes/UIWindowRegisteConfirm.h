#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowRegisteConfirm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowRegisteConfirm"));
	}

	template <typename T = bool> T& needReadTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& _checkTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& afterAgreeAction() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& contenText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& originContent() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Init() {
		return ((T (*)(UIWindowRegisteConfirm*))(Il2CppBase() + 0x431F124))(this);
	}
	template <typename T = void> T OnShown() {
		return ((T (*)(UIWindowRegisteConfirm*))(Il2CppBase() + 0x431E79C))(this);
	}
	template <typename T = uintptr_t> T ReadTimeReducing() {
		return ((T (*)(UIWindowRegisteConfirm*))(Il2CppBase() + 0x431F22C))(this);
	}
	template <typename T = void> T UpdateTimeText() {
		return ((T (*)(UIWindowRegisteConfirm*))(Il2CppBase() + 0x431F30C))(this);
	}
	template <typename T = void> T OnClickClose() {
		return ((T (*)(UIWindowRegisteConfirm*))(Il2CppBase() + 0x431F490))(this);
	}
	template <typename T = void> T OnClickDetailInfo() {
		return ((T (*)(UIWindowRegisteConfirm*))(Il2CppBase() + 0x431F510))(this);
	}
	template <typename T = void> T OnClickAgree() {
		return ((T (*)(UIWindowRegisteConfirm*))(Il2CppBase() + 0x431F5A0))(this);
	}
	template <typename T = void> T OnClickDisagree() {
		return ((T (*)(UIWindowRegisteConfirm*))(Il2CppBase() + 0x431F674))(this);
	}
	template <typename T = uintptr_t> T SetAfterClickAgreeAction(uintptr_t action) {
		return ((T (*)(UIWindowRegisteConfirm*, uintptr_t))(Il2CppBase() + 0x431E71C))(this, action);
	}
	template <typename T = uintptr_t> T SetEmail(Il2CppString* email) {
		return ((T (*)(UIWindowRegisteConfirm*, Il2CppString*))(Il2CppBase() + 0x431E514))(this, email);
	}
	template <typename T = uintptr_t> T SetPassword(Il2CppString* password) {
		return ((T (*)(UIWindowRegisteConfirm*, Il2CppString*))(Il2CppBase() + 0x431E618))(this, password);
	}
	template <typename T = uintptr_t> T SetTransParent(uintptr_t transform) {
		return ((T (*)(UIWindowRegisteConfirm*, uintptr_t))(Il2CppBase() + 0x431F720))(this, transform);
	}

};

}
