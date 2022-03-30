#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace NewDynamicConfig {

class PrivatePrivacyConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "NewDynamicConfig", "PrivatePrivacyConfig"));
	}

	template <typename T = Il2CppString*> T& showTag() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& needShow() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& content() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& contentfontSize() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& topValue() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& linkDataList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& UserAgreeText() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& PrivacyNoticeText() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& ChildPrivacyText() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = uintptr_t> static T get_config() {
		return ((T (*)(void *))(Il2CppBase() + 0x451FBC0))(0);
	}
	template <typename T = bool> static T TryGetUrl(Il2CppString* key, uintptr_t* url) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x451FE78))(0, key, url);
	}

};

}
