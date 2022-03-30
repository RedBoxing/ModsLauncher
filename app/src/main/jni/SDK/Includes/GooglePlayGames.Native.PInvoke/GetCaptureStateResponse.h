#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class GetCaptureStateResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "GetCaptureStateResponse"));
	}


	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(GetCaptureStateResponse*, uintptr_t))(Il2CppBase() + 0x2AEA614))(this, selfPointer);
	}
	template <typename T = uintptr_t> T GetData() {
		return ((T (*)(GetCaptureStateResponse*))(Il2CppBase() + 0x2AEA69C))(this);
	}
	template <typename T = uintptr_t> T GetStatus() {
		return ((T (*)(GetCaptureStateResponse*))(Il2CppBase() + 0x2AEA7F0))(this);
	}
	template <typename T = bool> T RequestSucceeded() {
		return ((T (*)(GetCaptureStateResponse*))(Il2CppBase() + 0x2AEA85C))(this);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AEA8C8))(0, pointer);
	}

};

}
