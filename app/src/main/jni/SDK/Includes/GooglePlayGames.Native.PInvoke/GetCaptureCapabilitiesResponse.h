#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class GetCaptureCapabilitiesResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "GetCaptureCapabilitiesResponse"));
	}


	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(GetCaptureCapabilitiesResponse*, uintptr_t))(Il2CppBase() + 0x2AEA204))(this, selfPointer);
	}
	template <typename T = uintptr_t> T GetStatus() {
		return ((T (*)(GetCaptureCapabilitiesResponse*))(Il2CppBase() + 0x2AEA28C))(this);
	}
	template <typename T = bool> T RequestSucceeded() {
		return ((T (*)(GetCaptureCapabilitiesResponse*))(Il2CppBase() + 0x2AEA2F8))(this);
	}
	template <typename T = uintptr_t> T GetData() {
		return ((T (*)(GetCaptureCapabilitiesResponse*))(Il2CppBase() + 0x2AEA364))(this);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AEA4B8))(0, pointer);
	}

};

}
