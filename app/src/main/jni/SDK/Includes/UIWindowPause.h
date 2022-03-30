#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowPause
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowPause"));
	}

	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& anim_ktplay() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& awake() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& color_light() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& color_back() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& unKnown_buff_sprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& characterBuffIcon() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& buffIcon() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& drinkBuffIcon() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& badassIcon() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& nothing_ui() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& gameModeInfo() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& customPlayerImageConfig() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& img_player() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& img_btn_setting() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& show_setting_bar() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& btn_bar1() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& btn_bar2() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& buff_list() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& trBuffInfo() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& txBuffInfo() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& imBuffInfo() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& factor_list() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppVector3> T& _initPlayerImgLocalScale() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppVector3> T& _initPlayerImgLocalPosition() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& RemoteFeedBackBtn() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& lastSelect() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0x148);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BA114))(this);
	}
	template <typename T = void> T AddKeyBinding() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BA620))(this);
	}
	template <typename T = void> T RemoveKeyBinding() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BA67C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BA6D8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BA9C4))(this);
	}
	template <typename T = void> T AddEvent() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BA740))(this);
	}
	template <typename T = void> T RemoveEvent() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BAA24))(this);
	}
	template <typename T = void> T OnHeroSelect(uintptr_t e) {
		return ((T (*)(UIWindowPause*, uintptr_t))(Il2CppBase() + 0x44BAB08))(this, e);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BAB7C))(this);
	}
	template <typename T = void> T UpdateInfo() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BA824))(this);
	}
	template <typename T = void> T ShowWindow() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BB4D8))(this);
	}
	template <typename T = void> T BtnHomeClick() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BB0BC))(this);
	}
	template <typename T = void> T BtnContinueClick() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BB57C))(this);
	}
	template <typename T = void> T BtnSettingClick() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BB31C))(this);
	}
	template <typename T = void> T BtnYesClick() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BADC8))(this);
	}
	template <typename T = void> T BtnNoClick() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BAF88))(this);
	}
	template <typename T = void> T UpdateBuffBar() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BBA78))(this);
	}
	template <typename T = void> T UpdateFactors() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BCE04))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetSortFactors() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BDD10))(this);
	}
	template <typename T = void> T SetPlayerImg() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BE3B8))(this);
	}
	template <typename T = void> T SetSkillInfo(uintptr_t image, int32_t heroIndex, int32_t skillIndex) {
		return ((T (*)(UIWindowPause*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x44BE8E8))(this, image, heroIndex, skillIndex);
	}
	template <typename T = void> T SetModeInfo(uintptr_t image, Il2CppString* mode) {
		return ((T (*)(UIWindowPause*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x44BEABC))(this, image, mode);
	}
	template <typename T = void> T SetCustomFactorInfo(uintptr_t image, Il2CppString* text, uintptr_t sprite) {
		return ((T (*)(UIWindowPause*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x44BDFC4))(this, image, text, sprite);
	}
	template <typename T = void> T SetBuffInfo(uintptr_t image, uintptr_t buff) {
		return ((T (*)(UIWindowPause*, uintptr_t, uintptr_t))(Il2CppBase() + 0x44BEC08))(this, image, buff);
	}
	template <typename T = void> T SetDrinkInfo(uintptr_t image, Il2CppString* drinkName) {
		return ((T (*)(UIWindowPause*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x44BEF88))(this, image, drinkName);
	}
	template <typename T = void> T SetFactorInfo(uintptr_t image, uintptr_t factor) {
		return ((T (*)(UIWindowPause*, uintptr_t, uintptr_t))(Il2CppBase() + 0x44BE134))(this, image, factor);
	}
	template <typename T = void> T ClearLongtouchEvent(uintptr_t image) {
		return ((T (*)(UIWindowPause*, uintptr_t))(Il2CppBase() + 0x44BCD04))(this, image);
	}
	template <typename T = void> T BtnKtPlayClick() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BF190))(this);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BF260))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(UIWindowPause*, bool))(Il2CppBase() + 0x44BF268))(this, value);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UIWindowPause*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44BF274))(this, objects);
	}
	template <typename T = void> T OnUpdateSize() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BF634))(this);
	}
	template <typename T = uintptr_t> T CaculateSize() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BF6A4))(this);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UIWindowPause*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44BB614))(this, objects);
	}
	template <typename T = bool> T OnEvent(uintptr_t navigationEvent) {
		return ((T (*)(UIWindowPause*, uintptr_t))(Il2CppBase() + 0x44BF758))(this, navigationEvent);
	}
	template <typename T = void> T ClickRemoteFeedBack() {
		return ((T (*)(UIWindowPause*))(Il2CppBase() + 0x44BF830))(this);
	}
	template <typename T = void> T ClearLongtouchEventb__53_0(bool isDown) {
		return ((T (*)(UIWindowPause*, bool))(Il2CppBase() + 0x44BF968))(this, isDown);
	}

};

}
