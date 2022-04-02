#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TradPlusAndroidBanner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TradPlusAndroidBanner"));
	}

	template <typename T = uintptr_t> T& _bannerPlugin() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CreateBanner(uintptr_t position) {
		return ((T (*)(TradPlusAndroidBanner*, uintptr_t))(Il2CppBase() + 0x1E4BF24))(this, position);
	}
	template <typename T = void> T CreateBanner_1(uintptr_t position, Il2CppString* adSceneId) {
		return ((T (*)(TradPlusAndroidBanner*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1E4C274))(this, position, adSceneId);
	}
	template <typename T = void> T ReloadBannerAd() {
		return ((T (*)(TradPlusAndroidBanner*))(Il2CppBase() + 0x1E4C538))(this);
	}
	template <typename T = void> T ShowBanner(bool shouldShow) {
		return ((T (*)(TradPlusAndroidBanner*, bool))(Il2CppBase() + 0x1E4C724))(this, shouldShow);
	}
	template <typename T = void> T DestroyBanner() {
		return ((T (*)(TradPlusAndroidBanner*))(Il2CppBase() + 0x1E4C994))(this);
	}
	template <typename T = void> T ShowBannerConfirmUWSAd() {
		return ((T (*)(TradPlusAndroidBanner*))(Il2CppBase() + 0x1E4CB74))(this);
	}
	template <typename T = void> T BannerEntryAdScenario(Il2CppString* adSceneId) {
		return ((T (*)(TradPlusAndroidBanner*, Il2CppString*))(Il2CppBase() + 0x1E4CD60))(this, adSceneId);
	}

};

}
