#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PrivacyPolicyView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrivacyPolicyView"));
	}

	template <typename T = uintptr_t> T& UserAgreeBtn() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& PrivacyNoticeBtn() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& ChildPrivacyBtn() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& AgreeBtn() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& DisAgreeBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& UserAgreeSR() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& PrivacyNoticeSR() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ChildPrivacySR() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& showNoticeSRs() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ReadPrivacyToggle() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ReadSprite() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& UnReadSprite() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ExitBtn() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ContentTransform() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& Permissions() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& permissionItem() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& permissionContent() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& PrivacyVerticalLayoutGroup() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PrivacyImages() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& hasFixImageHeight() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& permissionItem2Tog() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& canvasTransform() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> static T& DisAgreePrivacyPolicy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AgreePrivacyPolicy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& ReCallAgreePrivacyPolicy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = unsigned char> static T& interval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = unsigned char> T& frame() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppVector2> T& ScreenResolution() {
		return *(T*)((uintptr_t)this + 0x114);
	}

	template <typename T = void> static T add_DisAgreePrivacyPolicy(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43A72A8))(0, value);
	}
	template <typename T = void> static T remove_DisAgreePrivacyPolicy(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43A73A4))(0, value);
	}
	template <typename T = void> static T add_AgreePrivacyPolicy(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43A74A0))(0, value);
	}
	template <typename T = void> static T remove_AgreePrivacyPolicy(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43A75A0))(0, value);
	}
	template <typename T = void> static T add_ReCallAgreePrivacyPolicy(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43A76A0))(0, value);
	}
	template <typename T = void> static T remove_ReCallAgreePrivacyPolicy(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43A77A0))(0, value);
	}
	template <typename T = bool> static T get_HasAgreePrivacyPolicy() {
		return ((T (*)(void *))(Il2CppBase() + 0x43A78A0))(0);
	}
	template <typename T = void> static T set_HasAgreePrivacyPolicy(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x43A7938))(0, value);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(PrivacyPolicyView*))(Il2CppBase() + 0x43A79CC))(this);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(PrivacyPolicyView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43A919C))(this, objects);
	}
	template <typename T = void> static T ShowWindow(uintptr_t parent, bool forceShowPrivacy) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x43A927C))(0, parent, forceShowPrivacy);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PrivacyPolicyView*))(Il2CppBase() + 0x43A9440))(this);
	}
	template <typename T = void> T Disagree() {
		return ((T (*)(PrivacyPolicyView*))(Il2CppBase() + 0x43A9684))(this);
	}
	template <typename T = void> T Agree() {
		return ((T (*)(PrivacyPolicyView*))(Il2CppBase() + 0x43A9854))(this);
	}
	template <typename T = void> T ClickShowNotice(uintptr_t gameObject, uintptr_t btn) {
		return ((T (*)(PrivacyPolicyView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x43A9CE8))(this, gameObject, btn);
	}
	template <typename T = void> T SetPermission(Il2CppArray<uintptr_t>* permissionItemDatas) {
		return ((T (*)(PrivacyPolicyView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43A8C98))(this, permissionItemDatas);
	}
	template <typename T = void> T DealAgreeBtnState() {
		return ((T (*)(PrivacyPolicyView*))(Il2CppBase() + 0x43A89E0))(this);
	}
	template <typename T = uintptr_t> T ChangeImageHeight() {
		return ((T (*)(PrivacyPolicyView*))(Il2CppBase() + 0x43A95D0))(this);
	}
	template <typename T = void> T InitViewb__34_0() {
		return ((T (*)(PrivacyPolicyView*))(Il2CppBase() + 0x43A9FA4))(this);
	}
	template <typename T = void> T InitViewb__34_1() {
		return ((T (*)(PrivacyPolicyView*))(Il2CppBase() + 0x43A9FB0))(this);
	}
	template <typename T = void> T InitViewb__34_2() {
		return ((T (*)(PrivacyPolicyView*))(Il2CppBase() + 0x43AA000))(this);
	}
	template <typename T = void> T InitViewb__34_3(bool _) {
		return ((T (*)(PrivacyPolicyView*, bool))(Il2CppBase() + 0x43AA00C))(this, _);
	}
	template <typename T = void> T InitViewb__34_4() {
		return ((T (*)(PrivacyPolicyView*))(Il2CppBase() + 0x43AA010))(this);
	}
	template <typename T = uintptr_t> T InitViewb__34_5(int32_t _) {
		return ((T (*)(PrivacyPolicyView*, int32_t))(Il2CppBase() + 0x43AA074))(this, _);
	}
	template <typename T = void> T Disagreeb__41_1() {
		return ((T (*)(PrivacyPolicyView*))(Il2CppBase() + 0x43AA0AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_InitView() {
		return ((T (*)(PrivacyPolicyView*))(Il2CppBase() + 0x43AA458))(this);
	}
	template <typename T = void> T iFixBaseProxy_HideView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(PrivacyPolicyView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43AA460))(this, P0);
	}

};

}
