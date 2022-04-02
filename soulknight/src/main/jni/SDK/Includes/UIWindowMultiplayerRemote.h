#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowMultiplayerRemote
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowMultiplayerRemote"));
	}

	template <typename T = uintptr_t> T& btn_no() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& text_version() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& badass_toggle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& factor_toggle() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& bossrush_toggle() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& match_toggle() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& factors_tips() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& factor_desc() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& badass_mode() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& gamemode() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& bossrush_mode() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& this_tab_index() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& tab0() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& tab1() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& tab2() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& tab3() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ipDialog() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& idInput() {
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
	template <typename T = int32_t> T& room_count() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& battle_factors() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& bossrush_mode_icon() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& baadss_mode_icon() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& roominfo_tips_text() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& can_build() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& factorArr() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& roomInfoRoot() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& joinTabJoinbtn() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& joinTabSearchbtn() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& multiGameTitle() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& joinType() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& roomCountImg() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> T& roomLimitCount() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& roomCountSps() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& match_badass_toggle() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& match_bossrush_toggle() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& match_factor_toggle() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = bool> T& match_badass() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = bool> T& match_bossrush() {
		return *(T*)((uintptr_t)this + 0x159);
	}
	template <typename T = bool> T& match_factor() {
		return *(T*)((uintptr_t)this + 0x15A);
	}
	template <typename T = uintptr_t> T& match_quick_match_btn() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& match_join_btn() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& match_tips_text() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& matchRoomInfoView() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& lastSendTime() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = bool> T& quickMatching() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = bool> T& openGame() {
		return *(T*)((uintptr_t)this + 0x185);
	}
	template <typename T = uintptr_t> T& theRoomInfo() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppString*> T& theRoomId() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& fetchCts() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& fetchCt() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& factorImgs() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& lastQuickMatchTime() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& OnQuickJoinErr() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& matchRoomInfo() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = int32_t> static T& TryMatchCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& matchArgs() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = int32_t> T& tryCount() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = int32_t> static T& DelayTryTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& pattern() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isConnecting() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B04DC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B12C8))(this);
	}
	template <typename T = void> T UpdateHostFactorBadassShowState() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B1444))(this);
	}
	template <typename T = void> T UpdateJoinFactorBadassShowState() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B14A0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B14FC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B164C))(this);
	}
	template <typename T = bool> T CheckOPTime() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B17EC))(this);
	}
	template <typename T = void> T OnBtnBuildTabClick() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B19D8))(this);
	}
	template <typename T = void> T HideFactorDesc() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B1D0C))(this);
	}
	template <typename T = void> T UpdateFactorView(Il2CppList<uintptr_t>* factorList) {
		return ((T (*)(UIWindowMultiplayerRemote*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x44B1DF4))(this, factorList);
	}
	template <typename T = void> T UpdateFactorDesc(uintptr_t factor) {
		return ((T (*)(UIWindowMultiplayerRemote*, uintptr_t))(Il2CppBase() + 0x44B1FF0))(this, factor);
	}
	template <typename T = void> T OnToggleClick(bool value) {
		return ((T (*)(UIWindowMultiplayerRemote*, bool))(Il2CppBase() + 0x44B20E4))(this, value);
	}
	template <typename T = void> T OnBadassCantSelect() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B21C8))(this);
	}
	template <typename T = void> T OnFactorCantSelect() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B23AC))(this);
	}
	template <typename T = void> T CantSelectTip(uintptr_t item) {
		return ((T (*)(UIWindowMultiplayerRemote*, uintptr_t))(Il2CppBase() + 0x44B224C))(this, item);
	}
	template <typename T = void> T OnToggleFactorClick(bool isClick) {
		return ((T (*)(UIWindowMultiplayerRemote*, bool))(Il2CppBase() + 0x44B2430))(this, isClick);
	}
	template <typename T = void> T OnRefreshFactorClick() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B26EC))(this);
	}
	template <typename T = void> T OnBossRushToggleClick(bool value) {
		return ((T (*)(UIWindowMultiplayerRemote*, bool))(Il2CppBase() + 0x44B2834))(this, value);
	}
	template <typename T = void> T OnBRCantSelect() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B29C0))(this);
	}
	template <typename T = void> T OnMatchToggleClick(bool value) {
		return ((T (*)(UIWindowMultiplayerRemote*, bool))(Il2CppBase() + 0x44B2A38))(this, value);
	}
	template <typename T = void> T OnBtnBulidClick() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B2AB0))(this);
	}
	template <typename T = uintptr_t> T CreateRoomRemote(bool newGame, uintptr_t buildRoomInfo) {
		return ((T (*)(UIWindowMultiplayerRemote*, bool, uintptr_t))(Il2CppBase() + 0x44B2D50))(this, newGame, buildRoomInfo);
	}
	template <typename T = void*> T CreateRoomRemoteAsync(bool newGame, uintptr_t buildRoomInfo, bool autoCreate) {
		return ((T (*)(UIWindowMultiplayerRemote*, bool, uintptr_t, bool))(Il2CppBase() + 0x44B2EA0))(this, newGame, buildRoomInfo, autoCreate);
	}
	template <typename T = void> T CreateRoom(uintptr_t roomInfo) {
		return ((T (*)(UIWindowMultiplayerRemote*, uintptr_t))(Il2CppBase() + 0x44B301C))(this, roomInfo);
	}
	template <typename T = void> T ContinueBuild() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B3160))(this);
	}
	template <typename T = void> T OnRoomIdEndInput(Il2CppString* value) {
		return ((T (*)(UIWindowMultiplayerRemote*, Il2CppString*))(Il2CppBase() + 0x44B31C8))(this, value);
	}
	template <typename T = void> T OnBtnSearchRoomClick() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B3348))(this);
	}
	template <typename T = uintptr_t> T FetchRoomInfo(Il2CppString* roomId) {
		return ((T (*)(UIWindowMultiplayerRemote*, Il2CppString*))(Il2CppBase() + 0x44B3568))(this, roomId);
	}
	template <typename T = void*> T FetchRoomInfoAsync(Il2CppString* roomId) {
		return ((T (*)(UIWindowMultiplayerRemote*, Il2CppString*))(Il2CppBase() + 0x44B36BC))(this, roomId);
	}
	template <typename T = void> T OnFetchRoomInfo(uintptr_t roomInfo) {
		return ((T (*)(UIWindowMultiplayerRemote*, uintptr_t))(Il2CppBase() + 0x44B3820))(this, roomInfo);
	}
	template <typename T = void> T UpdateRoomInfoUI(uintptr_t roomInfo) {
		return ((T (*)(UIWindowMultiplayerRemote*, uintptr_t))(Il2CppBase() + 0x44B395C))(this, roomInfo);
	}
	template <typename T = void> T OnBtnJoinRoomClick() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B41D8))(this);
	}
	template <typename T = void> T JoinGameWithRoomInfo(uintptr_t info) {
		return ((T (*)(UIWindowMultiplayerRemote*, uintptr_t))(Il2CppBase() + 0x44B46CC))(this, info);
	}
	template <typename T = void> T JoinGame(bool needLoading) {
		return ((T (*)(UIWindowMultiplayerRemote*, bool))(Il2CppBase() + 0x44B45F8))(this, needLoading);
	}
	template <typename T = void> T OnBtnJoinTabClick() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B4854))(this);
	}
	template <typename T = void> T OnToggleMatchBadass(bool check) {
		return ((T (*)(UIWindowMultiplayerRemote*, bool))(Il2CppBase() + 0x44B48B8))(this, check);
	}
	template <typename T = void> T OnToggleMatchBR(bool check) {
		return ((T (*)(UIWindowMultiplayerRemote*, bool))(Il2CppBase() + 0x44B49B8))(this, check);
	}
	template <typename T = void> T OnMatchBRDeSelect() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B4AB4))(this);
	}
	template <typename T = void> T OnToggleMatchFactor(bool check) {
		return ((T (*)(UIWindowMultiplayerRemote*, bool))(Il2CppBase() + 0x44B4B2C))(this, check);
	}
	template <typename T = void> T OnTabQuickMatchClick() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B4BAC))(this);
	}
	template <typename T = bool> T CheckQuickMatchTime() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B4C18))(this);
	}
	template <typename T = void> T UpdateQuickMatchTime() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B4D20))(this);
	}
	template <typename T = void> T OnBtnQuickMatchClick() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B4D88))(this);
	}
	template <typename T = void> T OnBtnJoinMatchRoomClick() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B517C))(this);
	}
	template <typename T = uintptr_t> T QuickMatchJoin(bool isBadass, bool isBossrush, bool hasNormalFactor) {
		return ((T (*)(UIWindowMultiplayerRemote*, bool, bool, bool))(Il2CppBase() + 0x44B4FF8))(this, isBadass, isBossrush, hasNormalFactor);
	}
	template <typename T = uintptr_t> T TryQuickJoinRoom(uintptr_t args) {
		return ((T (*)(UIWindowMultiplayerRemote*, uintptr_t))(Il2CppBase() + 0x44B5254))(this, args);
	}
	template <typename T = void> T OnTryQuickJoinFailed(uintptr_t args) {
		return ((T (*)(UIWindowMultiplayerRemote*, uintptr_t))(Il2CppBase() + 0x44B5394))(this, args);
	}
	template <typename T = void> T TryEdnQuickJoinFailed(uintptr_t args) {
		return ((T (*)(UIWindowMultiplayerRemote*, uintptr_t))(Il2CppBase() + 0x44B5430))(this, args);
	}
	template <typename T = void> T QuickJoinRoomWithRoomId(uintptr_t roomInfo) {
		return ((T (*)(UIWindowMultiplayerRemote*, uintptr_t))(Il2CppBase() + 0x44B5704))(this, roomInfo);
	}
	template <typename T = void> T GoBeginMatchPhase() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B4938))(this);
	}
	template <typename T = void> T GoJoinMatchPhase(uintptr_t roomInfo) {
		return ((T (*)(UIWindowMultiplayerRemote*, uintptr_t))(Il2CppBase() + 0x44B585C))(this, roomInfo);
	}
	template <typename T = void> T ChangeQuickMatchView(bool beginMatch) {
		return ((T (*)(UIWindowMultiplayerRemote*, bool))(Il2CppBase() + 0x44B577C))(this, beginMatch);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B5904))(this);
	}
	template <typename T = void> T OnApplicationPause(bool pauseStatus) {
		return ((T (*)(UIWindowMultiplayerRemote*, bool))(Il2CppBase() + 0x44B5D00))(this, pauseStatus);
	}
	template <typename T = void> T OnChangeTab(int32_t value) {
		return ((T (*)(UIWindowMultiplayerRemote*, int32_t))(Il2CppBase() + 0x44B1A44))(this, value);
	}
	template <typename T = void> T RoomPlayerFull(uintptr_t e) {
		return ((T (*)(UIWindowMultiplayerRemote*, uintptr_t))(Il2CppBase() + 0x44B5FD0))(this, e);
	}
	template <typename T = void> T GoToSearchPhase() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B6100))(this);
	}
	template <typename T = void> T ProcessMainTitle(int32_t tabVal) {
		return ((T (*)(UIWindowMultiplayerRemote*, int32_t))(Il2CppBase() + 0x44B5D8C))(this, tabVal);
	}
	template <typename T = void> T OnBtnLimitCountClick() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B633C))(this);
	}
	template <typename T = void> T UpdateLimitBtnView() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B6278))(this);
	}
	template <typename T = void> T TryAutoPasteClipboard() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B5E6C))(this);
	}
	template <typename T = void> T StopConnect() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B5C2C))(this);
	}
	template <typename T = void> T ShowUILoading(float duration) {
		return ((T (*)(UIWindowMultiplayerRemote*, float))(Il2CppBase() + 0x44B478C))(this, duration);
	}
	template <typename T = void> T HideUILoading() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B565C))(this);
	}
	template <typename T = void> T ShowTempMessage(Il2CppString* content, float duration, bool isLocalized) {
		return ((T (*)(UIWindowMultiplayerRemote*, Il2CppString*, float, bool))(Il2CppBase() + 0x44B18F4))(this, content, duration, isLocalized);
	}
	template <typename T = void> T ShowTipsWithErrorCode(uintptr_t errorCode) {
		return ((T (*)(UIWindowMultiplayerRemote*, uintptr_t))(Il2CppBase() + 0x44B63C4))(this, errorCode);
	}
	template <typename T = void> T OnClientErrorRemote(int32_t errorCode) {
		return ((T (*)(UIWindowMultiplayerRemote*, int32_t))(Il2CppBase() + 0x44B65C0))(this, errorCode);
	}
	template <typename T = void> T CreateRoomb__74_0(int32_t errCode) {
		return ((T (*)(UIWindowMultiplayerRemote*, int32_t))(Il2CppBase() + 0x44B699C))(this, errCode);
	}
	template <typename T = void> T CreateRoomb__74_1() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B6A30))(this);
	}
	template <typename T = void> T iFixBaseProxy_ContinueBuild() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B6B3C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnBtnJoinTabClick() {
		return ((T (*)(UIWindowMultiplayerRemote*))(Il2CppBase() + 0x44B6B40))(this);
	}

};

}
