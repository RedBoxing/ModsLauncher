#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowCloudSave
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowCloudSave"));
	}

	template <typename T = uintptr_t> T& cloudPanel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& localPanel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& btnSave() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& btnLoad() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& txLoad() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> static T& currectUID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& agent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& window_go_confirm() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& window_set_email() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& confirmEmail() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& baiduUrl() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& needVerifyEmail() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& defaultGoConfirmString() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& ShowLoadingTransformParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& ShowLoadingCloudSaveParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> T& winAccount() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& winAccountDetail() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& windowRegiste() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& exitBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& uititle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458B544))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458BF40))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458C36C))(this);
	}
	template <typename T = void> T EventLogOut() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458C7F0))(this);
	}
	template <typename T = void> T EventBindInfo(uintptr_t err, uintptr_t smsCodeFrom) {
		return ((T (*)(UIWindowCloudSave*, uintptr_t, uintptr_t))(Il2CppBase() + 0x458C8EC))(this, err, smsCodeFrom);
	}
	template <typename T = void> T AccountBindPhone() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458CCD8))(this);
	}
	template <typename T = void> T EventSendSMSResult(uintptr_t errCode) {
		return ((T (*)(UIWindowCloudSave*, uintptr_t))(Il2CppBase() + 0x458CEB0))(this, errCode);
	}
	template <typename T = void> T EventVerifySMSResult(uintptr_t smsCodeFrom, Il2CppString* phoneNumber, Il2CppString* smsCode, bool success) {
		return ((T (*)(UIWindowCloudSave*, uintptr_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x458D0E0))(this, smsCodeFrom, phoneNumber, smsCode, success);
	}
	template <typename T = void> T FlushLocal() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458D530))(this);
	}
	template <typename T = void> T SaveGame() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458D668))(this);
	}
	template <typename T = void> T LoadGame() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458D6DC))(this);
	}
	template <typename T = void> T SetLoadText(Il2CppString* text) {
		return ((T (*)(UIWindowCloudSave*, Il2CppString*))(Il2CppBase() + 0x458D7A8))(this, text);
	}
	template <typename T = void> T OnClickClose() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x457FDD4))(this);
	}
	template <typename T = void> T HandleAccountWindow() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458BB24))(this);
	}
	template <typename T = void> T OnClick_AccountDetail() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458D8A4))(this);
	}
	template <typename T = void> T OnClick_CloudSaveInfo(bool isActive) {
		return ((T (*)(UIWindowCloudSave*, bool))(Il2CppBase() + 0x458D958))(this, isActive);
	}
	template <typename T = void> T OnClick_CloudSaveInfoiOS() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458DA4C))(this);
	}
	template <typename T = void> T OnLogout() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x4585630))(this);
	}
	template <typename T = void> T ShowSetEmail(bool isValidEmail) {
		return ((T (*)(UIWindowCloudSave*, bool))(Il2CppBase() + 0x458DADC))(this, isValidEmail);
	}
	template <typename T = void> T onInvalidDelayLogin(uintptr_t loginAction) {
		return ((T (*)(UIWindowCloudSave*, uintptr_t))(Il2CppBase() + 0x458DB4C))(this, loginAction);
	}
	template <typename T = void> T onUnKnownErr(uintptr_t err) {
		return ((T (*)(UIWindowCloudSave*, uintptr_t))(Il2CppBase() + 0x458DCDC))(this, err);
	}
	template <typename T = void> T CallVerifyEmail() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x4584FCC))(this);
	}
	template <typename T = void> T ShowGoConfirm(Il2CppString* email) {
		return ((T (*)(UIWindowCloudSave*, Il2CppString*))(Il2CppBase() + 0x458DEF0))(this, email);
	}
	template <typename T = void> T OnClick_GoConfirmEmail() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x4585CDC))(this);
	}
	template <typename T = void> T OnClick_CancelGoConfirmEmail() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458E3FC))(this);
	}
	template <typename T = void> T OnClick_ShowConfirmEmail() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458E52C))(this);
	}
	template <typename T = bool> T CanSentEmail(uintptr_t* remainMin) {
		return ((T (*)(UIWindowCloudSave*, uintptr_t*))(Il2CppBase() + 0x458E060))(this, remainMin);
	}
	template <typename T = Il2CppString*> T GetEmailMainUrl() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458E0D8))(this);
	}
	template <typename T = void> T OnApplicationFocus(bool focus) {
		return ((T (*)(UIWindowCloudSave*, bool))(Il2CppBase() + 0x458E7D4))(this, focus);
	}
	template <typename T = void> T OnClickHideWindowSetEmail() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458E918))(this);
	}
	template <typename T = void> T OnClickShowWindowSetEmail() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458E654))(this);
	}
	template <typename T = void> T HideSundryView() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458EA98))(this);
	}
	template <typename T = void> T GiveReward(Il2CppString* noneValue) {
		return ((T (*)(UIWindowCloudSave*, Il2CppString*))(Il2CppBase() + 0x45850EC))(this, noneValue);
	}
	template <typename T = void> T OnVerfyEmail(uintptr_t err) {
		return ((T (*)(UIWindowCloudSave*, uintptr_t))(Il2CppBase() + 0x458EC1C))(this, err);
	}
	template <typename T = uintptr_t> static T get_UiTitle() {
		return ((T (*)(void *))(Il2CppBase() + 0x458BDD8))(0);
	}
	template <typename T = void> static T ShowMessage(Il2CppString* msg, float duration) {
		return ((T (*)(void *, Il2CppString*, float))(Il2CppBase() + 0x4581A18))(0, msg, duration);
	}
	template <typename T = void> T Awakeb__19_0(Il2CppString* _) {
		return ((T (*)(UIWindowCloudSave*, Il2CppString*))(Il2CppBase() + 0x458EF48))(this, _);
	}
	template <typename T = void> T EventBindInfob__23_0() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458EF94))(this);
	}
	template <typename T = void> T AccountBindPhoneb__24_0() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458F018))(this);
	}
	template <typename T = void> T ShowSetEmailb__37_0() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458F144))(this);
	}
	template <typename T = void> T OnApplicationFocusb__47_0(uintptr_t err) {
		return ((T (*)(UIWindowCloudSave*, uintptr_t))(Il2CppBase() + 0x458F1B4))(this, err);
	}
	template <typename T = void> T OnApplicationFocusb__47_1() {
		return ((T (*)(UIWindowCloudSave*))(Il2CppBase() + 0x458F700))(this);
	}

};

}
