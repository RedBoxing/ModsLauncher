#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TradPlusAndroidNative
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TradPlusAndroidNative"));
	}

	template <typename T = uintptr_t> T& _nativePlugin() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T SetAdSize(int32_t width, int32_t height) {
		return ((T (*)(TradPlusAndroidNative*, int32_t, int32_t))(Il2CppBase() + 0x1E4CFC4))(this, width, height);
	}
	template <typename T = void> T SetNativeCustomParams(Il2CppDictionary<Il2CppString*, Il2CppString*>* map) {
		return ((T (*)(TradPlusAndroidNative*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1E4D2A8))(this, map);
	}
	template <typename T = void> T CreateNative(uintptr_t position, Il2CppString* adSceneId) {
		return ((T (*)(TradPlusAndroidNative*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1E4D51C))(this, position, adSceneId);
	}
	template <typename T = void> T CreateNative_1(int32_t x, int32_t y, Il2CppString* adSceneId) {
		return ((T (*)(TradPlusAndroidNative*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x1E4D80C))(this, x, y, adSceneId);
	}
	template <typename T = void> T ReloadNativeAd() {
		return ((T (*)(TradPlusAndroidNative*))(Il2CppBase() + 0x1E4DB40))(this);
	}
	template <typename T = void> T ShowNative(bool shouldShow) {
		return ((T (*)(TradPlusAndroidNative*, bool))(Il2CppBase() + 0x1E4DF0C))(this, shouldShow);
	}
	template <typename T = void> T DestroyNative() {
		return ((T (*)(TradPlusAndroidNative*))(Il2CppBase() + 0x1E4DD20))(this);
	}
	template <typename T = void> T NativeEntryAdScenario(Il2CppString* adSceneId) {
		return ((T (*)(TradPlusAndroidNative*, Il2CppString*))(Il2CppBase() + 0x1E4E188))(this, adSceneId);
	}

};

}
