#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowResetPassword
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowResetPassword"));
	}

	template <typename T = uintptr_t> T& UiWindowAccount() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& UiWindowPhoneVerify() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& Content() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& AccountGA() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& SMSCodeGA() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& PasswordGA() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ConformPasswordGA() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Account() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SMSCode() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& Password() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ConfirmPassword() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& SendSMSCodeBtn() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ChangePasswordBtn() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& ShowSendSmsSprite() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& HideSendSmsSprite() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& AccountType() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowResetPassword*))(Il2CppBase() + 0x431F980))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWindowResetPassword*))(Il2CppBase() + 0x431FBB8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWindowResetPassword*))(Il2CppBase() + 0x431FD3C))(this);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UIWindowResetPassword*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x431FEC0))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UIWindowResetPassword*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x431FFB4))(this, objects);
	}
	template <typename T = void> T ClickSendSMSCode() {
		return ((T (*)(UIWindowResetPassword*))(Il2CppBase() + 0x432014C))(this);
	}
	template <typename T = void> T ClickChangePasswordBtn() {
		return ((T (*)(UIWindowResetPassword*))(Il2CppBase() + 0x43203F4))(this);
	}
	template <typename T = void> T ClickCloseBtn() {
		return ((T (*)(UIWindowResetPassword*))(Il2CppBase() + 0x4320AA0))(this);
	}
	template <typename T = void> T AccountValueChange(Il2CppString* value) {
		return ((T (*)(UIWindowResetPassword*, Il2CppString*))(Il2CppBase() + 0x4320B44))(this, value);
	}
	template <typename T = void> T EventShowChangePassword(Il2CppString* account) {
		return ((T (*)(UIWindowResetPassword*, Il2CppString*))(Il2CppBase() + 0x4320C58))(this, account);
	}
	template <typename T = void> T EventHideChangePassword() {
		return ((T (*)(UIWindowResetPassword*))(Il2CppBase() + 0x4320D30))(this);
	}
	template <typename T = void> T sendSMSCode() {
		return ((T (*)(UIWindowResetPassword*))(Il2CppBase() + 0x4320270))(this);
	}
	template <typename T = void> T ChangePWForce(Il2CppString* sms) {
		return ((T (*)(UIWindowResetPassword*, Il2CppString*))(Il2CppBase() + 0x43208A0))(this, sms);
	}
	template <typename T = bool> T CheckIsFrequentClick() {
		return ((T (*)(UIWindowResetPassword*))(Il2CppBase() + 0x4320DD4))(this);
	}
	template <typename T = uintptr_t> T ShowIntervalBtnText() {
		return ((T (*)(UIWindowResetPassword*))(Il2CppBase() + 0x43210E4))(this);
	}
	template <typename T = void> T sendSMSCodeb__28_0() {
		return ((T (*)(UIWindowResetPassword*))(Il2CppBase() + 0x43211CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(UIWindowResetPassword*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x432150C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HideView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(UIWindowResetPassword*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4321514))(this, P0);
	}

};

}
