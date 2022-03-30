#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TradPlusAndroidInterstitial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TradPlusAndroidInterstitial"));
	}

	template <typename T = uintptr_t> T& _interstitialPlugin() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T RequestInterstitialAd(bool autoReload) {
		return ((T (*)(TradPlusAndroidInterstitial*, bool))(Il2CppBase() + 0x1E4F564))(this, autoReload);
	}
	template <typename T = void> T ReloadInterstitialAd() {
		return ((T (*)(TradPlusAndroidInterstitial*))(Il2CppBase() + 0x1E4F804))(this);
	}
	template <typename T = void> T ShowInterstitialAd() {
		return ((T (*)(TradPlusAndroidInterstitial*))(Il2CppBase() + 0x1E4F9E4))(this);
	}
	template <typename T = void> T ShowInterstitialAd_1(Il2CppString* adSceneId) {
		return ((T (*)(TradPlusAndroidInterstitial*, Il2CppString*))(Il2CppBase() + 0x1E4FBD0))(this, adSceneId);
	}
	template <typename T = void> T ShowInterstitialConfirmUWSAd() {
		return ((T (*)(TradPlusAndroidInterstitial*))(Il2CppBase() + 0x1E4FE14))(this);
	}
	template <typename T = void> T InterstitialEntryAdScenario() {
		return ((T (*)(TradPlusAndroidInterstitial*))(Il2CppBase() + 0x1E4FFF4))(this);
	}
	template <typename T = void> T InterstitialEntryAdScenario_1(Il2CppString* adSceneId) {
		return ((T (*)(TradPlusAndroidInterstitial*, Il2CppString*))(Il2CppBase() + 0x1E501E0))(this, adSceneId);
	}
	template <typename T = bool> T get_IsInterstitialReady() {
		return ((T (*)(TradPlusAndroidInterstitial*))(Il2CppBase() + 0x1E5042C))(this);
	}

};

}
