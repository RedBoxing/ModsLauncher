#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCloudSave.UI {

class UIWindowPhoneVerify
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCloudSave.UI", "UIWindowPhoneVerify"));
	}

	template <typename T = uintptr_t> T& Content() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& GuideText() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& InputPhoneAccount() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& InputPhoneSMSCode() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SendSMSCodeBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& VerifySMSCode() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ShowSendSmsSprite() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& HideSendSmsSprite() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LogoGa() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& SmsCodeFrom() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& Toggle() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& LinkImageText() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = int64_t> static T get_LastSendSMSTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x46416E0))(0);
	}
	template <typename T = void> static T set_LastSendSMSTime(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x46417A4))(0, value);
	}
	template <typename T = int32_t> static T get_ClickVerifySMSCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x464185C))(0);
	}
	template <typename T = void> static T set_ClickVerifySMSCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x46418E8))(0, value);
	}
	template <typename T = int64_t> static T get_LastVerifySMSTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x464197C))(0);
	}
	template <typename T = void> static T set_LastVerifySMSTime(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x4641A40))(0, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowPhoneVerify*))(Il2CppBase() + 0x4641AF8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWindowPhoneVerify*))(Il2CppBase() + 0x4641CB4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWindowPhoneVerify*))(Il2CppBase() + 0x4642098))(this);
	}
	template <typename T = void> T ClickLinkImageText(Il2CppString* data) {
		return ((T (*)(UIWindowPhoneVerify*, Il2CppString*))(Il2CppBase() + 0x464247C))(this, data);
	}
	template <typename T = void> T EventPhoneChangeAccount(Il2CppString* guideText) {
		return ((T (*)(UIWindowPhoneVerify*, Il2CppString*))(Il2CppBase() + 0x46424F0))(this, guideText);
	}
	template <typename T = void> T EventPhoneBind(Il2CppString* guideText) {
		return ((T (*)(UIWindowPhoneVerify*, Il2CppString*))(Il2CppBase() + 0x46427C8))(this, guideText);
	}
	template <typename T = void> T EventPhoneChangePassword(Il2CppString* text, Il2CppString* guideText) {
		return ((T (*)(UIWindowPhoneVerify*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4642968))(this, text, guideText);
	}
	template <typename T = void> T EventPhoneRegAccount(Il2CppString* text) {
		return ((T (*)(UIWindowPhoneVerify*, Il2CppString*))(Il2CppBase() + 0x4642BA8))(this, text);
	}
	template <typename T = void> T EventClosePhoneVerifyWindow() {
		return ((T (*)(UIWindowPhoneVerify*))(Il2CppBase() + 0x4642EA0))(this);
	}
	template <typename T = void> T EventSetPhoneGuideText(Il2CppString* text) {
		return ((T (*)(UIWindowPhoneVerify*, Il2CppString*))(Il2CppBase() + 0x4642F44))(this, text);
	}
	template <typename T = void> T EventSendSMSResult(uintptr_t errCode) {
		return ((T (*)(UIWindowPhoneVerify*, uintptr_t))(Il2CppBase() + 0x4642FBC))(this, errCode);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UIWindowPhoneVerify*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4643124))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UIWindowPhoneVerify*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4643368))(this, objects);
	}
	template <typename T = void> T SetGuideText(Il2CppString* text) {
		return ((T (*)(UIWindowPhoneVerify*, Il2CppString*))(Il2CppBase() + 0x4642690))(this, text);
	}
	template <typename T = void> T SetImageActive(bool active) {
		return ((T (*)(UIWindowPhoneVerify*, bool))(Il2CppBase() + 0x4642D2C))(this, active);
	}
	template <typename T = void> T SetCloseBtnActive(bool active) {
		return ((T (*)(UIWindowPhoneVerify*, bool))(Il2CppBase() + 0x4642DFC))(this, active);
	}
	template <typename T = void> T SetLogoGaActive(bool active) {
		return ((T (*)(UIWindowPhoneVerify*, bool))(Il2CppBase() + 0x4642724))(this, active);
	}
	template <typename T = void> T SetPhoneNumber(Il2CppString* phoneNumber) {
		return ((T (*)(UIWindowPhoneVerify*, Il2CppString*))(Il2CppBase() + 0x4642B1C))(this, phoneNumber);
	}
	template <typename T = uintptr_t> T ShowIntervalBtnText() {
		return ((T (*)(UIWindowPhoneVerify*))(Il2CppBase() + 0x46434A8))(this);
	}
	template <typename T = void> T ClickVerifySMSCode() {
		return ((T (*)(UIWindowPhoneVerify*))(Il2CppBase() + 0x464355C))(this);
	}
	template <typename T = void> T ClickSendSMSCode() {
		return ((T (*)(UIWindowPhoneVerify*))(Il2CppBase() + 0x46441EC))(this);
	}
	template <typename T = void> T sendSMSCode() {
		return ((T (*)(UIWindowPhoneVerify*))(Il2CppBase() + 0x4644408))(this);
	}
	template <typename T = bool> T CheckIsFrequentClick() {
		return ((T (*)(UIWindowPhoneVerify*))(Il2CppBase() + 0x4644588))(this);
	}
	template <typename T = bool> T CheckIsFrequentClickSMS() {
		return ((T (*)(UIWindowPhoneVerify*))(Il2CppBase() + 0x46438F0))(this);
	}
	template <typename T = void> T Awakeb__22_0() {
		return ((T (*)(UIWindowPhoneVerify*))(Il2CppBase() + 0x464488C))(this);
	}
	template <typename T = void> T sendSMSCodeb__43_0() {
		return ((T (*)(UIWindowPhoneVerify*))(Il2CppBase() + 0x46448F0))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(UIWindowPhoneVerify*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4644C28))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HideView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(UIWindowPhoneVerify*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4644C30))(this, P0);
	}

};

}
