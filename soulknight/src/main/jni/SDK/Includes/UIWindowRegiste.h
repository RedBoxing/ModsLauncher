#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowRegiste
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowRegiste"));
	}

	template <typename T = uintptr_t> T& uIWindowAccount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& uITitle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& inputAccount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& inputPassword() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& confirmInputPassword() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& btnPasswordSeenOrUnSeen() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& showEye() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& hideEye() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& uIWindowRegisteConfirm() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& registe_confirm_email_yours() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& InputRegistePhonePassword() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& InputRegistePhoneConfirmPassword() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& trSignup() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& RegisteBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& EmailRegisteGa() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& PhoneRegisteGa() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& PhoneRegistSendSMSCodeGa() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& PhoneRegistSetPasswordGa() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& GuideText() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& inited() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& currectPhoneRegisteView() {
		return *(T*)((uintptr_t)this + 0xB4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowRegiste*))(Il2CppBase() + 0x431B384))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UIWindowRegiste*))(Il2CppBase() + 0x431B3E4))(this);
	}
	template <typename T = void> T ShowView() {
		return ((T (*)(UIWindowRegiste*))(Il2CppBase() + 0x431B870))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWindowRegiste*))(Il2CppBase() + 0x431BFD0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWindowRegiste*))(Il2CppBase() + 0x431C1FC))(this);
	}
	template <typename T = void> T EventSendSMSResult(uintptr_t errCode) {
		return ((T (*)(UIWindowRegiste*, uintptr_t))(Il2CppBase() + 0x431C428))(this, errCode);
	}
	template <typename T = void> T RefleshIPRegiste() {
		return ((T (*)(UIWindowRegiste*))(Il2CppBase() + 0x431C5A0))(this);
	}
	template <typename T = void> T SetPhoneRegisteView(uintptr_t view) {
		return ((T (*)(UIWindowRegiste*, uintptr_t))(Il2CppBase() + 0x431BB10))(this, view);
	}
	template <typename T = void> T ClickPhoneRegiste() {
		return ((T (*)(UIWindowRegiste*))(Il2CppBase() + 0x431C6E8))(this);
	}
	template <typename T = void> T ClickEmailRegiste() {
		return ((T (*)(UIWindowRegiste*))(Il2CppBase() + 0x431CDAC))(this);
	}
	template <typename T = void> T Reg(Il2CppString* account, Il2CppString* password) {
		return ((T (*)(UIWindowRegiste*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x431CC00))(this, account, password);
	}
	template <typename T = void> T OnClick_Close() {
		return ((T (*)(UIWindowRegiste*))(Il2CppBase() + 0x431D5B8))(this);
	}
	template <typename T = void> T OnClickShowOrHidePassWord() {
		return ((T (*)(UIWindowRegiste*))(Il2CppBase() + 0x431DA18))(this);
	}
	template <typename T = bool> T CheckAccountValid(Il2CppString* str, bool showMsg) {
		return ((T (*)(UIWindowRegiste*, Il2CppString*, bool))(Il2CppBase() + 0x431D2E0))(this, str, showMsg);
	}
	template <typename T = bool> T CheckPasswordValid(Il2CppString* str, bool showMsg) {
		return ((T (*)(UIWindowRegiste*, Il2CppString*, bool))(Il2CppBase() + 0x431CB7C))(this, str, showMsg);
	}
	template <typename T = bool> T RegisteCheckPasswordValid(Il2CppString* str, bool showMsg) {
		return ((T (*)(UIWindowRegiste*, Il2CppString*, bool))(Il2CppBase() + 0x431DF84))(this, str, showMsg);
	}
	template <typename T = void> T ShowOrHidePassWord(uintptr_t inputField, uintptr_t button, uintptr_t input) {
		return ((T (*)(UIWindowRegiste*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x431DA80))(this, inputField, button, input);
	}
	template <typename T = void> T ShowMessage(Il2CppString* msg, float duration) {
		return ((T (*)(UIWindowRegiste*, Il2CppString*, float))(Il2CppBase() + 0x431E0D0))(this, msg, duration);
	}
	template <typename T = void> T ShowTips(int32_t tipIndex) {
		return ((T (*)(UIWindowRegiste*, int32_t))(Il2CppBase() + 0x431D814))(this, tipIndex);
	}
	template <typename T = void> T OnAlreadySendNeedVarifyEmail() {
		return ((T (*)(UIWindowRegiste*))(Il2CppBase() + 0x431E1E4))(this);
	}
	template <typename T = void> T ShowAccountData() {
		return ((T (*)(UIWindowRegiste*))(Il2CppBase() + 0x431E2CC))(this);
	}
	template <typename T = Il2CppString*> T GetInputEmail() {
		return ((T (*)(UIWindowRegiste*))(Il2CppBase() + 0x431E880))(this);
	}
	template <typename T = Il2CppString*> T EmailToLowerCase(Il2CppString* email) {
		return ((T (*)(UIWindowRegiste*, Il2CppString*))(Il2CppBase() + 0x431D184))(this, email);
	}
	template <typename T = void> T ShowConfirmEmailYours(Il2CppString* email, uintptr_t confirmAction) {
		return ((T (*)(UIWindowRegiste*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x431D378))(this, email, confirmAction);
	}
	template <typename T = void> T HideConfirmEmailYours() {
		return ((T (*)(UIWindowRegiste*))(Il2CppBase() + 0x431D95C))(this);
	}
	template <typename T = void> T RefleshIPRegisteb__27_0(bool success) {
		return ((T (*)(UIWindowRegiste*, bool))(Il2CppBase() + 0x431E910))(this, success);
	}

};

}
