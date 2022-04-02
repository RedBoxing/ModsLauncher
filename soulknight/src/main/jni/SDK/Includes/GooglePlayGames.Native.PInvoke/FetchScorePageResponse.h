#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class FetchScorePageResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "FetchScorePageResponse"));
	}


	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(FetchScorePageResponse*, uintptr_t))(Il2CppBase() + 0x2AE7694))(this, selfPointer);
	}
	template <typename T = uintptr_t> T GetStatus() {
		return ((T (*)(FetchScorePageResponse*))(Il2CppBase() + 0x2AE771C))(this);
	}
	template <typename T = uintptr_t> T GetScorePage() {
		return ((T (*)(FetchScorePageResponse*))(Il2CppBase() + 0x2AE7788))(this);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AE78DC))(0, pointer);
	}

};

}
