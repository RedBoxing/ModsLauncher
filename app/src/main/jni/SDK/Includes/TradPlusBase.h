#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TradPlusBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TradPlusBase"));
	}

	template <typename T = Il2CppString*> static T& tradplusSDKVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& _pluginName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> static T get_PluginName() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E527E0))(0);
	}
	template <typename T = void> static T ValidateAdUnitForSdkInit(Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E49168))(0, appId);
	}
	template <typename T = void> static T ReportAdUnitNotFound(Il2CppString* adUnitId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4C068))(0, adUnitId);
	}
	template <typename T = uintptr_t> static T UrlFromString(Il2CppString* url) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E528D0))(0, url);
	}
	template <typename T = void> static T InitManager() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E48E34))(0);
	}

};

}
