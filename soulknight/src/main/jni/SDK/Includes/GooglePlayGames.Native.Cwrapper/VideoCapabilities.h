#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class VideoCapabilities
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "VideoCapabilities"));
	}


	template <typename T = bool> static T VideoCapabilities_IsCameraSupported(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35890EC))(0, self);
	}
	template <typename T = bool> static T VideoCapabilities_IsMicSupported(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3589190))(0, self);
	}
	template <typename T = bool> static T VideoCapabilities_IsWriteStorageSupported(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3589234))(0, self);
	}
	template <typename T = bool> static T VideoCapabilities_SupportsCaptureMode(uintptr_t self, uintptr_t capture_mode) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x35892D8))(0, self, capture_mode);
	}
	template <typename T = bool> static T VideoCapabilities_SupportsQualityLevel(uintptr_t self, uintptr_t quality_level) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x358938C))(0, self, quality_level);
	}
	template <typename T = void> static T VideoCapabilities_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3589440))(0, self);
	}
	template <typename T = bool> static T VideoCapabilities_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35894DC))(0, self);
	}

};

}
