#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TradPlusAndroidOfferWall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TradPlusAndroidOfferWall"));
	}

	template <typename T = uintptr_t> T& _OfferWallPlugin() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T RequestOfferWall() {
		return ((T (*)(TradPlusAndroidOfferWall*))(Il2CppBase() + 0x1E518FC))(this);
	}
	template <typename T = void> T ShowOfferWall() {
		return ((T (*)(TradPlusAndroidOfferWall*))(Il2CppBase() + 0x1E51ADC))(this);
	}
	template <typename T = void> T ShowOfferWall_1(Il2CppString* adSceneId) {
		return ((T (*)(TradPlusAndroidOfferWall*, Il2CppString*))(Il2CppBase() + 0x1E51CC8))(this, adSceneId);
	}
	template <typename T = void> T ShowOfferWallConfirmUWSAd() {
		return ((T (*)(TradPlusAndroidOfferWall*))(Il2CppBase() + 0x1E51F0C))(this);
	}
	template <typename T = void> T OfferWallEntryAdScenario() {
		return ((T (*)(TradPlusAndroidOfferWall*))(Il2CppBase() + 0x1E520EC))(this);
	}
	template <typename T = void> T OfferWallEntryAdScenario_1(Il2CppString* adSceneId) {
		return ((T (*)(TradPlusAndroidOfferWall*, Il2CppString*))(Il2CppBase() + 0x1E522D8))(this, adSceneId);
	}
	template <typename T = bool> T get_IsOfferWallReady() {
		return ((T (*)(TradPlusAndroidOfferWall*))(Il2CppBase() + 0x1E52524))(this);
	}
	template <typename T = bool> T get_IsOfferWallAllReady() {
		return ((T (*)(TradPlusAndroidOfferWall*))(Il2CppBase() + 0x1E52714))(this);
	}

};

}
