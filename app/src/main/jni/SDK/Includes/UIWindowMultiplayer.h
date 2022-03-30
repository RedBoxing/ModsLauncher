#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowMultiplayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowMultiplayer"));
	}

	template <typename T = uintptr_t> T& room_btn_obj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& btn_no() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& text_room_name() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& text_version() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& badass_toggle() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& factor_toggle() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& bossrush_toggle() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& factors_tips() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& factor_desc() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& badass_mode() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& gamemode() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& bossrush_mode() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& this_tab_index() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& tab0() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& tab1() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& tab2() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ipDialog() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ipInput() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& factors_root() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& refresh_factor_btn() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& factors_img() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& room_grid() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& searchText() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& room_count() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& battle_factors() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& can_build() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& factorArr() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& searchTextCoroutine() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& isConnecting() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> T& searchTextContent() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44AB9F0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44AC2E8))(this);
	}
	template <typename T = void> T SetDefaultRoomName() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44AC778))(this);
	}
	template <typename T = void> T ShowSearchTexting() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44AC25C))(this);
	}
	template <typename T = void> T HideFactorDesc() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44AC9B4))(this);
	}
	template <typename T = void> T UpdateFactorView(Il2CppList<uintptr_t>* factorList) {
		return ((T (*)(UIWindowMultiplayer*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x44ACA9C))(this, factorList);
	}
	template <typename T = void> T UpdateFactorDesc(uintptr_t factor) {
		return ((T (*)(UIWindowMultiplayer*, uintptr_t))(Il2CppBase() + 0x44ACC98))(this, factor);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44ACD8C))(this);
	}
	template <typename T = void> T OnApplicationPause(bool pauseStatus) {
		return ((T (*)(UIWindowMultiplayer*, bool))(Il2CppBase() + 0x44AD518))(this, pauseStatus);
	}
	template <typename T = void> T OnBtnBulidTabClick() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44AD648))(this);
	}
	template <typename T = void> T OnBtnJoinTabClick() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44AD6AC))(this);
	}
	template <typename T = void> T OnToggleClick(bool value) {
		return ((T (*)(UIWindowMultiplayer*, bool))(Il2CppBase() + 0x44AD778))(this, value);
	}
	template <typename T = void> T OnToggleFactorClick(bool isClick) {
		return ((T (*)(UIWindowMultiplayer*, bool))(Il2CppBase() + 0x44AD8E0))(this, isClick);
	}
	template <typename T = void> T OnBadassCantSelect() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44AD85C))(this);
	}
	template <typename T = void> T OnFactorCantSelect() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44ADB9C))(this);
	}
	template <typename T = void> T CantSelectTip(uintptr_t item) {
		return ((T (*)(UIWindowMultiplayer*, uintptr_t))(Il2CppBase() + 0x44ADD68))(this, item);
	}
	template <typename T = void> T OnRefreshFactorClick() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44ADC20))(this);
	}
	template <typename T = void> T OnBossRushToggleClick(bool value) {
		return ((T (*)(UIWindowMultiplayer*, bool))(Il2CppBase() + 0x44ADEC8))(this, value);
	}
	template <typename T = void> T OnBRCantSelect() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44AE1D4))(this);
	}
	template <typename T = void> T OnChangeTab(int32_t value) {
		return ((T (*)(UIWindowMultiplayer*, int32_t))(Il2CppBase() + 0x44AD10C))(this, value);
	}
	template <typename T = void> T PriacessInfo(int32_t value) {
		return ((T (*)(UIWindowMultiplayer*, int32_t))(Il2CppBase() + 0x44AE24C))(this, value);
	}
	template <typename T = void> T EndRoomNameEdit(Il2CppString* value) {
		return ((T (*)(UIWindowMultiplayer*, Il2CppString*))(Il2CppBase() + 0x44AE850))(this, value);
	}
	template <typename T = void> T OnBtnBulidClick() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44AE950))(this);
	}
	template <typename T = void> T CreateRoom() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44AEB50))(this);
	}
	template <typename T = void> T ContinueBuild() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44AEEFC))(this);
	}
	template <typename T = void> T AddRoomBtn(Il2CppString* addr, Il2CppString* roomInfo) {
		return ((T (*)(UIWindowMultiplayer*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x44AF00C))(this, addr, roomInfo);
	}
	template <typename T = void> T DelRoomBtn(Il2CppString* addr) {
		return ((T (*)(UIWindowMultiplayer*, Il2CppString*))(Il2CppBase() + 0x44AF4EC))(this, addr);
	}
	template <typename T = void> T ClearRoomBtn() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44AE3B4))(this);
	}
	template <typename T = void> T ConnectToTips(Il2CppString* hostIp) {
		return ((T (*)(UIWindowMultiplayer*, Il2CppString*))(Il2CppBase() + 0x44AF698))(this, hostIp);
	}
	template <typename T = void> T StopConnect() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44ACFE0))(this);
	}
	template <typename T = uintptr_t> T SearchingTexting() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44AC900))(this);
	}
	template <typename T = void> T InitSensitiveWords() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44AE50C))(this);
	}
	template <typename T = void> T OnRoomNameValidate(Il2CppString* text) {
		return ((T (*)(UIWindowMultiplayer*, Il2CppString*))(Il2CppBase() + 0x44AE734))(this, text);
	}
	template <typename T = void> T OnIpBtnClick() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44AF80C))(this);
	}
	template <typename T = void> T EndHostIp(Il2CppString* value) {
		return ((T (*)(UIWindowMultiplayer*, Il2CppString*))(Il2CppBase() + 0x44AFB3C))(this, value);
	}
	template <typename T = void> T ChangeSearchText(bool isIpSearch) {
		return ((T (*)(UIWindowMultiplayer*, bool))(Il2CppBase() + 0x44AE2BC))(this, isIpSearch);
	}
	template <typename T = void> T OnRefreshBtnClick() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44AFDBC))(this);
	}
	template <typename T = bool> T CanChangeRoomName(bool needTips) {
		return ((T (*)(UIWindowMultiplayer*, bool))(Il2CppBase() + 0x44AC5BC))(this, needTips);
	}
	template <typename T = void> T OnIpBtnClickb__64_0(Il2CppString* inputText) {
		return ((T (*)(UIWindowMultiplayer*, Il2CppString*))(Il2CppBase() + 0x44AFF7C))(this, inputText);
	}
	template <typename T = void> T iFixBaseProxy_OnBtnJoinTabClick() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44AFFA8))(this);
	}
	template <typename T = void> T iFixBaseProxy_ContinueBuild() {
		return ((T (*)(UIWindowMultiplayer*))(Il2CppBase() + 0x44B0008))(this);
	}

};

}
