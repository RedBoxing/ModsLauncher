#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UICanvas
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UICanvas"));
	}

	template <typename T = uintptr_t> T& joy_stick() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& joy_control() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& emotion_btn_rect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ui_setting_bar() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ui_window_pause() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& message_bar() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& ui_map() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& ui_item_info() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& anim_gem() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _imgHp() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _initHpColor() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _textHp() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _imgArmor() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _initArmorColor() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _textArmor() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _imgEnergy() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _initEnergyColor() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _textEnergy() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _textCoin() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _textTokenCoin() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& weaponIconInitMaterial() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& weapon_icon() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& weapon_item_icon() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& weapon_consume() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& skill_icon_mask() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& skill_mask_ready() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& text_skill_count() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& image_skill_count() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& text_gems() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& text_gems2() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& btnSpecial() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& stateBar() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& infoBar() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& netSps() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& netInfoText() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& netInfoImg() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& canvas_world() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& object_tap() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& temp_ui() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& object_level() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = int32_t> T& control_mode() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& axis_mode() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& teaminfos() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& switchBettleUI() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = bool> T& useSwitchControl() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& gemParent() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& stateBarInvalidColor() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = Il2CppString*> T& stateBarInvalidText() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppString*> T& coinInvalidText() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& gemShakeTweener() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& _atkBtnSwitchProcess() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = int32_t> static T& BadAssIconIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& BossRushIconIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FactorIconProtoIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& armorSb() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& powerUpSkillMaskReadyColor() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& buffSkillMaskReadyColor() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& weaponCustomDisplayer() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uintptr_t> T& windowSandbox() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = uintptr_t> T& windowDefence() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> T& emoticonPanel() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uintptr_t> T& teamInfoPanel() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uintptr_t> T& uiNextLevel() {
		return *(T*)((uintptr_t)this + 0x220);
	}

	template <typename T = uintptr_t> T get_ui_window_pause() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A28BC))(this);
	}
	template <typename T = void> T set_ui_window_pause(uintptr_t value) {
		return ((T (*)(UICanvas*, uintptr_t))(Il2CppBase() + 0x41A28C4))(this, value);
	}
	template <typename T = uintptr_t> static T get_buttonAtkImageNormal() {
		return ((T (*)(void *))(Il2CppBase() + 0x41A28CC))(0);
	}
	template <typename T = uintptr_t> static T get_buttonEventImageNormal() {
		return ((T (*)(void *))(Il2CppBase() + 0x41A296C))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A2A0C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A4400))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A46AC))(this);
	}
	template <typename T = uintptr_t> T GetController() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> static T EnableEventSystem() {
		return ((T (*)(void *))(Il2CppBase() + 0x41A4958))(0);
	}
	template <typename T = void> static T DisableEventSystem() {
		return ((T (*)(void *))(Il2CppBase() + 0x41A4A34))(0);
	}
	template <typename T = void> T DisableAndReactivateEventSystem(float timeOfReactivation) {
		return ((T (*)(UICanvas*, float))(Il2CppBase() + 0x41A42EC))(this, timeOfReactivation);
	}
	template <typename T = void> T AddEvent() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A4460))(this);
	}
	template <typename T = void> T RemoveEvent() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A470C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A4B10))(this);
	}
	template <typename T = void> T GemShake() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A50A4))(this);
	}
	template <typename T = void> T OnApplicationPause() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A5100))(this);
	}
	template <typename T = uintptr_t> static T get_Inst() {
		return ((T (*)(void *))(Il2CppBase() + 0x41A5370))(0);
	}
	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x419B52C))(0);
	}
	template <typename T = void> T SetUpJoyController() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A53C4))(this);
	}
	template <typename T = void> T UnUseJoyController() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A54F8))(this);
	}
	template <typename T = void> T SetUpNetJoyController() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A55D8))(this);
	}
	template <typename T = void> T PauseInput() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A56D4))(this);
	}
	template <typename T = void> T ContinueInput() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A57B4))(this);
	}
	template <typename T = void> T ShowBtnSpecial(bool isShow, bool isFusion) {
		return ((T (*)(UICanvas*, bool, bool))(Il2CppBase() + 0x41A5894))(this, isShow, isFusion);
	}
	template <typename T = void> T ShowUISettingBar(bool show) {
		return ((T (*)(UICanvas*, bool))(Il2CppBase() + 0x41A5AF0))(this, show);
	}
	template <typename T = int32_t> T SwitchControlMode() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A5B7C))(this);
	}
	template <typename T = int32_t> T SwitchAxisMode() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A5C9C))(this);
	}
	template <typename T = int32_t> T SwitchAxisMode_1(int32_t value) {
		return ((T (*)(UICanvas*, int32_t))(Il2CppBase() + 0x41A5DAC))(this, value);
	}
	template <typename T = void> T ShowWindowPause() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A52F4))(this);
	}
	template <typename T = void> T HideWindowPause() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A5EB8))(this);
	}
	template <typename T = bool> T IsWindowPauseAwake() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A5F2C))(this);
	}
	template <typename T = void> T HideBtnRec() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A6004))(this);
	}
	template <typename T = void> T SetWindowPausePlayer() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A6060))(this);
	}
	template <typename T = void> T ShowGem() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A60DC))(this);
	}
	template <typename T = void> T ShowGemInView(float y) {
		return ((T (*)(UICanvas*, float))(Il2CppBase() + 0x41A6294))(this, y);
	}
	template <typename T = void> T HideGem() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A643C))(this);
	}
	template <typename T = void> T UpdateGemText() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A4F0C))(this);
	}
	template <typename T = void> T UpdatePauseInfo() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A659C))(this);
	}
	template <typename T = void> T ShowWarn(int32_t index, bool value) {
		return ((T (*)(UICanvas*, int32_t, bool))(Il2CppBase() + 0x41A6610))(this, index, value);
	}
	template <typename T = void> T SwitchAtkBtn(bool is_atk, uintptr_t customSprite) {
		return ((T (*)(UICanvas*, bool, uintptr_t))(Il2CppBase() + 0x41A6778))(this, is_atk, customSprite);
	}
	template <typename T = int32_t> T get_BeforeBattleFactorIconCount() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A69C0))(this);
	}
	template <typename T = void> T ShowMsgPlayerLeave(uintptr_t e) {
		return ((T (*)(UICanvas*, uintptr_t))(Il2CppBase() + 0x41A6A74))(this, e);
	}
	template <typename T = void> T ShowHostEnterMultiRoom(uintptr_t e) {
		return ((T (*)(UICanvas*, uintptr_t))(Il2CppBase() + 0x41A6F34))(this, e);
	}
	template <typename T = void> T UpdaterFactorModeBar(uintptr_t e) {
		return ((T (*)(UICanvas*, uintptr_t))(Il2CppBase() + 0x41A7020))(this, e);
	}
	template <typename T = void> T UpdateBadassmode() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A4CFC))(this);
	}
	template <typename T = void> T UpdateCustomFactorIcon(uintptr_t factorsContainer) {
		return ((T (*)(UICanvas*, uintptr_t))(Il2CppBase() + 0x41A7094))(this, factorsContainer);
	}
	template <typename T = void> T UpdateBattleFactorIcon(uintptr_t factors_container) {
		return ((T (*)(UICanvas*, uintptr_t))(Il2CppBase() + 0x41A724C))(this, factors_container);
	}
	template <typename T = bool> T get_CanShowFunctionalUI() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A79E4))(this);
	}
	template <typename T = void> T UpdateHpBar() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A7A6C))(this);
	}
	template <typename T = void> T UpdateHpBarValid() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A7BF4))(this);
	}
	template <typename T = void> T UpdateEnergyBar() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A8030))(this);
	}
	template <typename T = void> T UpdateEnergyBarValid() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A8150))(this);
	}
	template <typename T = void> T OnUpdateArmorBar(uintptr_t e) {
		return ((T (*)(UICanvas*, uintptr_t))(Il2CppBase() + 0x41A8438))(this, e);
	}
	template <typename T = void> T UpdateArmorBar() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A84AC))(this);
	}
	template <typename T = void> T UpdateArmorBarValid() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A8634))(this);
	}
	template <typename T = void> T UpdateInvalidStateBar(uintptr_t stateImg, uintptr_t stateText) {
		return ((T (*)(UICanvas*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41A7EE4))(this, stateImg, stateText);
	}
	template <typename T = void> T UpdateCoin() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A8A18))(this);
	}
	template <typename T = void> T UpdateTokenCoin() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A8B70))(this);
	}
	template <typename T = void> T SetStateBarInvalid() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A8CA0))(this);
	}
	template <typename T = void> T SetStateBarValid() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A8D60))(this);
	}
	template <typename T = void> T UpdateSkillMask(float thisSkillTime, float cd, int32_t multiCount, uintptr_t skillType) {
		return ((T (*)(UICanvas*, float, float, int32_t, uintptr_t))(Il2CppBase() + 0x41A8E90))(this, thisSkillTime, cd, multiCount, skillType);
	}
	template <typename T = void> T ClearWeaponIcon() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A93CC))(this);
	}
	template <typename T = void> T ChangeWeaponIcon(uintptr_t icon, int32_t consume) {
		return ((T (*)(UICanvas*, uintptr_t, int32_t))(Il2CppBase() + 0x41A9450))(this, icon, consume);
	}
	template <typename T = void> T ChangeWeaponDisplayObj(uintptr_t weapon, int32_t consume) {
		return ((T (*)(UICanvas*, uintptr_t, int32_t))(Il2CppBase() + 0x41A9928))(this, weapon, consume);
	}
	template <typename T = void> T ChangeWeaponIconImageMaterial(uintptr_t material) {
		return ((T (*)(UICanvas*, uintptr_t))(Il2CppBase() + 0x41A9DF0))(this, material);
	}
	template <typename T = void> T ChangeWeaponIcon_1(uintptr_t icon, int32_t consume, uintptr_t color) {
		return ((T (*)(UICanvas*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x41A9568))(this, icon, consume, color);
	}
	template <typename T = void> T ChangeWeaponIconPivot(Il2CppVector2 pivot) {
		return ((T (*)(UICanvas*, Il2CppVector2))(Il2CppBase() + 0x41A9E84))(this, pivot);
	}
	template <typename T = void> T ChangeWeaponItemIcon(uintptr_t item) {
		return ((T (*)(UICanvas*, uintptr_t))(Il2CppBase() + 0x41A94DC))(this, item);
	}
	template <typename T = void> T ChangeWeaponConsume(int32_t consume, uintptr_t color) {
		return ((T (*)(UICanvas*, int32_t, uintptr_t))(Il2CppBase() + 0x41A9C98))(this, consume, color);
	}
	template <typename T = void> T UpdateMap() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A9FA0))(this);
	}
	template <typename T = void> T HideMap() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41AA060))(this);
	}
	template <typename T = void> T ShowTempUI() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41AA0D4))(this);
	}
	template <typename T = void> T HideTempUI() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41AA1F0))(this);
	}
	template <typename T = void> T DestroyTempUI() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41AA328))(this);
	}
	template <typename T = void> T ShowItemInfo(Il2CppArray<uintptr_t>* iconIndexes, Il2CppArray<uintptr_t>* texts, int32_t bgIndex, uintptr_t custonIcon) {
		return ((T (*)(UICanvas*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x41AA43C))(this, iconIndexes, texts, bgIndex, custonIcon);
	}
	template <typename T = void> T ShowItemInfo_1(Il2CppArray<uintptr_t>* iconEnums, Il2CppArray<uintptr_t>* texts, int32_t bgIndex, uintptr_t custonIcon) {
		return ((T (*)(UICanvas*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x41AA548))(this, iconEnums, texts, bgIndex, custonIcon);
	}
	template <typename T = void> T ShowItemInfo_2(Il2CppString* desc, int32_t bgIndex) {
		return ((T (*)(UICanvas*, Il2CppString*, int32_t))(Il2CppBase() + 0x41AA6B8))(this, desc, bgIndex);
	}
	template <typename T = void> T ShowItemInfo_3(Il2CppArray<uintptr_t>* sprites) {
		return ((T (*)(UICanvas*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x41AA7A0))(this, sprites);
	}
	template <typename T = void> T HideItemInfo() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41AA82C))(this);
	}
	template <typename T = void> T ShowTempMessage(Il2CppString* value, float e_time, bool needLocalized) {
		return ((T (*)(UICanvas*, Il2CppString*, float, bool))(Il2CppBase() + 0x41A6C44))(this, value, e_time, needLocalized);
	}
	template <typename T = void> T EndTempMessage() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41AA8D4))(this);
	}
	template <typename T = void> T ShowMessage(Il2CppString* message, float time) {
		return ((T (*)(UICanvas*, Il2CppString*, float))(Il2CppBase() + 0x41AA9F0))(this, message, time);
	}
	template <typename T = void> T ShowLevelMessage(int32_t sceneIndex, int32_t branchIndex, Il2CppString* message, float time) {
		return ((T (*)(UICanvas*, int32_t, int32_t, Il2CppString*, float))(Il2CppBase() + 0x41AAA94))(this, sceneIndex, branchIndex, message, time);
	}
	template <typename T = void> T ShowSignpost() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41AAB5C))(this);
	}
	template <typename T = void> T ShowAllDead() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41AABD0))(this);
	}
	template <typename T = void> T ShowRoomStart() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41AAC44))(this);
	}
	template <typename T = void> T ShowTextHurt(uintptr_t value1, int32_t value2, float value3, Il2CppString* value4) {
		return ((T (*)(UICanvas*, uintptr_t, int32_t, float, Il2CppString*))(Il2CppBase() + 0x41AACB8))(this, value1, value2, value3, value4);
	}
	template <typename T = void> T ShowTextEnergy(Il2CppVector3 value1, int32_t value2, float value3, Il2CppString* value4) {
		return ((T (*)(UICanvas*, Il2CppVector3, int32_t, float, Il2CppString*))(Il2CppBase() + 0x41AB094))(this, value1, value2, value3, value4);
	}
	template <typename T = void> T ShowTextCoin(Il2CppVector3 value1, int32_t value2, float value3, Il2CppString* value4) {
		return ((T (*)(UICanvas*, Il2CppVector3, int32_t, float, Il2CppString*))(Il2CppBase() + 0x41AB464))(this, value1, value2, value3, value4);
	}
	template <typename T = void> T ShowTextTokenCoin(Il2CppVector3 value1, int32_t value2, float value3, Il2CppString* value4, uintptr_t color) {
		return ((T (*)(UICanvas*, Il2CppVector3, int32_t, float, Il2CppString*, uintptr_t))(Il2CppBase() + 0x41AB834))(this, value1, value2, value3, value4, color);
	}
	template <typename T = void> T ShowTextArmor(Il2CppVector3 value1, int32_t value2, float value3, Il2CppString* value4) {
		return ((T (*)(UICanvas*, Il2CppVector3, int32_t, float, Il2CppString*))(Il2CppBase() + 0x41ABC44))(this, value1, value2, value3, value4);
	}
	template <typename T = void> T ShowTextHp(Il2CppVector3 value1, int32_t value2, float value3, Il2CppString* value4, bool newText) {
		return ((T (*)(UICanvas*, Il2CppVector3, int32_t, float, Il2CppString*, bool))(Il2CppBase() + 0x41AC014))(this, value1, value2, value3, value4, newText);
	}
	template <typename T = void> T ShowTextHpAndMp(Il2CppVector3 value1, int32_t hp, int32_t mp, float value3, Il2CppString* value4) {
		return ((T (*)(UICanvas*, Il2CppVector3, int32_t, int32_t, float, Il2CppString*))(Il2CppBase() + 0x41AC3F0))(this, value1, hp, mp, value3, value4);
	}
	template <typename T = void> T ShowTextArmorAndMp(Il2CppVector3 value1, int32_t armor, int32_t mp, float value3, Il2CppString* value4) {
		return ((T (*)(UICanvas*, Il2CppVector3, int32_t, int32_t, float, Il2CppString*))(Il2CppBase() + 0x41AC7AC))(this, value1, armor, mp, value3, value4);
	}
	template <typename T = void> T ShowTextInfo(Il2CppVector3 value1, Il2CppString* value2, float value3, float value4) {
		return ((T (*)(UICanvas*, Il2CppVector3, Il2CppString*, float, float))(Il2CppBase() + 0x41ACB68))(this, value1, value2, value3, value4);
	}
	template <typename T = void> T ShowTextItem(Il2CppVector3 value1, uintptr_t sprite, uintptr_t flag, Il2CppString* value2, float value3, float value4) {
		return ((T (*)(UICanvas*, Il2CppVector3, uintptr_t, uintptr_t, Il2CppString*, float, float))(Il2CppBase() + 0x41ACE1C))(this, value1, sprite, flag, value2, value3, value4);
	}
	template <typename T = void> T ShowDrink(uintptr_t parent, uintptr_t sprite, float offset, float duration) {
		return ((T (*)(UICanvas*, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x41AD0E4))(this, parent, sprite, offset, duration);
	}
	template <typename T = void> T ShowBuff(uintptr_t parent, uintptr_t buff, float offset, float duration) {
		return ((T (*)(UICanvas*, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x41AD420))(this, parent, buff, offset, duration);
	}
	template <typename T = uintptr_t> T GetBuffSprite(uintptr_t buff) {
		return ((T (*)(UICanvas*, uintptr_t))(Il2CppBase() + 0x41AD790))(this, buff);
	}
	template <typename T = uintptr_t> T GetUnKnownSprite() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41AD834))(this);
	}
	template <typename T = void> T ShowPickable(uintptr_t parent, uintptr_t info, uintptr_t icon, uintptr_t flag, Il2CppVector3 flagAngle, float offset, float duration) {
		return ((T (*)(UICanvas*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppVector3, float, float))(Il2CppBase() + 0x41AD8A4))(this, parent, info, icon, flag, flagAngle, offset, duration);
	}
	template <typename T = void> T ShowTextTalk(uintptr_t root, Il2CppString* text, float offset, float duration) {
		return ((T (*)(UICanvas*, uintptr_t, Il2CppString*, float, float))(Il2CppBase() + 0x41ADE54))(this, root, text, offset, duration);
	}
	template <typename T = void> T ShowTextTalk_1(uintptr_t root, Il2CppString* text, float offset, float duration, int32_t level, Il2CppString* id) {
		return ((T (*)(UICanvas*, uintptr_t, Il2CppString*, float, float, int32_t, Il2CppString*))(Il2CppBase() + 0x41AE2FC))(this, root, text, offset, duration, level, id);
	}
	template <typename T = void> T ShowTextTalk_2(uintptr_t root, Il2CppString* text, float offset, float duration, int32_t level) {
		return ((T (*)(UICanvas*, uintptr_t, Il2CppString*, float, float, int32_t))(Il2CppBase() + 0x41AE834))(this, root, text, offset, duration, level);
	}
	template <typename T = void> T ShowTextTalk_3(Il2CppString* value2, float value3, float value4, int32_t value5) {
		return ((T (*)(UICanvas*, Il2CppString*, float, float, int32_t))(Il2CppBase() + 0x41AE92C))(this, value2, value3, value4, value5);
	}
	template <typename T = void> T ShowObjectInfo(Il2CppVector3 value1, Il2CppString* value2) {
		return ((T (*)(UICanvas*, Il2CppVector3, Il2CppString*))(Il2CppBase() + 0x41AEE58))(this, value1, value2);
	}
	template <typename T = void> T ShowObjectInfo_1(Il2CppVector3 value1, Il2CppString* value2, int32_t value3) {
		return ((T (*)(UICanvas*, Il2CppVector3, Il2CppString*, int32_t))(Il2CppBase() + 0x41AF0A8))(this, value1, value2, value3);
	}
	template <typename T = void> T ShowSpecialPriceInfo(Il2CppVector3 offset, uintptr_t icon, Il2CppString* price) {
		return ((T (*)(UICanvas*, Il2CppVector3, uintptr_t, Il2CppString*))(Il2CppBase() + 0x41AF318))(this, offset, icon, price);
	}
	template <typename T = void> T HideObjectInfo() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41AF5B8))(this);
	}
	template <typename T = void> static T ShowUIWindowShop(uintptr_t value, uintptr_t onBuyRebornCard, uintptr_t buyWay) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x41AF6F4))(0, value, onBuyRebornCard, buyWay);
	}
	template <typename T = void> T ShowUIWindowShop_1() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41AF978))(this);
	}
	template <typename T = uintptr_t> static T ShowUIWindowObject(uintptr_t object_img, Il2CppString* object_name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x41AF9EC))(0, object_img, object_name);
	}
	template <typename T = void> static T ShowUIWindowObjectWithFlag(uintptr_t object_img, uintptr_t flag_img, Il2CppVector3 flag_angle, Il2CppString* object_name) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3, Il2CppString*))(Il2CppBase() + 0x41AFBB8))(0, object_img, flag_img, flag_angle, object_name);
	}
	template <typename T = void> static T ShowUIWindowObjectBlueprint(uintptr_t object_img, uintptr_t flag_img, Il2CppString* object_name) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x41AFDB8))(0, object_img, flag_img, object_name);
	}
	template <typename T = uintptr_t> static T ShowUIWindowObjectPet(int32_t petIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x41AFFDC))(0, petIndex);
	}
	template <typename T = void> static T ShowUIWindowReborn() {
		return ((T (*)(void *))(Il2CppBase() + 0x41B0188))(0);
	}
	template <typename T = void> T ShowUIWindowTryAgain() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41B0310))(this);
	}
	template <typename T = void> T BtnRetryClick() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41B04A0))(this);
	}
	template <typename T = void> static T StaticBtnRetryClick() {
		return ((T (*)(void *))(Il2CppBase() + 0x41B04FC))(0);
	}
	template <typename T = void> static T StaticStopClient() {
		return ((T (*)(void *))(Il2CppBase() + 0x41B0B1C))(0);
	}
	template <typename T = void> T StopClient() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41B0C34))(this);
	}
	template <typename T = void> T ShowBattleFactors(bool isShow) {
		return ((T (*)(UICanvas*, bool))(Il2CppBase() + 0x41B0C90))(this, isShow);
	}
	template <typename T = void> T HandleExtra() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A409C))(this);
	}
	template <typename T = void> T HandleUISandboxIfNeeded() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41B0EA4))(this);
	}
	template <typename T = void> T ShowUiSandbox(bool isShow) {
		return ((T (*)(UICanvas*, bool))(Il2CppBase() + 0x41B1498))(this, isShow);
	}
	template <typename T = void> T HandleUIDefenceIfNeeded() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41B10B0))(this);
	}
	template <typename T = void> T ShowSignpostZombie() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41B155C))(this);
	}
	template <typename T = void> T CanvasShutter() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41B15D0))(this);
	}
	template <typename T = void> T CameraSizeReconfiguration() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41B1674))(this);
	}
	template <typename T = void> T EnlargeCamera() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41A410C))(this);
	}
	template <typename T = void> T SetCameraSize(float size) {
		return ((T (*)(UICanvas*, float))(Il2CppBase() + 0x41B16D4))(this, size);
	}
	template <typename T = void> T BtnKtPlayClick() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41B1808))(this);
	}
	template <typename T = void> T UpdateInfoBar(int32_t player_idx, int32_t hp, int32_t max_hp, int32_t energy, int32_t max_energy) {
		return ((T (*)(UICanvas*, int32_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x41B1868))(this, player_idx, hp, max_hp, energy, max_energy);
	}
	template <typename T = void> T UpdateInfoBarHeroSp(int32_t player_idx, int32_t character, int32_t skin) {
		return ((T (*)(UICanvas*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x41B1A88))(this, player_idx, character, skin);
	}
	template <typename T = void> T HandleUIRealNameIfNeeded() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41B1254))(this);
	}
	template <typename T = void> T OnClick_RealNameInfo() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41B1C50))(this);
	}
	template <typename T = void> T UpdateNetInfo(int32_t latency) {
		return ((T (*)(UICanvas*, int32_t))(Il2CppBase() + 0x41B1CE0))(this, latency);
	}
	template <typename T = void> T ShowEmoticonPanel() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41B1FF0))(this);
	}
	template <typename T = void> T ShowEmoticonBtn(bool show) {
		return ((T (*)(UICanvas*, bool))(Il2CppBase() + 0x41B20EC))(this, show);
	}
	template <typename T = void> T ShowTeamInfoPanel() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41B21FC))(this);
	}
	template <typename T = void> T OnShowPauseWindow(uintptr_t e) {
		return ((T (*)(UICanvas*, uintptr_t))(Il2CppBase() + 0x41B2418))(this, e);
	}
	template <typename T = void> T OnCoinChange(uintptr_t e) {
		return ((T (*)(UICanvas*, uintptr_t))(Il2CppBase() + 0x41B256C))(this, e);
	}
	template <typename T = void> T OnBtnRoomIdClick() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41B25E0))(this);
	}
	template <typename T = void> T ShowUINextLevel(bool isSpecial, Il2CppString* branchIdx, bool isUseCtrl) {
		return ((T (*)(UICanvas*, bool, Il2CppString*, bool))(Il2CppBase() + 0x41B26A0))(this, isSpecial, branchIdx, isUseCtrl);
	}
	template <typename T = void> T HideUINextLevel() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41B2864))(this);
	}
	template <typename T = void> static T ShowLoading() {
		return ((T (*)(void *))(Il2CppBase() + 0x41B2978))(0);
	}
	template <typename T = void> static T HideLoading() {
		return ((T (*)(void *))(Il2CppBase() + 0x41B2AF0))(0);
	}
	template <typename T = Il2CppVector2> T ShowGemb__89_0() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41B2D14))(this);
	}
	template <typename T = void> T ShowGemb__89_1(Il2CppVector2 anchoredPosition) {
		return ((T (*)(UICanvas*, Il2CppVector2))(Il2CppBase() + 0x41B2D44))(this, anchoredPosition);
	}
	template <typename T = Il2CppVector2> T ShowGemInViewb__90_0() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41B2D8C))(this);
	}
	template <typename T = void> T ShowGemInViewb__90_1(Il2CppVector2 anchoredPosition) {
		return ((T (*)(UICanvas*, Il2CppVector2))(Il2CppBase() + 0x41B2DBC))(this, anchoredPosition);
	}
	template <typename T = Il2CppVector2> T HideGemb__91_0() {
		return ((T (*)(UICanvas*))(Il2CppBase() + 0x41B2E04))(this);
	}
	template <typename T = void> T HideGemb__91_1(Il2CppVector2 anchoredPosition) {
		return ((T (*)(UICanvas*, Il2CppVector2))(Il2CppBase() + 0x41B2E34))(this, anchoredPosition);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T UpdateBattleFactorIcong__GetSortFactors|107_0() {
		return ((T (*)(void *))(Il2CppBase() + 0x41A7774))(0);
	}

};

}
