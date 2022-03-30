#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class FetchResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "FetchResponse"));
	}


	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(FetchResponse*, uintptr_t))(Il2CppBase() + 0x2AE72F0))(this, selfPointer);
	}
	template <typename T = uintptr_t> T Leaderboard() {
		return ((T (*)(FetchResponse*))(Il2CppBase() + 0x2AE7378))(this);
	}
	template <typename T = uintptr_t> T GetStatus() {
		return ((T (*)(FetchResponse*))(Il2CppBase() + 0x2AE74CC))(this);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AE7538))(0, pointer);
	}

};

}
