#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativeVideoCaptureState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativeVideoCaptureState"));
	}


	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativeVideoCaptureState*, uintptr_t))(Il2CppBase() + 0x2AF8038))(this, selfPointer);
	}
	template <typename T = bool> T IsCapturing() {
		return ((T (*)(NativeVideoCaptureState*))(Il2CppBase() + 0x2AF80BC))(this);
	}
	template <typename T = uintptr_t> T CaptureMode() {
		return ((T (*)(NativeVideoCaptureState*))(Il2CppBase() + 0x2AF8128))(this);
	}
	template <typename T = uintptr_t> T QualityLevel() {
		return ((T (*)(NativeVideoCaptureState*))(Il2CppBase() + 0x2AF8194))(this);
	}
	template <typename T = bool> T IsOverlayVisible() {
		return ((T (*)(NativeVideoCaptureState*))(Il2CppBase() + 0x2AF8200))(this);
	}
	template <typename T = bool> T IsPaused() {
		return ((T (*)(NativeVideoCaptureState*))(Il2CppBase() + 0x2AF826C))(this);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AEA70C))(0, pointer);
	}

};

}
