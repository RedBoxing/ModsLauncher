#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class CaptureOverlayStateListenerHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "CaptureOverlayStateListenerHelper"));
	}


	template <typename T = void> static T CaptureOverlayStateListenerHelper_SetOnCaptureOverlayStateChangedCallback(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D0A48))(0, self, callback, callback_arg);
	}
	template <typename T = uintptr_t> static T CaptureOverlayStateListenerHelper_Construct() {
		return ((T (*)(void *))(Il2CppBase() + 0x35D0B04))(0);
	}
	template <typename T = void> static T CaptureOverlayStateListenerHelper_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D0B90))(0, self);
	}

};

}
