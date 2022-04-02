#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class CaptureOverlayStateListenerHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "CaptureOverlayStateListenerHelper"));
	}


	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(CaptureOverlayStateListenerHelper*, uintptr_t))(Il2CppBase() + 0x283FD20))(this, selfPointer);
	}
	template <typename T = uintptr_t> T SetOnCaptureOverlayStateChangedCallback(void* callback) {
		return ((T (*)(CaptureOverlayStateListenerHelper*, void*))(Il2CppBase() + 0x283C690))(this, callback);
	}
	template <typename T = void> static T InternalOnCaptureOverlayStateChangedCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x283FAFC))(0, response, data);
	}
	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x283C5E8))(0);
	}

};

}
