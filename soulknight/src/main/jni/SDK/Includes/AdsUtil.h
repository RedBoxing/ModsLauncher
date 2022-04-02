#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AdsUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdsUtil"));
	}

	template <typename T = Il2CppString*> static T& AD_Tag_TradPlus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_DAILY_COIN_TIMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& OnVideoComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& OnVideoFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& lastShowVideoAdPlaceId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& lastShowIntertistAdPlaceId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppString*> static T& RoomSeller() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TvGold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Reborn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GemShop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Manure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Statement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& pause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& appId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppString*> static T& videoAdId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppString*> static T& reborn_video() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = Il2CppString*> static T& tv_reward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = Il2CppString*> static T& room_seller() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = Il2CppString*> static T& gem_shop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T& source2AdId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = Il2CppString*> static T& curPlacement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = void> static T SetVideoCompleteListener(uintptr_t v) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A0D778))(0, v);
	}
	template <typename T = void> static T SetVideoFailListener(uintptr_t v) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A0D824))(0, v);
	}
	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A0D8D0))(0);
	}
	template <typename T = bool> static T IsRewardVideoReady(Il2CppString* placementId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1A0DFA8))(0, placementId);
	}
	template <typename T = void> static T ShowRewardVideo(Il2CppString* placementId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1A0E100))(0, placementId);
	}
	template <typename T = void> static T LoadRewardVideo(Il2CppString* placementId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1A0E4D0))(0, placementId);
	}
	template <typename T = bool> static T IsInterstitialVideoReady(Il2CppString* placementId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1A0E52C))(0, placementId);
	}
	template <typename T = void> static T ShowInterstitialVideo(Il2CppString* placementId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1A0E58C))(0, placementId);
	}
	template <typename T = void> static T LoadInterstitialVideo(Il2CppString* placementId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1A0E5E8))(0, placementId);
	}
	template <typename T = void> static T InitTradPlus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A0D968))(0);
	}
	template <typename T = void> static T EntryAdScene(Il2CppString* sceneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1A0E644))(0, sceneName);
	}
	template <typename T = void> static T ReportShowAdDialog(Il2CppString* adId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1A0E7A4))(0, adId);
	}
	template <typename T = void> static T ReportGiveupAd(Il2CppString* adId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1A0E800))(0, adId);
	}
	template <typename T = void> static T LogAdClick(Il2CppString* source, Il2CppString* placement) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A0E85C))(0, source, placement);
	}
	template <typename T = void> static T LogAdComplete(Il2CppString* source, Il2CppString* placement) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A0EA3C))(0, source, placement);
	}
	template <typename T = bool> static T SupportVideos() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A0EC34))(0);
	}
	template <typename T = void> static T LogAdFailed(Il2CppString* source) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1A0EC8C))(0, source);
	}
	template <typename T = void> static T LogAdPlacement(Il2CppString* source, Il2CppString* placement) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A0E2C8))(0, source, placement);
	}
	template <typename T = Il2CppString*> static T GetADChannelName() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A0ED90))(0);
	}
	template <typename T = void> static T ShowAd(Il2CppString* placementId, uintptr_t onCompleted, uintptr_t onFailed) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A0EE34))(0, placementId, onCompleted, onFailed);
	}

};

}
