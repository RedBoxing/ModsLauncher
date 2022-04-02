#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Video {

class VideoCapabilities
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Video", "VideoCapabilities"));
	}

	template <typename T = bool> T& mIsCameraSupported() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mIsMicSupported() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& mIsWriteStorageSupported() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mCaptureModesSupported() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mQualityLevelsSupported() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T get_IsCameraSupported() {
		return ((T (*)(VideoCapabilities*))(Il2CppBase() + 0x35C7748))(this);
	}
	template <typename T = bool> T get_IsMicSupported() {
		return ((T (*)(VideoCapabilities*))(Il2CppBase() + 0x35C77A8))(this);
	}
	template <typename T = bool> T get_IsWriteStorageSupported() {
		return ((T (*)(VideoCapabilities*))(Il2CppBase() + 0x35C7808))(this);
	}
	template <typename T = bool> T SupportsCaptureMode(uintptr_t captureMode) {
		return ((T (*)(VideoCapabilities*, uintptr_t))(Il2CppBase() + 0x35C7868))(this, captureMode);
	}
	template <typename T = bool> T SupportsQualityLevel(uintptr_t qualityLevel) {
		return ((T (*)(VideoCapabilities*, uintptr_t))(Il2CppBase() + 0x35C7980))(this, qualityLevel);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(VideoCapabilities*))(Il2CppBase() + 0x35C7A98))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(VideoCapabilities*))(Il2CppBase() + 0x35C7EE0))(this);
	}

};

}
