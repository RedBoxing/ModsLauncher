#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTPlayAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTPlayAndroid"));
	}

	template <typename T = uintptr_t> static T& joKTPlayAdapter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x21B5228))(0);
	}
	template <typename T = void> static T SetViewDidAppearCallback(uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B5310))(0, obj, callbackMethod);
	}
	template <typename T = void> static T SetViewDidDisappearCallback(uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B5580))(0, obj, callbackMethod);
	}
	template <typename T = void> static T SetDidDispatchRewardsCallback(uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B57F0))(0, obj, callbackMethod);
	}
	template <typename T = void> static T SetActivityStatusChangedCallback(uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B5A60))(0, obj, callbackMethod);
	}
	template <typename T = void> static T SetAvailabilityChangedCallback(uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B5CD0))(0, obj, callbackMethod);
	}
	template <typename T = void> static T SetDeepLinkCallback(uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B5F40))(0, obj, callbackMethod);
	}
	template <typename T = void> static T startWithAppKey(Il2CppString* appKey, Il2CppString* appSecret) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x21B61B0))(0, appKey, appSecret);
	}
	template <typename T = void> static T HanldeApplicationPause(bool pauseStatus) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x21B65EC))(0, pauseStatus);
	}
	template <typename T = void> static T Show() {
		return ((T (*)(void *))(Il2CppBase() + 0x21B6790))(0);
	}
	template <typename T = void> static T ShowRedemptionView() {
		return ((T (*)(void *))(Il2CppBase() + 0x21B686C))(0);
	}
	template <typename T = void> static T ShowInterstitialNotification() {
		return ((T (*)(void *))(Il2CppBase() + 0x21B6948))(0);
	}
	template <typename T = void> static T Dismiss() {
		return ((T (*)(void *))(Il2CppBase() + 0x21B6A24))(0);
	}
	template <typename T = bool> static T IsEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x21B6B00))(0);
	}
	template <typename T = bool> static T IsShowing() {
		return ((T (*)(void *))(Il2CppBase() + 0x21B6BE4))(0);
	}
	template <typename T = void> static T ShareImageToKT(Il2CppString* imagePath, Il2CppString* description) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x21B6CC8))(0, imagePath, description);
	}
	template <typename T = void> static T ShareImageToKT_1(Il2CppString* imagePath, Il2CppString* title, Il2CppString* description) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x21B6E58))(0, imagePath, title, description);
	}
	template <typename T = void> static T ShareVideoToKT(Il2CppString* videoPath, Il2CppString* description) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x21B7044))(0, videoPath, description);
	}
	template <typename T = void> static T ShareVideoToKT_1(Il2CppString* videoPath, Il2CppString* title, Il2CppString* description) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x21B71D4))(0, videoPath, title, description);
	}
	template <typename T = void> static T SetNotificationEnabled(bool isEnabled) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x21B73C0))(0, isEnabled);
	}
	template <typename T = void> static T showInterstitialNotification(uintptr_t obj, uintptr_t callbackMethod, Il2CppString* identifier) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x21B7528))(0, obj, callbackMethod, identifier);
	}
	template <typename T = void> static T requestInterstitialNotification(Il2CppString* identifier) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x21B77F8))(0, identifier);
	}
	template <typename T = bool> static T hasInterstitialNotification(Il2CppString* identifier) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x21B7938))(0, identifier);
	}
	template <typename T = void> static T SetOnSoundStartCallback(uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B7A80))(0, obj, callbackMethod);
	}
	template <typename T = void> static T SetOnSoundStopCallback(uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B7CF0))(0, obj, callbackMethod);
	}
	template <typename T = bool> static T SetLanguage(Il2CppString* preferredLanguage, Il2CppString* alternateLanguage) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x21B7F60))(0, preferredLanguage, alternateLanguage);
	}
	template <typename T = void> static T OpenDeepLink(Il2CppString* deepLinkId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x21B80F8))(0, deepLinkId);
	}

};

}
