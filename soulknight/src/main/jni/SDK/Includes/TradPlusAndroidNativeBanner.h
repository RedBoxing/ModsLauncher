#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TradPlusAndroidNativeBanner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TradPlusAndroidNativeBanner"));
	}

	template <typename T = uintptr_t> T& _nativebannerPlugin() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T SetNativeBannerSize(int32_t width, int32_t height) {
		return ((T (*)(TradPlusAndroidNativeBanner*, int32_t, int32_t))(Il2CppBase() + 0x1E4E3EC))(this, width, height);
	}
	template <typename T = void> T SetNativeBannerCustomParams(Il2CppDictionary<Il2CppString*, Il2CppString*>* map) {
		return ((T (*)(TradPlusAndroidNativeBanner*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1E4E6D0))(this, map);
	}
	template <typename T = void> T CreateNativeBanner(uintptr_t position, Il2CppString* adSceneId, Il2CppString* LayoutIdByName) {
		return ((T (*)(TradPlusAndroidNativeBanner*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1E4E950))(this, position, adSceneId, LayoutIdByName);
	}
	template <typename T = void> T ReloadNativeBannerAd() {
		return ((T (*)(TradPlusAndroidNativeBanner*))(Il2CppBase() + 0x1E4EC64))(this);
	}
	template <typename T = void> T HideNativeBanner(bool shouldShow) {
		return ((T (*)(TradPlusAndroidNativeBanner*, bool))(Il2CppBase() + 0x1E4EE50))(this, shouldShow);
	}
	template <typename T = void> T DestroyNativeBanner() {
		return ((T (*)(TradPlusAndroidNativeBanner*))(Il2CppBase() + 0x1E4F0C0))(this);
	}
	template <typename T = void> T NativeBannerEntryAdScenario(Il2CppString* adSceneId) {
		return ((T (*)(TradPlusAndroidNativeBanner*, Il2CppString*))(Il2CppBase() + 0x1E4F2AC))(this, adSceneId);
	}

};

}
