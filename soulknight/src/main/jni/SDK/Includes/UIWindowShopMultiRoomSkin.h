#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowShopMultiRoomSkin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowShopMultiRoomSkin"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& skins() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buttons() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& iconList() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& randomSkinSprite() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& fishChipStore() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& lockedSkinBackground() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& unlockedSkinBackground() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& role_skin_list_fade_material() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& btn_click_clip() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& level_up_anim_clip() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& mask() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& close_btn() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& right_btn() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& left_btn() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& bottom_btn() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& bottom_text() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& skin_image() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& text_skin_title() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& text_skin_desc() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& text_state() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& role_skin_list() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& role_skin_proto() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& skin_list_background() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& buy_hero_skin_panel() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& buy_hero_skin_panel_skin_name() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& buy_hero_skin_panel_subtitle() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& buy_hero_skin_panel_hero_name() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& buy_hero_skin_panel_hero_image() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& buy_hero_skin_panel_skin_part_skin_image() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& buy_hero_skin_panel_skin_part_hero_image() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& buy_hero_skin_panel_skin_part_skin_text() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& buy_hero_skin_panel_buy_btn() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& buy_hero_skin_panel_close_btn() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& role_skin_icons() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = int32_t> T& currentIndex() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = bool> T& showRandom() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = int32_t> static T& randomSkinIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWindowShopMultiRoomSkin*))(Il2CppBase() + 0x45B7C1C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWindowShopMultiRoomSkin*))(Il2CppBase() + 0x45B7CF8))(this);
	}
	template <typename T = void> T EventUnlockRMB_Skin(uintptr_t hero, int32_t skinIndex) {
		return ((T (*)(UIWindowShopMultiRoomSkin*, uintptr_t, int32_t))(Il2CppBase() + 0x45B7DD4))(this, hero, skinIndex);
	}
	template <typename T = uintptr_t> static T ShowWindow() {
		return ((T (*)(void *))(Il2CppBase() + 0x45B8530))(0);
	}
	template <typename T = void> T FindReferences() {
		return ((T (*)(UIWindowShopMultiRoomSkin*))(Il2CppBase() + 0x45B8698))(this);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UIWindowShopMultiRoomSkin*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45B8E08))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UIWindowShopMultiRoomSkin*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45B8F1C))(this, objects);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(UIWindowShopMultiRoomSkin*))(Il2CppBase() + 0x45B9070))(this);
	}
	template <typename T = uintptr_t> T LoadSprites(Il2CppString* key) {
		return ((T (*)(UIWindowShopMultiRoomSkin*, Il2CppString*))(Il2CppBase() + 0x45B95CC))(this, key);
	}
	template <typename T = void> T ShowAnim(uintptr_t trans) {
		return ((T (*)(UIWindowShopMultiRoomSkin*, uintptr_t))(Il2CppBase() + 0x45B93E8))(this, trans);
	}
	template <typename T = void> T HideAnim(uintptr_t trans, uintptr_t Callback) {
		return ((T (*)(UIWindowShopMultiRoomSkin*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45B96D8))(this, trans, Callback);
	}
	template <typename T = void> T Next() {
		return ((T (*)(UIWindowShopMultiRoomSkin*))(Il2CppBase() + 0x45B9994))(this);
	}
	template <typename T = void> T Previous() {
		return ((T (*)(UIWindowShopMultiRoomSkin*))(Il2CppBase() + 0x45B9B78))(this);
	}
	template <typename T = void> T TrackCurSkin() {
		return ((T (*)(UIWindowShopMultiRoomSkin*))(Il2CppBase() + 0x45B9A40))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(UIWindowShopMultiRoomSkin*))(Il2CppBase() + 0x45B8320))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(UIWindowShopMultiRoomSkin*))(Il2CppBase() + 0x45BA728))(this);
	}
	template <typename T = void> T RefreshBtnBottom() {
		return ((T (*)(UIWindowShopMultiRoomSkin*))(Il2CppBase() + 0x45B9C18))(this);
	}
	template <typename T = void> T SetRoleSkinIcons(Il2CppList<void*>* list) {
		return ((T (*)(UIWindowShopMultiRoomSkin*, Il2CppList<void*>*))(Il2CppBase() + 0x45BA9F4))(this, list);
	}
	template <typename T = void> T OnSkinListButtonClicked(uintptr_t hero, int32_t skinIndex) {
		return ((T (*)(UIWindowShopMultiRoomSkin*, uintptr_t, int32_t))(Il2CppBase() + 0x45BB33C))(this, hero, skinIndex);
	}
	template <typename T = void> T BuyHeroSkinWithGem(uintptr_t hero, int32_t skinIndex) {
		return ((T (*)(UIWindowShopMultiRoomSkin*, uintptr_t, int32_t))(Il2CppBase() + 0x45BC194))(this, hero, skinIndex);
	}
	template <typename T = void> T BuyHeroSkinWithMoney(uintptr_t hero, int32_t skinIndex) {
		return ((T (*)(UIWindowShopMultiRoomSkin*, uintptr_t, int32_t))(Il2CppBase() + 0x45BC54C))(this, hero, skinIndex);
	}
	template <typename T = uintptr_t> T ScrollRectDontFadeAtLeftOrRight() {
		return ((T (*)(UIWindowShopMultiRoomSkin*))(Il2CppBase() + 0x45BB288))(this);
	}
	template <typename T = int32_t> T CompareHero(void* value1, void* value2) {
		return ((T (*)(UIWindowShopMultiRoomSkin*, void*, void*))(Il2CppBase() + 0x45BC6C0))(this, value1, value2);
	}
	template <typename T = void> T RefreshSkinState(bool unlocked) {
		return ((T (*)(UIWindowShopMultiRoomSkin*, bool))(Il2CppBase() + 0x45BA820))(this, unlocked);
	}
	template <typename T = void> T OpenFishChipStore() {
		return ((T (*)(UIWindowShopMultiRoomSkin*))(Il2CppBase() + 0x45BC834))(this);
	}
	template <typename T = uintptr_t> T RefreshStateSize(bool unlocked) {
		return ((T (*)(UIWindowShopMultiRoomSkin*, bool))(Il2CppBase() + 0x45BC750))(this, unlocked);
	}
	template <typename T = void> T SetMultiRoomSkinIndex(int32_t skinIndex) {
		return ((T (*)(UIWindowShopMultiRoomSkin*, int32_t))(Il2CppBase() + 0x45BC9FC))(this, skinIndex);
	}
	template <typename T = void> T OpenBuyHeroSkinPanel() {
		return ((T (*)(UIWindowShopMultiRoomSkin*))(Il2CppBase() + 0x45BBF88))(this);
	}
	template <typename T = void> T CloseBuyHeroSkinPanel() {
		return ((T (*)(UIWindowShopMultiRoomSkin*))(Il2CppBase() + 0x45B8060))(this);
	}
	template <typename T = uintptr_t> T DelayPlayLevelUpClip() {
		return ((T (*)(UIWindowShopMultiRoomSkin*))(Il2CppBase() + 0x45BCC28))(this);
	}
	template <typename T = void> T InitViewb__45_0() {
		return ((T (*)(UIWindowShopMultiRoomSkin*))(Il2CppBase() + 0x45BCD78))(this);
	}
	template <typename T = void> T RefreshBtnBottomb__54_0() {
		return ((T (*)(UIWindowShopMultiRoomSkin*))(Il2CppBase() + 0x45BCE50))(this);
	}
	template <typename T = void> T OpenFishChipStoreb__62_0() {
		return ((T (*)(UIWindowShopMultiRoomSkin*))(Il2CppBase() + 0x45BCE78))(this);
	}
	template <typename T = void> T CloseBuyHeroSkinPanelb__66_0() {
		return ((T (*)(UIWindowShopMultiRoomSkin*))(Il2CppBase() + 0x45BCF04))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(UIWindowShopMultiRoomSkin*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45BCF50))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HideView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(UIWindowShopMultiRoomSkin*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45BCF58))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_InitView() {
		return ((T (*)(UIWindowShopMultiRoomSkin*))(Il2CppBase() + 0x45BCF60))(this);
	}

};

}
