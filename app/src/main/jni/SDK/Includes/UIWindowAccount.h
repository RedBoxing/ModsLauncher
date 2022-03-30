#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowAccount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowAccount"));
	}

	template <typename T = uintptr_t> T& inputAccount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& inputPassword() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& trForget() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& trSignup() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& loginContent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& registeContent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& registeContentExplainText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& btnForgetPassword() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& btnPasswordSeen() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& btnPasswordUnSeen() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& btnNewPassswordSeenOrUnseen() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& btnLoginView() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& btnRegisteView() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& inputForgetAccount() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& inputNewPassword() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& inputConfirmNewPassword() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& showEye() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& hideEye() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& showContentSprite() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& hideContentSprite() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& usedAccountsDropdown() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& dropDownArrow() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& usedAccounts() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = void*> T& onLoginSuccess() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> static T& validateAccount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& RectTransform() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& AgeBtn() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& uITitle() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& UiWindowRegiste() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& Toggle() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& LinkImageText() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& inited() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& currectShowView() {
		return *(T*)((uintptr_t)this + 0x10C);
	}

	template <typename T = Il2CppString*> static T get_defaultAccount() {
		return ((T (*)(void *))(Il2CppBase() + 0x457B3B8))(0);
	}
	template <typename T = void> static T set_defaultAccount(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x457B44C))(0, value);
	}
	template <typename T = Il2CppString*> static T get_defaultPassword() {
		return ((T (*)(void *))(Il2CppBase() + 0x457B4E0))(0);
	}
	template <typename T = void> static T set_defaultPassword(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x457B5AC))(0, value);
	}
	template <typename T = Il2CppString*> static T get_UsedAccounts() {
		return ((T (*)(void *))(Il2CppBase() + 0x457B65C))(0);
	}
	template <typename T = void> static T set_UsedAccounts(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x457B6F0))(0, value);
	}
	template <typename T = int32_t> static T get_LoginOrRegisteErrCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x457B784))(0);
	}
	template <typename T = void> static T set_LoginOrRegisteErrCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x457B810))(0, value);
	}
	template <typename T = int64_t> static T get_LastLoginOrRegisteErrorTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x457B8A4))(0);
	}
	template <typename T = void> static T set_LastLoginOrRegisteErrorTime(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x457B968))(0, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x457BA20))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x457BA80))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x457C750))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x457C90C))(this);
	}
	template <typename T = void> T ClickLinkImageText(Il2CppString* data) {
		return ((T (*)(UIWindowAccount*, Il2CppString*))(Il2CppBase() + 0x457CAC8))(this, data);
	}
	template <typename T = void> T OnShown() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x457CC1C))(this);
	}
	template <typename T = void> T OnLogout() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x457CED4))(this);
	}
	template <typename T = void> T LoadUsedAccounts() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x457C3D8))(this);
	}
	template <typename T = void> T AddUsedAccounts(Il2CppString* account) {
		return ((T (*)(UIWindowAccount*, Il2CppString*))(Il2CppBase() + 0x457CFDC))(this, account);
	}
	template <typename T = void> T RemoveUsedAccount(Il2CppString* account) {
		return ((T (*)(UIWindowAccount*, Il2CppString*))(Il2CppBase() + 0x457D114))(this, account);
	}
	template <typename T = void> T ViewLoadUsedAccounts() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x457C534))(this);
	}
	template <typename T = void> T onDropdownValueChanged(int32_t value) {
		return ((T (*)(UIWindowAccount*, int32_t))(Il2CppBase() + 0x457D210))(this, value);
	}
	template <typename T = bool> T CheckIsFrequentInvalid() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x457D31C))(this);
	}
	template <typename T = void> T RefleshIPLogin() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x457DC18))(this);
	}
	template <typename T = void> T OnLogin(uintptr_t errCode) {
		return ((T (*)(UIWindowAccount*, uintptr_t))(Il2CppBase() + 0x457DD40))(this, errCode);
	}
	template <typename T = void> T OnForceChangePassword(uintptr_t err) {
		return ((T (*)(UIWindowAccount*, uintptr_t))(Il2CppBase() + 0x457E808))(this, err);
	}
	template <typename T = void> T OnValidateAccount(uintptr_t errCode) {
		return ((T (*)(UIWindowAccount*, uintptr_t))(Il2CppBase() + 0x457F000))(this, errCode);
	}
	template <typename T = void> T OnClick_Login() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x457F198))(this);
	}
	template <typename T = bool> T CheckAccountValid(Il2CppString* str, bool showMsg) {
		return ((T (*)(UIWindowAccount*, Il2CppString*, bool))(Il2CppBase() + 0x457F47C))(this, str, showMsg);
	}
	template <typename T = bool> T CheckPasswordValid(Il2CppString* str, bool showMsg) {
		return ((T (*)(UIWindowAccount*, Il2CppString*, bool))(Il2CppBase() + 0x457F5B0))(this, str, showMsg);
	}
	template <typename T = void> T OnClick_Signup_Cancel() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x457FA48))(this);
	}
	template <typename T = void> T OnClick_Close() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x457FAD8))(this);
	}
	template <typename T = void> T OnClick_ForgetPassword() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x457FE80))(this);
	}
	template <typename T = void> T OnClick_ForceChangePassword() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x457FFE8))(this);
	}
	template <typename T = void> T ChangePWForce(Il2CppString* sms) {
		return ((T (*)(UIWindowAccount*, Il2CppString*))(Il2CppBase() + 0x4580394))(this, sms);
	}
	template <typename T = void> T OnClick_ShowPassword() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x4580658))(this);
	}
	template <typename T = void> T OnClick_HidePassword() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x458083C))(this);
	}
	template <typename T = bool> T get_isShowLogin() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x4580A20))(this);
	}
	template <typename T = void> T OnClick_LoginView() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x4580A88))(this);
	}
	template <typename T = void> T OnClick_RegisteView() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x4580B78))(this);
	}
	template <typename T = void> T SetShowView(uintptr_t view) {
		return ((T (*)(UIWindowAccount*, uintptr_t))(Il2CppBase() + 0x457EB98))(this, view);
	}
	template <typename T = void> T ShowMessage(Il2CppString* msg, float duration) {
		return ((T (*)(UIWindowAccount*, Il2CppString*, float))(Il2CppBase() + 0x457E5F0))(this, msg, duration);
	}
	template <typename T = void> T ShowLoading() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x4580BDC))(this);
	}
	template <typename T = void> T DefaultLogin() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x4580C4C))(this);
	}
	template <typename T = void> T Login(Il2CppString* account, Il2CppString* password) {
		return ((T (*)(UIWindowAccount*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x457F740))(this, account, password);
	}
	template <typename T = void> T OnGetRealAccount(Il2CppString* account, Il2CppString* password) {
		return ((T (*)(UIWindowAccount*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4580D6C))(this, account, password);
	}
	template <typename T = void> T HideLoading() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x457F12C))(this);
	}
	template <typename T = void> T ShowTips(int32_t tipIndex) {
		return ((T (*)(UIWindowAccount*, int32_t))(Il2CppBase() + 0x457FC8C))(this, tipIndex);
	}
	template <typename T = void> T ShowWindow() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x4580DE4))(this);
	}
	template <typename T = void> T HideWindow() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x4580E9C))(this);
	}
	template <typename T = void> T SetAccount(Il2CppString* account) {
		return ((T (*)(UIWindowAccount*, Il2CppString*))(Il2CppBase() + 0x45805CC))(this, account);
	}
	template <typename T = void> T ClearPassWord() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x457E540))(this);
	}
	template <typename T = Il2CppString*> T GetCurrectPW() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x4580F54))(this);
	}
	template <typename T = Il2CppString*> T GetCurrectAccount() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x4580FC8))(this);
	}
	template <typename T = void> T OnClickShowOrHideNewPassWord() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x458103C))(this);
	}
	template <typename T = void> T ShowOrHidePassWord(uintptr_t inputField, uintptr_t button, uintptr_t input) {
		return ((T (*)(UIWindowAccount*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x45810A4))(this, inputField, button, input);
	}
	template <typename T = void> T UpdateArror() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x45815A8))(this);
	}
	template <typename T = void> T ChangeExplainText() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x458177C))(this);
	}
	template <typename T = void> T OnLoginNotFound() {
		return ((T (*)(UIWindowAccount*))(Il2CppBase() + 0x457E724))(this);
	}
	template <typename T = void> T RefleshIPLoginb__60_0(bool success) {
		return ((T (*)(UIWindowAccount*, bool))(Il2CppBase() + 0x4581854))(this, success);
	}
	template <typename T = void> T Loginb__84_0(uintptr_t exp) {
		return ((T (*)(UIWindowAccount*, uintptr_t))(Il2CppBase() + 0x45819A0))(this, exp);
	}
	template <typename T = void> T Loginb__84_1(uintptr_t exp) {
		return ((T (*)(UIWindowAccount*, uintptr_t))(Il2CppBase() + 0x4581B64))(this, exp);
	}

};

}
