#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativeVideoCapabilities
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativeVideoCapabilities"));
	}


	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativeVideoCapabilities*, uintptr_t))(Il2CppBase() + 0x2AF7CF0))(this, selfPointer);
	}
	template <typename T = bool> T IsCameraSupported() {
		return ((T (*)(NativeVideoCapabilities*))(Il2CppBase() + 0x2AF7D74))(this);
	}
	template <typename T = bool> T IsMicSupported() {
		return ((T (*)(NativeVideoCapabilities*))(Il2CppBase() + 0x2AF7DE0))(this);
	}
	template <typename T = bool> T IsWriteStorageSupported() {
		return ((T (*)(NativeVideoCapabilities*))(Il2CppBase() + 0x2AF7E4C))(this);
	}
	template <typename T = bool> T SupportsCaptureMode(uintptr_t captureMode) {
		return ((T (*)(NativeVideoCapabilities*, uintptr_t))(Il2CppBase() + 0x2AF7EB8))(this, captureMode);
	}
	template <typename T = bool> T SupportsQualityLevel(uintptr_t qualityLevel) {
		return ((T (*)(NativeVideoCapabilities*, uintptr_t))(Il2CppBase() + 0x2AF7F3C))(this, qualityLevel);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AEA3D4))(0, pointer);
	}

};

}
