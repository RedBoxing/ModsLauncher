#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TradPlusAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TradPlusAndroid"));
	}

	template <typename T = uintptr_t> static T& PluginClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& BannerPluginsDict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& NativePluginsDict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& NativeBannerPluginsDict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& InterstitialPluginsDict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& RewardedVideoPluginsDict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& OfferWallPluginsDict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppString*> static T& NeedDownloadImg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> static T InitializeSdk(Il2CppString* anyAppID) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4909C))(0, anyAppID);
	}
	template <typename T = void> static T InitializeSdk_1(uintptr_t sdkConfiguration) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E49234))(0, sdkConfiguration);
	}
	template <typename T = void> static T SetAutoExpiration(bool isOn) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1E4939C))(0, isOn);
	}
	template <typename T = void> static T CheckAutoExpiration() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E49504))(0);
	}
	template <typename T = void> static T SetToutiaoIsConfirmDownload(bool isConfirm) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1E495E0))(0, isConfirm);
	}
	template <typename T = void> static T setGDPRListener() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E49748))(0);
	}
	template <typename T = void> static T setFirstShow(bool firstShow) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1E49824))(0, firstShow);
	}
	template <typename T = bool> static T isFirstShow() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E4998C))(0);
	}
	template <typename T = void> static T showUploadDataNotifyDialog(Il2CppString* url) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E49A70))(0, url);
	}
	template <typename T = void> static T setGDPRDataCollection(int32_t level) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1E49BB0))(0, level);
	}
	template <typename T = int32_t> static T getGDPRDataCollection() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E49D14))(0);
	}
	template <typename T = bool> static T isEUTraffic() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E49DF8))(0);
	}
	template <typename T = void> static T setGDPRChild(bool isGdprChild) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1E49EDC))(0, isGdprChild);
	}
	template <typename T = void> static T setCCPADoNotSell(bool isCCPA) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1E4A044))(0, isCCPA);
	}
	template <typename T = void> static T setCOPPAIsAgeRestrictedUser(bool isChild) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1E4A1AC))(0, isChild);
	}
	template <typename T = void> static T setCalifornia(bool isCa) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1E4A314))(0, isCa);
	}
	template <typename T = bool> static T get_isCalifornia() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E4A47C))(0);
	}
	template <typename T = void> static T setAuthUID(bool needAuthUID) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1E4A560))(0, needAuthUID);
	}
	template <typename T = void> static T SetNeedTestDevice(bool needTestDevice) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1E4A6C8))(0, needTestDevice);
	}
	template <typename T = void> static T SetFacebookTestDevice(Il2CppString* testDevice) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4A830))(0, testDevice);
	}
	template <typename T = void> static T SetAdmobTestDevice(Il2CppString* testDevice) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4A970))(0, testDevice);
	}
	template <typename T = void> static T initCustomMap(Il2CppDictionary<Il2CppString*, Il2CppString*>* map) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1E4AAB0))(0, map);
	}
	template <typename T = void> static T initPlacementCustomMap(Il2CppString* placementId, Il2CppDictionary<Il2CppString*, Il2CppString*>* map) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1E4AC60))(0, placementId, map);
	}
	template <typename T = void> static T SetCnsetIsCNLanguageLog(bool languageLog) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1E4ADFC))(0, languageLog);
	}
	template <typename T = void> static T LoadBannerPluginsForAdUnits(Il2CppString* bannerAdUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4AF64))(0, bannerAdUnitId);
	}
	template <typename T = void> static T LoadNativePluginsForAdUnits(Il2CppString* nativeAdUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4B19C))(0, nativeAdUnitId);
	}
	template <typename T = void> static T LoadNativeBannerPluginsForAdUnits(Il2CppString* nativebannerAdUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4B3D4))(0, nativebannerAdUnitId);
	}
	template <typename T = void> static T LoadInterstitialPluginsForAdUnits(Il2CppString* interstitialAdUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4B60C))(0, interstitialAdUnitId);
	}
	template <typename T = void> static T LoadRewardedVideoPluginsForAdUnits(Il2CppString* rewardedAdUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4B844))(0, rewardedAdUnitId);
	}
	template <typename T = void> static T LoadOfferWallPluginsForAdUnits(Il2CppString* offerWallAdUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4BA7C))(0, offerWallAdUnitId);
	}
	template <typename T = Il2CppString*> static T GetSdkName() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E48A9C))(0);
	}
	template <typename T = void> static T AddFacebookTestDeviceId(Il2CppString* hashedDeviceId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4BCB4))(0, hashedDeviceId);
	}
	template <typename T = void> static T CreateBanner(Il2CppString* adUnitId, uintptr_t position) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1E4BDF4))(0, adUnitId, position);
	}
	template <typename T = void> static T CreateBanner_1(Il2CppString* adUnitId, uintptr_t position, Il2CppString* adSceneId) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1E4C130))(0, adUnitId, position, adSceneId);
	}
	template <typename T = void> static T ReloadBannerAd(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4C414))(0, adUnitId);
	}
	template <typename T = void> static T ShowBanner(Il2CppString* adUnitId, bool shouldShow) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x1E4C5F4))(0, adUnitId, shouldShow);
	}
	template <typename T = void> static T DestroyBanner(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4C870))(0, adUnitId);
	}
	template <typename T = void> static T ShowBannerConfirmUWSAd(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4CA50))(0, adUnitId);
	}
	template <typename T = void> static T BannerEntryAdScenario(Il2CppString* adUnitId, Il2CppString* adSceneId) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1E4CC30))(0, adUnitId, adSceneId);
	}
	template <typename T = void> static T SetAdSize(Il2CppString* adUnitId, int32_t width, int32_t height) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x1E4CE80))(0, adUnitId, width, height);
	}
	template <typename T = void> static T SetNativeCustomParams(Il2CppString* adUnitId, Il2CppDictionary<Il2CppString*, Il2CppString*>* map) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1E4D178))(0, adUnitId, map);
	}
	template <typename T = void> static T CreateNative(Il2CppString* adUnitId, uintptr_t position, Il2CppString* adSceneId) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1E4D3D8))(0, adUnitId, position, adSceneId);
	}
	template <typename T = void> static T CreateNative_1(Il2CppString* adUnitId, int32_t x, int32_t y, Il2CppString* adSceneId) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x1E4D6BC))(0, adUnitId, x, y, adSceneId);
	}
	template <typename T = void> static T ReloadNativeAd(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4DA1C))(0, adUnitId);
	}
	template <typename T = void> static T DestroyNative(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4DBFC))(0, adUnitId);
	}
	template <typename T = void> static T ShowNative(Il2CppString* adUnitId, bool shouldShow) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x1E4DDDC))(0, adUnitId, shouldShow);
	}
	template <typename T = void> static T NativeEntryAdScenario(Il2CppString* adUnitId, Il2CppString* adSceneId) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1E4E058))(0, adUnitId, adSceneId);
	}
	template <typename T = void> static T SetNativeBannerSize(Il2CppString* adUnitId, int32_t width, int32_t height) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x1E4E2A8))(0, adUnitId, width, height);
	}
	template <typename T = void> static T SetNativeBannerCustomParams(Il2CppString* adUnitId, Il2CppDictionary<Il2CppString*, Il2CppString*>* map) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1E4E5A0))(0, adUnitId, map);
	}
	template <typename T = void> static T CreateNativeBanner(Il2CppString* adUnitId, uintptr_t position, Il2CppString* adSceneId, Il2CppString* LayoutIdByName) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1E4E800))(0, adUnitId, position, adSceneId, LayoutIdByName);
	}
	template <typename T = void> static T ReloadNativeBannerAd(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4EB40))(0, adUnitId);
	}
	template <typename T = void> static T HideNativeBanner(Il2CppString* adUnitId, bool shouldShow) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x1E4ED20))(0, adUnitId, shouldShow);
	}
	template <typename T = void> static T DestroyNativeBanner(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4EF9C))(0, adUnitId);
	}
	template <typename T = void> static T NativeBannerEntryAdScenario(Il2CppString* adUnitId, Il2CppString* adSceneId) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1E4F17C))(0, adUnitId, adSceneId);
	}
	template <typename T = void> static T RequestInterstitialAd(Il2CppString* adUnitId, bool autoReload) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x1E4F3CC))(0, adUnitId, autoReload);
	}
	template <typename T = void> static T ReloadInterstitialAd(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4F6E0))(0, adUnitId);
	}
	template <typename T = void> static T ShowInterstitialAd(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4F8C0))(0, adUnitId);
	}
	template <typename T = void> static T ShowInterstitialAd_1(Il2CppString* adUnitId, Il2CppString* adSceneId) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1E4FAA0))(0, adUnitId, adSceneId);
	}
	template <typename T = void> static T ShowInterstitialConfirmUWSAd(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4FCF0))(0, adUnitId);
	}
	template <typename T = void> static T InterstitialEntryAdScenario(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4FED0))(0, adUnitId);
	}
	template <typename T = void> static T InterstitialEntryAdScenario_1(Il2CppString* adUnitId, Il2CppString* adSceneId) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1E500B0))(0, adUnitId, adSceneId);
	}
	template <typename T = bool> static T IsInterstialReady(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E50300))(0, adUnitId);
	}
	template <typename T = void> static T SetCustomParams(Il2CppString* adUnitId, Il2CppDictionary<Il2CppString*, Il2CppString*>* map) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1E504F0))(0, adUnitId, map);
	}
	template <typename T = void> static T RequestRewardedVideo(Il2CppString* adUnitId, bool autoReload) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x1E50750))(0, adUnitId, autoReload);
	}
	template <typename T = void> static T ReloadRewardedVideoAd(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E509C8))(0, adUnitId);
	}
	template <typename T = void> static T ShowRewardedVideo(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E50BA8))(0, adUnitId);
	}
	template <typename T = void> static T ShowRewardedVideo_1(Il2CppString* adUnitId, Il2CppString* adSceneId) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1E50D88))(0, adUnitId, adSceneId);
	}
	template <typename T = void> static T ShowRewardedVideoConfirmUWSAd(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E50FD8))(0, adUnitId);
	}
	template <typename T = void> static T RewardedVideoEntryAdScenario(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E511B8))(0, adUnitId);
	}
	template <typename T = void> static T RewardedVideoEntryAdScenario_1(Il2CppString* adUnitId, Il2CppString* adSceneId) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1E51398))(0, adUnitId, adSceneId);
	}
	template <typename T = bool> static T HasRewardedVideo(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E515E8))(0, adUnitId);
	}
	template <typename T = void> static T RequestOfferWall(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E517D8))(0, adUnitId);
	}
	template <typename T = void> static T ShowOfferWall(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E519B8))(0, adUnitId);
	}
	template <typename T = void> static T ShowOfferWall_1(Il2CppString* adUnitId, Il2CppString* adSceneId) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1E51B98))(0, adUnitId, adSceneId);
	}
	template <typename T = void> static T ShowOfferWallConfirmUWSAd(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E51DE8))(0, adUnitId);
	}
	template <typename T = void> static T OfferWallEntryAdScenario(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E51FC8))(0, adUnitId);
	}
	template <typename T = void> static T OfferWallEntryAdScenario_1(Il2CppString* adUnitId, Il2CppString* adSceneId) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1E521A8))(0, adUnitId, adSceneId);
	}
	template <typename T = bool> static T HasOfferWall(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E523F8))(0, adUnitId);
	}
	template <typename T = bool> static T IsOfferWallAllReady(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E525E8))(0, adUnitId);
	}

};

}
