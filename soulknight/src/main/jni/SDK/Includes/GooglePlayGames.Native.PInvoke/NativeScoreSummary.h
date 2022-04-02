#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativeScoreSummary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativeScoreSummary"));
	}


	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativeScoreSummary*, uintptr_t))(Il2CppBase() + 0x2AF4C84))(this, selfPointer);
	}
	template <typename T = uint64_t> T ApproximateResults() {
		return ((T (*)(NativeScoreSummary*))(Il2CppBase() + 0x2AEC3B4))(this);
	}
	template <typename T = uintptr_t> T LocalUserScore() {
		return ((T (*)(NativeScoreSummary*))(Il2CppBase() + 0x2AEC420))(this);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AE7B98))(0, pointer);
	}

};

}
