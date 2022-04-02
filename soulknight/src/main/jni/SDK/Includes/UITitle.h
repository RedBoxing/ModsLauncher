#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UITitle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UITitle"));
	}

	template <typename T = bool> static T& disconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& disconnect_scene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& button_quit_anim() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& awake() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& music_object() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& bgm_clip() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& btn_clip() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& titile_sprite_cn() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& restore_icon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& icon_bgm() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& icon_effect() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& remote_ver_text() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& title_root() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& Tips() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> static T& alreadyShowAnnouncement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> T& titleCanvas() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<void*>*> T& CanEnterGame() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _uiWindowSetting() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& savePlace() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& onSwitchLanguage() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& disconType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> static T get_HasAutoRestoreAfterFirstInstallApp() {
		return ((T (*)(void *))(Il2CppBase() + 0x41CCDE8))(0);
	}
	template <typename T = void> static T set_HasAutoRestoreAfterFirstInstallApp(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x41CCEB0))(0, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41CCF6C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41CD52C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41CD600))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41CD6D4))(this);
	}
	template <typename T = void> T KillMyself() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41CF42C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41CF48C))(this);
	}
	template <typename T = void> T ShowSettingBar() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D0530))(this);
	}
	template <typename T = void> T HideSettingBar() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41CFB2C))(this);
	}
	template <typename T = void> T OnBtnClick() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41CF86C))(this);
	}
	template <typename T = void> T OnlyHideSettingBar() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D099C))(this);
	}
	template <typename T = void> T NextScene() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D0A44))(this);
	}
	template <typename T = void> T EnterScenePlot() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D05F4))(this);
	}
	template <typename T = uintptr_t> T StartingNextScene(Il2CppString* sceneName) {
		return ((T (*)(UITitle*, Il2CppString*))(Il2CppBase() + 0x41D0B90))(this, sceneName);
	}
	template <typename T = void> T BtnQuitClick() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D0C84))(this);
	}
	template <typename T = void> T BtnNewGameClick() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41CFC1C))(this);
	}
	template <typename T = void> T BtnMultiplayerClick() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D0CE4))(this);
	}
	template <typename T = void> T BtnContinueClick() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41CFEB4))(this);
	}
	template <typename T = void> T BtnGooglePlayClick() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D11BC))(this);
	}
	template <typename T = void> T BtnAchievementClick() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D12E4))(this);
	}
	template <typename T = void> T SwitchLanguage(Il2CppString* language) {
		return ((T (*)(UITitle*, Il2CppString*))(Il2CppBase() + 0x41CE3B4))(this, language);
	}
	template <typename T = void> T BtnBgmClick() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D13A8))(this);
	}
	template <typename T = void> T BtnEffectClick() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D1560))(this);
	}
	template <typename T = void> T BtnWindowClick(int32_t value) {
		return ((T (*)(UITitle*, int32_t))(Il2CppBase() + 0x41D1718))(this, value);
	}
	template <typename T = void> T ShowCloudSave() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D1930))(this);
	}
	template <typename T = void> T BtnFaceBookClick() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D1A1C))(this);
	}
	template <typename T = void> T BtnTwitterClick() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D1AAC))(this);
	}
	template <typename T = void> T BtnTapTapClick() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D1B3C))(this);
	}
	template <typename T = void> T BtnRestoreClick() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D1B98))(this);
	}
	template <typename T = void> T BtnPurchaseRecordClick() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D1BF4))(this);
	}
	template <typename T = void> T ShowTempMessage(Il2CppString* value, float e_time, bool isLocalized) {
		return ((T (*)(UITitle*, Il2CppString*, float, bool))(Il2CppBase() + 0x41D1F14))(this, value, e_time, isLocalized);
	}
	template <typename T = void> T BtnKtPlayClick() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D21A4))(this);
	}
	template <typename T = uintptr_t> T get_windowCloussave() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D2204))(this);
	}
	template <typename T = void> T OnClick_CloudSave() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D22D0))(this);
	}
	template <typename T = void> T ShowReconnectDialog() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41CEEB8))(this);
	}
	template <typename T = void> T StopReconnect() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D26A0))(this);
	}
	template <typename T = void> T ShowUiLoading(float duration) {
		return ((T (*)(UITitle*, float))(Il2CppBase() + 0x41D1D04))(this, duration);
	}
	template <typename T = void> T RefreshBroadcastInfoWindow() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D184C))(this);
	}
	template <typename T = void> T ShowTitleRoot(bool show) {
		return ((T (*)(UITitle*, bool))(Il2CppBase() + 0x41D10A4))(this, show);
	}
	template <typename T = void> T OnHrefClick(Il2CppString* hrefName) {
		return ((T (*)(UITitle*, Il2CppString*))(Il2CppBase() + 0x41D27BC))(this, hrefName);
	}
	template <typename T = void> T FixTipText() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41CD414))(this);
	}
	template <typename T = void> T RefreshData(Il2CppString* oldAccountId, Il2CppString* newAccountId) {
		return ((T (*)(UITitle*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x41D28CC))(this, oldAccountId, newAccountId);
	}
	template <typename T = void> T HideLanguageBtn(uintptr_t languageParent, Il2CppString* btnName, uintptr_t hideColor) {
		return ((T (*)(UITitle*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x41CF0F8))(this, languageParent, btnName, hideColor);
	}
	template <typename T = void> T OnStartBegin() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41CE04C))(this);
	}
	template <typename T = void> T OnStartEnd() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41CF2EC))(this);
	}
	template <typename T = void> T RefreshButtonBar() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41CE5E0))(this);
	}
	template <typename T = void> T OnClickNextSave() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D2C28))(this);
	}
	template <typename T = void> T RefreshBtnImage() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D2958))(this);
	}
	template <typename T = void> T BtnMultiplayerRemoteClick() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D2F04))(this);
	}
	template <typename T = bool> T IsCompleteToturial() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D0F74))(this);
	}
	template <typename T = bool> T IsCompleteAdvToturial() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D2F60))(this);
	}
	template <typename T = void> T HideUiLoading() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D30E0))(this);
	}
	template <typename T = void> T OnShowBtnBar() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D0940))(this);
	}
	template <typename T = void> T OnHideBtnBar() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D04D4))(this);
	}
	template <typename T = void> T ContinueGame() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D3248))(this);
	}
	template <typename T = void> T EndSavedataGame() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D380C))(this);
	}
	template <typename T = void> T SetFont(int32_t settingFont) {
		return ((T (*)(UITitle*, int32_t))(Il2CppBase() + 0x41D396C))(this, settingFont);
	}
	template <typename T = void> T Awakeb__22_0() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D3AFC))(this);
	}
	template <typename T = void> T BtnNewGameClickb__36_1() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D3BAC))(this);
	}
	template <typename T = void> T BtnMultiplayerClickb__37_1() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D3C94))(this);
	}
	template <typename T = void> T BtnContinueClickb__38_1() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D3F48))(this);
	}
	template <typename T = void> T BtnContinueClickb__38_2() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D3F4C))(this);
	}
	template <typename T = void> T BtnContinueClickb__38_3() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D3F50))(this);
	}
	template <typename T = void> T BtnGooglePlayClickb__39_0(bool success) {
		return ((T (*)(UITitle*, bool))(Il2CppBase() + 0x41D3F54))(this, success);
	}
	template <typename T = void> T OnClick_CloudSaveb__55_0(bool success) {
		return ((T (*)(UITitle*, bool))(Il2CppBase() + 0x41D3FC0))(this, success);
	}
	template <typename T = void> T ShowReconnectDialogb__56_0() {
		return ((T (*)(UITitle*))(Il2CppBase() + 0x41D4158))(this);
	}
	template <typename T = bool> T OnClickNextSaveb__71_0(void* tuple) {
		return ((T (*)(UITitle*, void*))(Il2CppBase() + 0x41D4270))(this, tuple);
	}
	template <typename T = uintptr_t> static T RefreshBtnImageg__GetSaveSprite|72_0(uintptr_t savePlace) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41D2E40))(0, savePlace);
	}

};

}
