#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTPlay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTPlay"));
	}

	template <typename T = uintptr_t> T& ktAppearDelegate() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ktDisappearDelegate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ktSoundStartDelegate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ktSoundStopDelegate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ktDispatchRewardsDelegate() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& ktActivityStatusChangedDelegate() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& ktAvailabilityChangedDelegate() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& ktDeepLinkDelegate() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& ktInterstitialNotificationDelegate() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ktplayObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T startWithAppKey(Il2CppString* appKey, Il2CppString* appSecret) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x21B07F0))(0, appKey, appSecret);
	}
	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x21B086C))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(KTPlay*))(Il2CppBase() + 0x21B0AAC))(this);
	}
	template <typename T = void> T startFromLanguage() {
		return ((T (*)(KTPlay*))(Il2CppBase() + 0x21B0B10))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(KTPlay*))(Il2CppBase() + 0x21B0C84))(this);
	}
	template <typename T = void> T OnApplicationPause(bool pauseStatus) {
		return ((T (*)(KTPlay*, bool))(Il2CppBase() + 0x21B0ECC))(this, pauseStatus);
	}
	template <typename T = void> static T SetViewDidAppearDelegate(uintptr_t delegateMethod) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x21B0FE4))(0, delegateMethod);
	}
	template <typename T = void> static T SetViewDidDisappearDelegate(uintptr_t delegateMethod) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x21B10D0))(0, delegateMethod);
	}
	template <typename T = void> static T SetSoundStartDelegate(uintptr_t delegateMethod) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x21B11BC))(0, delegateMethod);
	}
	template <typename T = void> static T SetSoundStopDelegate(uintptr_t delegateMethod) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x21B12A8))(0, delegateMethod);
	}
	template <typename T = void> static T SetDidDispatchRewardsDelegate(uintptr_t delegateMethod) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x21B1394))(0, delegateMethod);
	}
	template <typename T = void> static T SetActivityStatusChangedDelegate(uintptr_t delegateMethod) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x21B1480))(0, delegateMethod);
	}
	template <typename T = void> static T SetAvailabilityChangedDelegate(uintptr_t delegateMethod) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x21B156C))(0, delegateMethod);
	}
	template <typename T = void> static T SetDeepLinkDelegate(uintptr_t delegateMethod) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x21B1658))(0, delegateMethod);
	}
	template <typename T = void> static T Show() {
		return ((T (*)(void *))(Il2CppBase() + 0x21B1744))(0);
	}
	template <typename T = void> static T ShowInterstitialNotification(Il2CppString* identifier, uintptr_t delegateMethod) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x21B1830))(0, identifier, delegateMethod);
	}
	template <typename T = bool> static T HasInterstitialNotification(Il2CppString* identifier) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x21B1998))(0, identifier);
	}
	template <typename T = void> static T RequestInterstitialNotification(Il2CppString* identifier) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x21B1A9C))(0, identifier);
	}
	template <typename T = void> static T Dismiss() {
		return ((T (*)(void *))(Il2CppBase() + 0x21B1BA0))(0);
	}
	template <typename T = bool> static T IsEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x21B1C8C))(0);
	}
	template <typename T = bool> static T IsShowing() {
		return ((T (*)(void *))(Il2CppBase() + 0x21B1D78))(0);
	}
	template <typename T = void> static T ShareImageToKT(Il2CppString* imagePath, Il2CppString* title, Il2CppString* description) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x21B1E64))(0, imagePath, title, description);
	}
	template <typename T = void> static T ShareVideoToKT(Il2CppString* videoPath, Il2CppString* title, Il2CppString* description) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x21B1FB0))(0, videoPath, title, description);
	}
	template <typename T = void> static T SetNotificationEnabled(bool enabled) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x21B20FC))(0, enabled);
	}
	template <typename T = void> T SetKtplayInternalCallback() {
		return ((T (*)(KTPlay*))(Il2CppBase() + 0x21B0CF4))(this);
	}
	template <typename T = void> T SetViewDidAppearCallback(uintptr_t delegateMethod) {
		return ((T (*)(KTPlay*, uintptr_t))(Il2CppBase() + 0x21B1058))(this, delegateMethod);
	}
	template <typename T = void> T SetViewDidDisappearCallback(uintptr_t delegateMethod) {
		return ((T (*)(KTPlay*, uintptr_t))(Il2CppBase() + 0x21B1144))(this, delegateMethod);
	}
	template <typename T = void> T SetOnSoundStartCallback(uintptr_t delegateMethod) {
		return ((T (*)(KTPlay*, uintptr_t))(Il2CppBase() + 0x21B1230))(this, delegateMethod);
	}
	template <typename T = void> T SetOnSoundStopCallback(uintptr_t delegateMethod) {
		return ((T (*)(KTPlay*, uintptr_t))(Il2CppBase() + 0x21B131C))(this, delegateMethod);
	}
	template <typename T = void> T SetDidDispatchRewardsCallback(uintptr_t delegateMethod) {
		return ((T (*)(KTPlay*, uintptr_t))(Il2CppBase() + 0x21B1408))(this, delegateMethod);
	}
	template <typename T = void> T SetActivityStatusChangedCallback(uintptr_t delegateMethod) {
		return ((T (*)(KTPlay*, uintptr_t))(Il2CppBase() + 0x21B14F4))(this, delegateMethod);
	}
	template <typename T = void> T SetAvailabilityChangedCallback(uintptr_t delegateMethod) {
		return ((T (*)(KTPlay*, uintptr_t))(Il2CppBase() + 0x21B15E0))(this, delegateMethod);
	}
	template <typename T = void> T SetDeepLinkCallback(uintptr_t delegateMethod) {
		return ((T (*)(KTPlay*, uintptr_t))(Il2CppBase() + 0x21B16CC))(this, delegateMethod);
	}
	template <typename T = void> T ShowInterstitialNotificationCallback(Il2CppString* identifier, uintptr_t delegateMethod) {
		return ((T (*)(KTPlay*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x21B18BC))(this, identifier, delegateMethod);
	}
	template <typename T = bool> static T SetLanguage(Il2CppString* preferredLanguage, Il2CppString* alternateLanguage) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x21B28B8))(0, preferredLanguage, alternateLanguage);
	}
	template <typename T = void> static T OpenDeepLink(Il2CppString* deepLinkId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x21B29EC))(0, deepLinkId);
	}
	template <typename T = void> T OnInternalKTPlay(Il2CppString* param) {
		return ((T (*)(KTPlay*, Il2CppString*))(Il2CppBase() + 0x21B2AF0))(this, param);
	}

};

}
