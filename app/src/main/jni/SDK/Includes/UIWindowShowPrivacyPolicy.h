#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowShowPrivacyPolicy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowShowPrivacyPolicy"));
	}

	template <typename T = Il2CppString*> static T& m_name() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& UserAgreeBtn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PrivacyNoticeBtn() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ChildPrivacyBtn() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& AgreeBtn() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& DisAgreeBtn() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& UserAgreeSR() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& PrivacyNoticeSR() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& ChildPrivacySR() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& ClickSprite() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& UnClickSprite() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& showNoticeSRs() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& LastClickBtn() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& UserAgreeMentText() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& PrivateNoticeText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ChildPrivacyNoticeText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ReadPrivacyToggle() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ReadSprite() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& UnReadSprite() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ExitBtn() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ContentTransform() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& Permissions() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& permissionItem() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& permissionContent() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& PrivacyVerticalLayoutGroup() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PrivacyImages() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& hasFixImageHeight() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& permissionItem2Tog() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = unsigned char> static T& interval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = unsigned char> T& frame() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppVector2> T& ScreenResolution() {
		return *(T*)((uintptr_t)this + 0xF4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowShowPrivacyPolicy*))(Il2CppBase() + 0x45BD904))(this);
	}
	template <typename T = void> static T ShowWindow(uintptr_t parent, bool forceShowPrivacy) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x45BEF30))(0, parent, forceShowPrivacy);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWindowShowPrivacyPolicy*))(Il2CppBase() + 0x45BF3B8))(this);
	}
	template <typename T = void> T Disagree() {
		return ((T (*)(UIWindowShowPrivacyPolicy*))(Il2CppBase() + 0x45BF5F8))(this);
	}
	template <typename T = void> T Agree() {
		return ((T (*)(UIWindowShowPrivacyPolicy*))(Il2CppBase() + 0x45BF860))(this);
	}
	template <typename T = void> T ClickShowNotice(uintptr_t gameObject, uintptr_t btn) {
		return ((T (*)(UIWindowShowPrivacyPolicy*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45BFEC4))(this, gameObject, btn);
	}
	template <typename T = void> T FixText() {
		return ((T (*)(UIWindowShowPrivacyPolicy*))(Il2CppBase() + 0x45BF104))(this);
	}
	template <typename T = void> T SetPermission(Il2CppArray<uintptr_t>* permissionItemDatas) {
		return ((T (*)(UIWindowShowPrivacyPolicy*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45BE96C))(this, permissionItemDatas);
	}
	template <typename T = void> T DealAgreeBtnState() {
		return ((T (*)(UIWindowShowPrivacyPolicy*))(Il2CppBase() + 0x45BE47C))(this);
	}
	template <typename T = uintptr_t> T ChangeImageHeight() {
		return ((T (*)(UIWindowShowPrivacyPolicy*))(Il2CppBase() + 0x45BF544))(this);
	}
	template <typename T = void> T FixYYB() {
		return ((T (*)(UIWindowShowPrivacyPolicy*))(Il2CppBase() + 0x45BEE78))(this);
	}
	template <typename T = void> T FixVIVO() {
		return ((T (*)(UIWindowShowPrivacyPolicy*))(Il2CppBase() + 0x45BEED4))(this);
	}
	template <typename T = void> T Awakeb__28_0() {
		return ((T (*)(UIWindowShowPrivacyPolicy*))(Il2CppBase() + 0x45C02C8))(this);
	}
	template <typename T = void> T Awakeb__28_1() {
		return ((T (*)(UIWindowShowPrivacyPolicy*))(Il2CppBase() + 0x45C02D4))(this);
	}
	template <typename T = void> T Awakeb__28_2() {
		return ((T (*)(UIWindowShowPrivacyPolicy*))(Il2CppBase() + 0x45C0324))(this);
	}
	template <typename T = void> T Awakeb__28_3(bool _) {
		return ((T (*)(UIWindowShowPrivacyPolicy*, bool))(Il2CppBase() + 0x45C0330))(this, _);
	}
	template <typename T = void> T Awakeb__28_4() {
		return ((T (*)(UIWindowShowPrivacyPolicy*))(Il2CppBase() + 0x45C0334))(this);
	}
	template <typename T = uintptr_t> T Awakeb__28_5(int32_t _) {
		return ((T (*)(UIWindowShowPrivacyPolicy*, int32_t))(Il2CppBase() + 0x45C03B0))(this, _);
	}
	template <typename T = void> T Disagreeb__34_1() {
		return ((T (*)(UIWindowShowPrivacyPolicy*))(Il2CppBase() + 0x45C03E8))(this);
	}

};

}
