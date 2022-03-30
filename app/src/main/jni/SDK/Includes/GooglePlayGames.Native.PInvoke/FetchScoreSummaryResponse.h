#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class FetchScoreSummaryResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "FetchScoreSummaryResponse"));
	}


	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(FetchScoreSummaryResponse*, uintptr_t))(Il2CppBase() + 0x2AE7A38))(this, selfPointer);
	}
	template <typename T = uintptr_t> T GetStatus() {
		return ((T (*)(FetchScoreSummaryResponse*))(Il2CppBase() + 0x2AE7ABC))(this);
	}
	template <typename T = uintptr_t> T GetScoreSummary() {
		return ((T (*)(FetchScoreSummaryResponse*))(Il2CppBase() + 0x2AE7B28))(this);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AE7C7C))(0, pointer);
	}

};

}
