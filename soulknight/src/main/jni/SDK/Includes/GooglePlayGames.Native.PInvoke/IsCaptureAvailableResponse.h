#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class IsCaptureAvailableResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "IsCaptureAvailableResponse"));
	}


	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(IsCaptureAvailableResponse*, uintptr_t))(Il2CppBase() + 0x2AEAC88))(this, selfPointer);
	}
	template <typename T = uintptr_t> T GetStatus() {
		return ((T (*)(IsCaptureAvailableResponse*))(Il2CppBase() + 0x2AEAD0C))(this);
	}
	template <typename T = bool> T RequestSucceeded() {
		return ((T (*)(IsCaptureAvailableResponse*))(Il2CppBase() + 0x2AEAD78))(this);
	}
	template <typename T = bool> T IsCaptureAvailable() {
		return ((T (*)(IsCaptureAvailableResponse*))(Il2CppBase() + 0x2AEADE4))(this);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AEAE50))(0, pointer);
	}

};

}
