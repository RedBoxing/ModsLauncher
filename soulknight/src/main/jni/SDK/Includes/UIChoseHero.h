#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIChoseHero
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIChoseHero"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _hero_list() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skill_icons() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buff_sprite() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& weapon_icon_infos() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& levelup_clip() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& start_clip() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& max_buff_position() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppVector3> T& max_weapon_position() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& pet() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& hero_info() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& level_bar() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& temp_target() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& panel_right_down() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& skillList() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& character_count() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& char_index() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& _skin_index() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& Mode() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& hero_name() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& skin_subtitle() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& skill_name() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& skill_info() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& skill_info_x() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& skill_icon() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& buff_icon() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& weapon_icon() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& skin_subtitle_background() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& skin_mode() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& first_select() {
		return *(T*)((uintptr_t)this + 0x111);
	}
	template <typename T = uintptr_t> T& ui_mask_down() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppVector3> T& playerPosition() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& selectHeroroot() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& selectHerDef() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& uiUpDown() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = bool> T& cameraReturned() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& countdownRoot() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = bool> T& backPressed() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> static T& _skinAudioConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mechContainer() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& mechDialog() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& mech() {
		return *(T*)((uintptr_t)this + 0x170);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_HeroList() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x419C6E8))(this);
	}
	template <typename T = int32_t> T get_skin_index() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41B664C))(this);
	}
	template <typename T = void> T set_skin_index(int32_t value) {
		return ((T (*)(UIChoseHero*, int32_t))(Il2CppBase() + 0x41B66AC))(this, value);
	}
	template <typename T = uintptr_t> T get_Mode() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x419B524))(this);
	}
	template <typename T = void> T set_Mode(uintptr_t value) {
		return ((T (*)(UIChoseHero*, uintptr_t))(Il2CppBase() + 0x41B6720))(this, value);
	}
	template <typename T = bool> T get_NeedShowCountdown() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41B6728))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41B6808))(this);
	}
	template <typename T = void> T ShowMaskUpButton(bool show) {
		return ((T (*)(UIChoseHero*, bool))(Il2CppBase() + 0x41B7028))(this, show);
	}
	template <typename T = void> T SetupHeroList() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41B6E18))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41B7200))(this);
	}
	template <typename T = void> T AddKeyBinding() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41B7A58))(this);
	}
	template <typename T = void> T RemoveBinding() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41B7AB4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41B7B10))(this);
	}
	template <typename T = void> T OnDirection(uintptr_t dir) {
		return ((T (*)(UIChoseHero*, uintptr_t))(Il2CppBase() + 0x41B8ED8))(this, dir);
	}
	template <typename T = void> T OnDirChoseHero(uintptr_t dir) {
		return ((T (*)(UIChoseHero*, uintptr_t))(Il2CppBase() + 0x41BA2F4))(this, dir);
	}
	template <typename T = void> T GetChoicePet() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x419B180))(this);
	}
	template <typename T = void> T SkinBtnNext(int32_t value) {
		return ((T (*)(UIChoseHero*, int32_t))(Il2CppBase() + 0x41B9014))(this, value);
	}
	template <typename T = void> T RefreshSkillNew() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41BAC58))(this);
	}
	template <typename T = void> T BtnBack() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41B8434))(this);
	}
	template <typename T = void> T BtnConfirm() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41B7C80))(this);
	}
	template <typename T = uintptr_t> static T get_SkinAudioConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x41BBFD4))(0);
	}
	template <typename T = void> T UnLockPet(int32_t f_index) {
		return ((T (*)(UIChoseHero*, int32_t))(Il2CppBase() + 0x419E938))(this, f_index);
	}
	template <typename T = void> T UnLockEffect(uintptr_t f_target) {
		return ((T (*)(UIChoseHero*, uintptr_t))(Il2CppBase() + 0x41BC310))(this, f_target);
	}
	template <typename T = void> T UnLockEffect_1(uintptr_t f_target, uintptr_t f_sprite, Il2CppString* f_text, bool showUI) {
		return ((T (*)(UIChoseHero*, uintptr_t, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x41BC0C8))(this, f_target, f_sprite, f_text, showUI);
	}
	template <typename T = void> T ShowLR(int32_t value) {
		return ((T (*)(UIChoseHero*, int32_t))(Il2CppBase() + 0x41BC54C))(this, value);
	}
	template <typename T = void> T ShowCharInfoUI() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41BAF78))(this);
	}
	template <typename T = void> T ShowSkinUI() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41BA464))(this);
	}
	template <typename T = void> T HideUI() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41BADEC))(this);
	}
	template <typename T = void> T CameraReturn() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41BC608))(this);
	}
	template <typename T = void> T SetAwakeFalse() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41BC66C))(this);
	}
	template <typename T = void> T SetAwakeTrue() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41BC6CC))(this);
	}
	template <typename T = void> T CheckCharGray() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41BA570))(this);
	}
	template <typename T = void> T SelectTip() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41B7848))(this);
	}
	template <typename T = void> T NewPlayerTip() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41B77B0))(this);
	}
	template <typename T = void> T CreateTargetFinger() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41BC730))(this);
	}
	template <typename T = void> T GetChoiceMech(uintptr_t mechContainer) {
		return ((T (*)(UIChoseHero*, uintptr_t))(Il2CppBase() + 0x41BC8AC))(this, mechContainer);
	}
	template <typename T = void> T RefreshMech(int32_t mechIndex) {
		return ((T (*)(UIChoseHero*, int32_t))(Il2CppBase() + 0x41BA758))(this, mechIndex);
	}
	template <typename T = void> T RefreshMechDetail() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41BB08C))(this);
	}
	template <typename T = void> T BtnKtPlayClick() {
		return ((T (*)(UIChoseHero*))(Il2CppBase() + 0x41BCC9C))(this);
	}

};

}
