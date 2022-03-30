#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TradPlusManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TradPlusManager"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& OnSdkInitializedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& OnAdLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& OnAdLoadFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& OnAdClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& OnAdImpression() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& OnAdClosed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& OnAdAllLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& OneLayerLoadFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& OneLayerLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& OnLoadAdStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = void*> static T& OnBiddingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = void*> static T& OnBiddingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = void*> static T& OnNativeAdLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = void*> static T& OnNativeAdLoadFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = void*> static T& OnNativeAdClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = void*> static T& OnNativeAdImpression() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = void*> static T& OnNativeAdClosed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = void*> static T& OnNativeAdAllLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = void*> static T& OneNativeLayerLoadFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = void*> static T& OneNativeLayerLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = void*> static T& OnNativeLoadAdStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = void*> static T& OnNativeBiddingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = void*> static T& OnNativeBiddingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = void*> static T& OnNativeBannerAdLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = void*> static T& OnNativeBannerAdLoadFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = void*> static T& OnNativeBannerAdClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = void*> static T& OnNativeBannerAdImpression() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = void*> static T& OnNativeBannerAdClosed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = void*> static T& OnNativeBannerAdAllLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = void*> static T& OneNativeBannerLayerLoadFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = void*> static T& OneNativeBannerLayerLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = void*> static T& OnNativeBannerLoadAdStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = void*> static T& OnNativeBannerBiddingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = void*> static T& OnNativeBannerBiddingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = void*> static T& OnInterstitialExpiredEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = void*> static T& OnInterstitialAdLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = void*> static T& OnInterstitialAdFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = void*> static T& OnInterstitialAdImpression() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = void*> static T& OnInterstitialAdClosed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = void*> static T& OnInterstitialAdClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = void*> static T& OnInterstitialAdAllLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = void*> static T& OneInterstitialLayerLoadFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = void*> static T& OneInterstitialLayerLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = void*> static T& OnInterstitialLoadAdStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = void*> static T& OnInterstitialBiddingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = void*> static T& OnInterstitialBiddingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = void*> static T& OnRewardedVideoAdLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = void*> static T& OnRewardedVideoAdFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = void*> static T& OnRewardedVideoAdImpression() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = void*> static T& OnRewardedVideoAdClosed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = void*> static T& OnRewardedVideoAdClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = void*> static T& OnRewardedVideoAdReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = void*> static T& OnRewardedVideoAdVideoError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = void*> static T& OnRewardedVideoAdAllLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = void*> static T& OneRewardedVideoLayerLoadFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = void*> static T& OneRewardedVideoLayerLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = void*> static T& OnRewardedVideoLoadAdStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = void*> static T& OnRewardedVideoBiddingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = void*> static T& OnRewardedVideoBiddingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = void*> static T& OnOfferWallAdLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = void*> static T& OnOfferWallAdFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = void*> static T& OnOfferWallAdImpression() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = void*> static T& OnOfferWallAdClosed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = void*> static T& OnOfferWallAdClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = void*> static T& OnOfferWallAdReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = void*> static T& OnOfferWallAdAllLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = void*> static T& OneOfferWallLayerLoadFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = void*> static T& OneOfferWallLayerLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = void*> static T& OnOfferWallLoadAdStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = void*> static T& OnOfferWallBiddingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = void*> static T& OnOfferWallBiddingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = void*> static T& NativeInterstialAdLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = void*> static T& NativeInterstialAdFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = void*> static T& NativeInterstialAdImpression() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = void*> static T& NativeInterstialAdClosed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = void*> static T& NativeInterstialAdClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = void*> static T& NativeInterstialAdAllLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = void*> static T& NativeInterstialLayerLoadFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = void*> static T& NativeInterstialLayerLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = void*> static T& NativeInterstialLoadAdStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = void*> static T& NativeInterstialBiddingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = void*> static T& NativeInterstialBiddingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = void*> static T& NativeInterstialShowFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = void*> static T& OnGDPRSuccessEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = void*> static T& OnGDPRFailedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E52A50))(0);
	}
	template <typename T = void> static T set_Instance(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E54FCC))(0, value);
	}
	template <typename T = void> static T add_OnSdkInitializedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E55020))(0, value);
	}
	template <typename T = void> static T remove_OnSdkInitializedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E55120))(0, value);
	}
	template <typename T = void> static T add_OnAdLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E55220))(0, value);
	}
	template <typename T = void> static T remove_OnAdLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E55320))(0, value);
	}
	template <typename T = void> static T add_OnAdLoadFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E55420))(0, value);
	}
	template <typename T = void> static T remove_OnAdLoadFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E55520))(0, value);
	}
	template <typename T = void> static T add_OnAdClicked(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E55620))(0, value);
	}
	template <typename T = void> static T remove_OnAdClicked(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E55720))(0, value);
	}
	template <typename T = void> static T add_OnAdImpression(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E55820))(0, value);
	}
	template <typename T = void> static T remove_OnAdImpression(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E55920))(0, value);
	}
	template <typename T = void> static T add_OnAdClosed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E55A20))(0, value);
	}
	template <typename T = void> static T remove_OnAdClosed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E55B20))(0, value);
	}
	template <typename T = void> static T add_OnAdAllLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E55C20))(0, value);
	}
	template <typename T = void> static T remove_OnAdAllLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E55D20))(0, value);
	}
	template <typename T = void> static T add_OneLayerLoadFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E55E20))(0, value);
	}
	template <typename T = void> static T remove_OneLayerLoadFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E55F20))(0, value);
	}
	template <typename T = void> static T add_OneLayerLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E56020))(0, value);
	}
	template <typename T = void> static T remove_OneLayerLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E56120))(0, value);
	}
	template <typename T = void> static T add_OnLoadAdStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E56220))(0, value);
	}
	template <typename T = void> static T remove_OnLoadAdStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E56320))(0, value);
	}
	template <typename T = void> static T add_OnBiddingStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E56420))(0, value);
	}
	template <typename T = void> static T remove_OnBiddingStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E56520))(0, value);
	}
	template <typename T = void> static T add_OnBiddingEnd(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E56620))(0, value);
	}
	template <typename T = void> static T remove_OnBiddingEnd(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E56720))(0, value);
	}
	template <typename T = void> static T add_OnNativeAdLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E56820))(0, value);
	}
	template <typename T = void> static T remove_OnNativeAdLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E56920))(0, value);
	}
	template <typename T = void> static T add_OnNativeAdLoadFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E56A20))(0, value);
	}
	template <typename T = void> static T remove_OnNativeAdLoadFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E56B20))(0, value);
	}
	template <typename T = void> static T add_OnNativeAdClicked(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E56C20))(0, value);
	}
	template <typename T = void> static T remove_OnNativeAdClicked(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E56D20))(0, value);
	}
	template <typename T = void> static T add_OnNativeAdImpression(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E56E20))(0, value);
	}
	template <typename T = void> static T remove_OnNativeAdImpression(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E56F20))(0, value);
	}
	template <typename T = void> static T add_OnNativeAdClosed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E57020))(0, value);
	}
	template <typename T = void> static T remove_OnNativeAdClosed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E57120))(0, value);
	}
	template <typename T = void> static T add_OnNativeAdAllLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E57220))(0, value);
	}
	template <typename T = void> static T remove_OnNativeAdAllLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E57320))(0, value);
	}
	template <typename T = void> static T add_OneNativeLayerLoadFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E57420))(0, value);
	}
	template <typename T = void> static T remove_OneNativeLayerLoadFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E57520))(0, value);
	}
	template <typename T = void> static T add_OneNativeLayerLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E57620))(0, value);
	}
	template <typename T = void> static T remove_OneNativeLayerLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E57720))(0, value);
	}
	template <typename T = void> static T add_OnNativeLoadAdStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E57820))(0, value);
	}
	template <typename T = void> static T remove_OnNativeLoadAdStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E57920))(0, value);
	}
	template <typename T = void> static T add_OnNativeBiddingStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E57A20))(0, value);
	}
	template <typename T = void> static T remove_OnNativeBiddingStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E57B20))(0, value);
	}
	template <typename T = void> static T add_OnNativeBiddingEnd(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E57C20))(0, value);
	}
	template <typename T = void> static T remove_OnNativeBiddingEnd(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E57D20))(0, value);
	}
	template <typename T = void> static T add_OnNativeBannerAdLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E57E20))(0, value);
	}
	template <typename T = void> static T remove_OnNativeBannerAdLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E57F20))(0, value);
	}
	template <typename T = void> static T add_OnNativeBannerAdLoadFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E58020))(0, value);
	}
	template <typename T = void> static T remove_OnNativeBannerAdLoadFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E58120))(0, value);
	}
	template <typename T = void> static T add_OnNativeBannerAdClicked(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E58220))(0, value);
	}
	template <typename T = void> static T remove_OnNativeBannerAdClicked(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E58320))(0, value);
	}
	template <typename T = void> static T add_OnNativeBannerAdImpression(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E58420))(0, value);
	}
	template <typename T = void> static T remove_OnNativeBannerAdImpression(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E58520))(0, value);
	}
	template <typename T = void> static T add_OnNativeBannerAdClosed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E58620))(0, value);
	}
	template <typename T = void> static T remove_OnNativeBannerAdClosed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E58720))(0, value);
	}
	template <typename T = void> static T add_OnNativeBannerAdAllLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E58820))(0, value);
	}
	template <typename T = void> static T remove_OnNativeBannerAdAllLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E58920))(0, value);
	}
	template <typename T = void> static T add_OneNativeBannerLayerLoadFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E58A20))(0, value);
	}
	template <typename T = void> static T remove_OneNativeBannerLayerLoadFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E58B20))(0, value);
	}
	template <typename T = void> static T add_OneNativeBannerLayerLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E58C20))(0, value);
	}
	template <typename T = void> static T remove_OneNativeBannerLayerLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E58D20))(0, value);
	}
	template <typename T = void> static T add_OnNativeBannerLoadAdStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E58E20))(0, value);
	}
	template <typename T = void> static T remove_OnNativeBannerLoadAdStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E58F20))(0, value);
	}
	template <typename T = void> static T add_OnNativeBannerBiddingStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E59020))(0, value);
	}
	template <typename T = void> static T remove_OnNativeBannerBiddingStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E59120))(0, value);
	}
	template <typename T = void> static T add_OnNativeBannerBiddingEnd(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E59220))(0, value);
	}
	template <typename T = void> static T remove_OnNativeBannerBiddingEnd(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E59320))(0, value);
	}
	template <typename T = void> static T add_OnInterstitialExpiredEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E59420))(0, value);
	}
	template <typename T = void> static T remove_OnInterstitialExpiredEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E59520))(0, value);
	}
	template <typename T = void> static T add_OnInterstitialAdLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E59620))(0, value);
	}
	template <typename T = void> static T remove_OnInterstitialAdLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E59720))(0, value);
	}
	template <typename T = void> static T add_OnInterstitialAdFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E59820))(0, value);
	}
	template <typename T = void> static T remove_OnInterstitialAdFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E59920))(0, value);
	}
	template <typename T = void> static T add_OnInterstitialAdImpression(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E59A20))(0, value);
	}
	template <typename T = void> static T remove_OnInterstitialAdImpression(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E59B20))(0, value);
	}
	template <typename T = void> static T add_OnInterstitialAdClosed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E59C20))(0, value);
	}
	template <typename T = void> static T remove_OnInterstitialAdClosed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E59D20))(0, value);
	}
	template <typename T = void> static T add_OnInterstitialAdClicked(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E59E20))(0, value);
	}
	template <typename T = void> static T remove_OnInterstitialAdClicked(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E59F20))(0, value);
	}
	template <typename T = void> static T add_OnInterstitialAdAllLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5A020))(0, value);
	}
	template <typename T = void> static T remove_OnInterstitialAdAllLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5A120))(0, value);
	}
	template <typename T = void> static T add_OneInterstitialLayerLoadFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5A220))(0, value);
	}
	template <typename T = void> static T remove_OneInterstitialLayerLoadFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5A320))(0, value);
	}
	template <typename T = void> static T add_OneInterstitialLayerLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5A420))(0, value);
	}
	template <typename T = void> static T remove_OneInterstitialLayerLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5A520))(0, value);
	}
	template <typename T = void> static T add_OnInterstitialLoadAdStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5A620))(0, value);
	}
	template <typename T = void> static T remove_OnInterstitialLoadAdStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5A720))(0, value);
	}
	template <typename T = void> static T add_OnInterstitialBiddingStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5A820))(0, value);
	}
	template <typename T = void> static T remove_OnInterstitialBiddingStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5A920))(0, value);
	}
	template <typename T = void> static T add_OnInterstitialBiddingEnd(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5AA20))(0, value);
	}
	template <typename T = void> static T remove_OnInterstitialBiddingEnd(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5AB20))(0, value);
	}
	template <typename T = void> static T add_OnRewardedVideoAdLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5AC20))(0, value);
	}
	template <typename T = void> static T remove_OnRewardedVideoAdLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5AD20))(0, value);
	}
	template <typename T = void> static T add_OnRewardedVideoAdFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5AE20))(0, value);
	}
	template <typename T = void> static T remove_OnRewardedVideoAdFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5AF20))(0, value);
	}
	template <typename T = void> static T add_OnRewardedVideoAdImpression(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5B020))(0, value);
	}
	template <typename T = void> static T remove_OnRewardedVideoAdImpression(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5B120))(0, value);
	}
	template <typename T = void> static T add_OnRewardedVideoAdClosed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5B220))(0, value);
	}
	template <typename T = void> static T remove_OnRewardedVideoAdClosed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5B320))(0, value);
	}
	template <typename T = void> static T add_OnRewardedVideoAdClicked(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5B420))(0, value);
	}
	template <typename T = void> static T remove_OnRewardedVideoAdClicked(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5B520))(0, value);
	}
	template <typename T = void> static T add_OnRewardedVideoAdReward(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5B620))(0, value);
	}
	template <typename T = void> static T remove_OnRewardedVideoAdReward(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5B720))(0, value);
	}
	template <typename T = void> static T add_OnRewardedVideoAdVideoError(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5B820))(0, value);
	}
	template <typename T = void> static T remove_OnRewardedVideoAdVideoError(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5B920))(0, value);
	}
	template <typename T = void> static T add_OnRewardedVideoAdAllLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5BA20))(0, value);
	}
	template <typename T = void> static T remove_OnRewardedVideoAdAllLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5BB20))(0, value);
	}
	template <typename T = void> static T add_OneRewardedVideoLayerLoadFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5BC20))(0, value);
	}
	template <typename T = void> static T remove_OneRewardedVideoLayerLoadFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5BD20))(0, value);
	}
	template <typename T = void> static T add_OneRewardedVideoLayerLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5BE20))(0, value);
	}
	template <typename T = void> static T remove_OneRewardedVideoLayerLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5BF20))(0, value);
	}
	template <typename T = void> static T add_OnRewardedVideoLoadAdStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5C020))(0, value);
	}
	template <typename T = void> static T remove_OnRewardedVideoLoadAdStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5C120))(0, value);
	}
	template <typename T = void> static T add_OnRewardedVideoBiddingStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5C220))(0, value);
	}
	template <typename T = void> static T remove_OnRewardedVideoBiddingStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5C320))(0, value);
	}
	template <typename T = void> static T add_OnRewardedVideoBiddingEnd(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5C420))(0, value);
	}
	template <typename T = void> static T remove_OnRewardedVideoBiddingEnd(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5C520))(0, value);
	}
	template <typename T = void> static T add_OnOfferWallAdLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5C620))(0, value);
	}
	template <typename T = void> static T remove_OnOfferWallAdLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5C720))(0, value);
	}
	template <typename T = void> static T add_OnOfferWallAdFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5C820))(0, value);
	}
	template <typename T = void> static T remove_OnOfferWallAdFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5C920))(0, value);
	}
	template <typename T = void> static T add_OnOfferWallAdImpression(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5CA20))(0, value);
	}
	template <typename T = void> static T remove_OnOfferWallAdImpression(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5CB20))(0, value);
	}
	template <typename T = void> static T add_OnOfferWallAdClosed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5CC20))(0, value);
	}
	template <typename T = void> static T remove_OnOfferWallAdClosed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5CD20))(0, value);
	}
	template <typename T = void> static T add_OnOfferWallAdClicked(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5CE20))(0, value);
	}
	template <typename T = void> static T remove_OnOfferWallAdClicked(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5CF20))(0, value);
	}
	template <typename T = void> static T add_OnOfferWallAdReward(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5D020))(0, value);
	}
	template <typename T = void> static T remove_OnOfferWallAdReward(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5D120))(0, value);
	}
	template <typename T = void> static T add_OnOfferWallAdAllLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5D220))(0, value);
	}
	template <typename T = void> static T remove_OnOfferWallAdAllLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5D320))(0, value);
	}
	template <typename T = void> static T add_OneOfferWallLayerLoadFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5D420))(0, value);
	}
	template <typename T = void> static T remove_OneOfferWallLayerLoadFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5D520))(0, value);
	}
	template <typename T = void> static T add_OneOfferWallLayerLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5D620))(0, value);
	}
	template <typename T = void> static T remove_OneOfferWallLayerLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5D720))(0, value);
	}
	template <typename T = void> static T add_OnOfferWallLoadAdStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5D820))(0, value);
	}
	template <typename T = void> static T remove_OnOfferWallLoadAdStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5D920))(0, value);
	}
	template <typename T = void> static T add_OnOfferWallBiddingStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5DA20))(0, value);
	}
	template <typename T = void> static T remove_OnOfferWallBiddingStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5DB20))(0, value);
	}
	template <typename T = void> static T add_OnOfferWallBiddingEnd(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5DC20))(0, value);
	}
	template <typename T = void> static T remove_OnOfferWallBiddingEnd(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5DD20))(0, value);
	}
	template <typename T = void> static T add_NativeInterstialAdLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5DE20))(0, value);
	}
	template <typename T = void> static T remove_NativeInterstialAdLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5DF20))(0, value);
	}
	template <typename T = void> static T add_NativeInterstialAdFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5E020))(0, value);
	}
	template <typename T = void> static T remove_NativeInterstialAdFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5E120))(0, value);
	}
	template <typename T = void> static T add_NativeInterstialAdImpression(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5E220))(0, value);
	}
	template <typename T = void> static T remove_NativeInterstialAdImpression(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5E320))(0, value);
	}
	template <typename T = void> static T add_NativeInterstialAdClosed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5E420))(0, value);
	}
	template <typename T = void> static T remove_NativeInterstialAdClosed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5E520))(0, value);
	}
	template <typename T = void> static T add_NativeInterstialAdClicked(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5E620))(0, value);
	}
	template <typename T = void> static T remove_NativeInterstialAdClicked(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5E720))(0, value);
	}
	template <typename T = void> static T add_NativeInterstialAdAllLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5E820))(0, value);
	}
	template <typename T = void> static T remove_NativeInterstialAdAllLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5E920))(0, value);
	}
	template <typename T = void> static T add_NativeInterstialLayerLoadFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5EA20))(0, value);
	}
	template <typename T = void> static T remove_NativeInterstialLayerLoadFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5EB20))(0, value);
	}
	template <typename T = void> static T add_NativeInterstialLayerLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5EC20))(0, value);
	}
	template <typename T = void> static T remove_NativeInterstialLayerLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5ED20))(0, value);
	}
	template <typename T = void> static T add_NativeInterstialLoadAdStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5EE20))(0, value);
	}
	template <typename T = void> static T remove_NativeInterstialLoadAdStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5EF20))(0, value);
	}
	template <typename T = void> static T add_NativeInterstialBiddingStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5F020))(0, value);
	}
	template <typename T = void> static T remove_NativeInterstialBiddingStart(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5F120))(0, value);
	}
	template <typename T = void> static T add_NativeInterstialBiddingEnd(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5F220))(0, value);
	}
	template <typename T = void> static T remove_NativeInterstialBiddingEnd(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5F320))(0, value);
	}
	template <typename T = void> static T add_NativeInterstialShowFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5F420))(0, value);
	}
	template <typename T = void> static T remove_NativeInterstialShowFailed(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5F520))(0, value);
	}
	template <typename T = void> static T add_OnGDPRSuccessEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5F620))(0, value);
	}
	template <typename T = void> static T remove_OnGDPRSuccessEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5F720))(0, value);
	}
	template <typename T = void> static T add_OnGDPRFailedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5F820))(0, value);
	}
	template <typename T = void> static T remove_OnGDPRFailedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E5F920))(0, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TradPlusManager*))(Il2CppBase() + 0x1E5FA20))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(TradPlusManager*))(Il2CppBase() + 0x1E5FBAC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T DecodeArgs(Il2CppString* argsJson, int32_t min) {
		return ((T (*)(TradPlusManager*, Il2CppString*, int32_t))(Il2CppBase() + 0x1E5FCD4))(this, argsJson, min);
	}
	template <typename T = void> T EmitSdkInitializedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E6017C))(this, argsJson);
	}
	template <typename T = void> T EmitGDPRSuccessEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E6027C))(this, argsJson);
	}
	template <typename T = void> T EmitFailedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E6037C))(this, argsJson);
	}
	template <typename T = void> T EmitOnAdLoadedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E6047C))(this, argsJson);
	}
	template <typename T = void> T EmitOnAdLoadFailedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E605AC))(this, argsJson);
	}
	template <typename T = void> T EmitOnAdClickedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E606D0))(this, argsJson);
	}
	template <typename T = void> T EmitOnAdClosedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E607D0))(this, argsJson);
	}
	template <typename T = void> T EmitOnAdImpressionEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E608D0))(this, argsJson);
	}
	template <typename T = void> T EmitOnAdAllLoadedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E609D0))(this, argsJson);
	}
	template <typename T = void> T EmitOneLayerLoadFailedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E60B28))(this, argsJson);
	}
	template <typename T = void> T EmitOneLayerLoadedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E60C4C))(this, argsJson);
	}
	template <typename T = void> T EmitOnLoadAdStartEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E60D4C))(this, argsJson);
	}
	template <typename T = void> T EmitOnBiddingStartEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E60E4C))(this, argsJson);
	}
	template <typename T = void> T EmitOnBiddingEndEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E60F4C))(this, argsJson);
	}
	template <typename T = void> T EmitOnInterstitialAdLoadedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E6104C))(this, argsJson);
	}
	template <typename T = void> T EmitOnInterstitialAdFailedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E6114C))(this, argsJson);
	}
	template <typename T = void> T EmitOnInterstitialAdClosedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E61270))(this, argsJson);
	}
	template <typename T = void> T EmitInterstitialDidExpireEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E61370))(this, argsJson);
	}
	template <typename T = void> T EmitOnInterstitialAdImpressionEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E61470))(this, argsJson);
	}
	template <typename T = void> T EmitOnInterstitialAdClickedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E61570))(this, argsJson);
	}
	template <typename T = void> T EmitOnInterstitialAdClicked(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E61670))(this, argsJson);
	}
	template <typename T = void> T EmitOnInterstitialAdAllLoadedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E61770))(this, argsJson);
	}
	template <typename T = void> T EmitOneInterstitialLayerLoadFailedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E618C8))(this, argsJson);
	}
	template <typename T = void> T EmitOneInterstitialLayerLoadedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E619EC))(this, argsJson);
	}
	template <typename T = void> T EmitOnInterstitialLoadAdStartEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E61AEC))(this, argsJson);
	}
	template <typename T = void> T EmitOnInterstitialBiddingStartEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E61BEC))(this, argsJson);
	}
	template <typename T = void> T EmitOnInterstitialBiddingEndEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E61CEC))(this, argsJson);
	}
	template <typename T = void> T EmitOnRewardedVideoAdLoadedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E61DEC))(this, argsJson);
	}
	template <typename T = void> T EmitOnRewardedVideoAdFailedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E61EEC))(this, argsJson);
	}
	template <typename T = void> T EmitOnRewardedVideoAdClosedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E62010))(this, argsJson);
	}
	template <typename T = void> T EmitOnRewardedVideoAdImpressionEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E62110))(this, argsJson);
	}
	template <typename T = void> T EmitOnRewardedVideoAdClickedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E62210))(this, argsJson);
	}
	template <typename T = void> T EmitOnRewardedVideoAdRewardEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E62310))(this, argsJson);
	}
	template <typename T = void> T EmitOnRewardedVideoReceivedRewardEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E62410))(this, argsJson);
	}
	template <typename T = void> T EmitOnRewardedVideoAdAllLoadedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E62510))(this, argsJson);
	}
	template <typename T = void> T EmitOnRewardedVideoAdVideoErrorEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E62668))(this, argsJson);
	}
	template <typename T = void> T EmitOneRewardedVideoLayerLoadFailedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E62768))(this, argsJson);
	}
	template <typename T = void> T EmitOneRewardedVideoLayerLoadedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E6288C))(this, argsJson);
	}
	template <typename T = void> T EmitOnRewardedVideoLoadAdStartEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E6298C))(this, argsJson);
	}
	template <typename T = void> T EmitOnRewardedVideoBiddingStartEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E62A8C))(this, argsJson);
	}
	template <typename T = void> T EmitOnRewardedVideoBiddingEndEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E62B8C))(this, argsJson);
	}
	template <typename T = void> T EmitOnOfferWallAdLoadedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E62C8C))(this, argsJson);
	}
	template <typename T = void> T EmitOnOfferWallAdFailedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E62D8C))(this, argsJson);
	}
	template <typename T = void> T EmitOnOfferWallAdClosedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E62EB0))(this, argsJson);
	}
	template <typename T = void> T EmitOnOfferWallAdImpressionEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E62FB0))(this, argsJson);
	}
	template <typename T = void> T EmitOnOfferWallAdClickedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E630B0))(this, argsJson);
	}
	template <typename T = void> T EmitOnOfferWallAdRewardEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E631B0))(this, argsJson);
	}
	template <typename T = void> T EmitOnOfferWallAdAllLoadedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E632B0))(this, argsJson);
	}
	template <typename T = void> T EmitOneOfferWallLayerLoadFailedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E63408))(this, argsJson);
	}
	template <typename T = void> T EmitOneOfferWallLayerLoadedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E6352C))(this, argsJson);
	}
	template <typename T = void> T EmitOnOfferWallLoadAdStartEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E6362C))(this, argsJson);
	}
	template <typename T = void> T EmitOnOfferWallBiddingStartEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E6372C))(this, argsJson);
	}
	template <typename T = void> T EmitOnOfferWallBiddingEndEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E6382C))(this, argsJson);
	}
	template <typename T = void> T EmitOnNativeAdLoadedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E6392C))(this, argsJson);
	}
	template <typename T = void> T EmitOnNativeAdLoadFailedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E63A5C))(this, argsJson);
	}
	template <typename T = void> T EmitOnNativeAdClickedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E63B80))(this, argsJson);
	}
	template <typename T = void> T EmitOnNativeAdImpressionEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E63C80))(this, argsJson);
	}
	template <typename T = void> T EmitOnNativeAdClosedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E63D80))(this, argsJson);
	}
	template <typename T = void> T EmitOnNativeAdAllLoadedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E63E80))(this, argsJson);
	}
	template <typename T = void> T EmitOneNativeLayerLoadFailedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E63FD8))(this, argsJson);
	}
	template <typename T = void> T EmitOneNativeLayerLoadedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E640FC))(this, argsJson);
	}
	template <typename T = void> T EmitOnNativeLoadAdStartEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E641FC))(this, argsJson);
	}
	template <typename T = void> T EmitOnNativeBiddingStartEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E642FC))(this, argsJson);
	}
	template <typename T = void> T EmitOnNativeBiddingEndEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E643FC))(this, argsJson);
	}
	template <typename T = void> T EmitOnNativeBannerAdLoadedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E644FC))(this, argsJson);
	}
	template <typename T = void> T EmitOnNativeBannerAdLoadFailedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E6462C))(this, argsJson);
	}
	template <typename T = void> T EmitOnNativeBannerAdClickedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E64750))(this, argsJson);
	}
	template <typename T = void> T EmitOnNativeBannerAdImpressionEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E64850))(this, argsJson);
	}
	template <typename T = void> T EmitOnNativeBannerAdClosedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E64950))(this, argsJson);
	}
	template <typename T = void> T EmitOnNativeBannerAdAllLoadedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E64A50))(this, argsJson);
	}
	template <typename T = void> T EmitOneNativeBannerLayerLoadFailedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E64BA8))(this, argsJson);
	}
	template <typename T = void> T EmitOneNativeBannerLayerLoadedEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E64CCC))(this, argsJson);
	}
	template <typename T = void> T EmitOnNativeBannerLoadAdStartEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E64DCC))(this, argsJson);
	}
	template <typename T = void> T EmitOnNativeBannerBiddingStartEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E64ECC))(this, argsJson);
	}
	template <typename T = void> T EmitOnNativeBannerBiddingEndEvent(Il2CppString* argsJson) {
		return ((T (*)(TradPlusManager*, Il2CppString*))(Il2CppBase() + 0x1E64FCC))(this, argsJson);
	}

};

}
