#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TradPlusAndroidRewardedVideo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TradPlusAndroidRewardedVideo"));
	}

	template <typename T = uintptr_t> T& _rewardedVideoPlugin() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T SetCustomParams(Il2CppDictionary<Il2CppString*, Il2CppString*>* map) {
		return ((T (*)(TradPlusAndroidRewardedVideo*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1E50620))(this, map);
	}
	template <typename T = void> T RequestRewardedVideo(bool autoReload) {
		return ((T (*)(TradPlusAndroidRewardedVideo*, bool))(Il2CppBase() + 0x1E50880))(this, autoReload);
	}
	template <typename T = void> T ReloadRewardedVideoAd() {
		return ((T (*)(TradPlusAndroidRewardedVideo*))(Il2CppBase() + 0x1E50AEC))(this);
	}
	template <typename T = void> T ShowRewardedVideo() {
		return ((T (*)(TradPlusAndroidRewardedVideo*))(Il2CppBase() + 0x1E50CCC))(this);
	}
	template <typename T = void> T ShowRewardedVideo_1(Il2CppString* adSceneId) {
		return ((T (*)(TradPlusAndroidRewardedVideo*, Il2CppString*))(Il2CppBase() + 0x1E50EB8))(this, adSceneId);
	}
	template <typename T = void> T ShowRewardedVideoConfirmUWSAd() {
		return ((T (*)(TradPlusAndroidRewardedVideo*))(Il2CppBase() + 0x1E510FC))(this);
	}
	template <typename T = void> T RewardedVideoEntryAdScenario() {
		return ((T (*)(TradPlusAndroidRewardedVideo*))(Il2CppBase() + 0x1E512DC))(this);
	}
	template <typename T = void> T RewardedVideoEntryAdScenario_1(Il2CppString* adSceneId) {
		return ((T (*)(TradPlusAndroidRewardedVideo*, Il2CppString*))(Il2CppBase() + 0x1E514C8))(this, adSceneId);
	}
	template <typename T = bool> T get_IsRewardedVideoReady() {
		return ((T (*)(TradPlusAndroidRewardedVideo*))(Il2CppBase() + 0x1E51714))(this);
	}

};

}
