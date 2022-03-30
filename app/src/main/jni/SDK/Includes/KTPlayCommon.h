#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTPlayCommon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTPlayCommon"));
	}


	template <typename T = void> static T InitKTPlay() {
		return ((T (*)(void *))(Il2CppBase() + 0x21B0BEC))(0);
	}
	template <typename T = void> static T startWithAppKey(Il2CppString* appKey, Il2CppString* appSecret) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x21B09BC))(0, appKey, appSecret);
	}
	template <typename T = void> static T HanldeApplicationPause(bool pauseStatus) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x21B0F40))(0, pauseStatus);
	}
	template <typename T = void> static T SetViewDidAppearCallback(uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B2210))(0, obj, callbackMethod);
	}
	template <typename T = void> static T SetViewDidDisappearCallback(uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B22CC))(0, obj, callbackMethod);
	}
	template <typename T = void> static T SetOnSoundStartCallback(uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B2388))(0, obj, callbackMethod);
	}
	template <typename T = void> static T SetOnSoundStopCallback(uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B2444))(0, obj, callbackMethod);
	}
	template <typename T = void> static T SetDidDispatchRewardsCallback(uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B2500))(0, obj, callbackMethod);
	}
	template <typename T = void> static T SetActivityStatusChangedCallback(uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B25BC))(0, obj, callbackMethod);
	}
	template <typename T = void> static T SetAvailabilityChangedCallback(uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B2678))(0, obj, callbackMethod);
	}
	template <typename T = void> static T SetDeepLinkCallback(uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B2734))(0, obj, callbackMethod);
	}
	template <typename T = void> static T Show() {
		return ((T (*)(void *))(Il2CppBase() + 0x21B1798))(0);
	}
	template <typename T = void> static T ShowInterstitialNotification(uintptr_t obj, uintptr_t callbackMethod, Il2CppString* identifier) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x21B27F0))(0, obj, callbackMethod, identifier);
	}
	template <typename T = bool> static T HasInterstitialNotification(Il2CppString* identifier) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x21B19F8))(0, identifier);
	}
	template <typename T = void> static T RequestInterstitialNotification(Il2CppString* identifier) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x21B1AFC))(0, identifier);
	}
	template <typename T = void> static T Dismiss() {
		return ((T (*)(void *))(Il2CppBase() + 0x21B1BF4))(0);
	}
	template <typename T = bool> static T IsEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x21B1CE0))(0);
	}
	template <typename T = bool> static T IsShowing() {
		return ((T (*)(void *))(Il2CppBase() + 0x21B1DCC))(0);
	}
	template <typename T = void> static T ShareImageToKT(Il2CppString* imagePath, Il2CppString* title, Il2CppString* description) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x21B1EE8))(0, imagePath, title, description);
	}
	template <typename T = void> static T ShareVideoToKT(Il2CppString* videoPath, Il2CppString* title, Il2CppString* description) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x21B2034))(0, videoPath, title, description);
	}
	template <typename T = void> static T SetNotificationEnabled(bool enabled) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x21B215C))(0, enabled);
	}
	template <typename T = bool> static T SetLanguage(Il2CppString* preferredLanguage, Il2CppString* alternateLanguage) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x21B2930))(0, preferredLanguage, alternateLanguage);
	}
	template <typename T = void> static T OpenDeepLink(Il2CppString* deepLinkId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x21B2A4C))(0, deepLinkId);
	}

};

}
