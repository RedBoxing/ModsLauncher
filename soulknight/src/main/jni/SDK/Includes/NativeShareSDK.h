#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NativeShareSDK
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NativeShareSDK"));
	}

	template <typename T = Il2CppString*> T& pathName() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(NativeShareSDK*))(Il2CppBase() + 0x43843B8))(this);
	}
	template <typename T = void> T ShareScreenshotWithTexture2D(uintptr_t texture, Il2CppString* text) {
		return ((T (*)(NativeShareSDK*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43842CC))(this, texture, text);
	}
	template <typename T = uintptr_t> T CaptureScreen() {
		return ((T (*)(NativeShareSDK*))(Il2CppBase() + 0x4384494))(this);
	}
	template <typename T = void> T Share(Il2CppString* shareText, Il2CppString* imagePath, Il2CppString* url, Il2CppString* subject) {
		return ((T (*)(NativeShareSDK*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4384574))(this, shareText, imagePath, url, subject);
	}

};

}
