#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativeLeaderboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativeLeaderboard"));
	}


	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativeLeaderboard*, uintptr_t))(Il2CppBase() + 0x2AF1F64))(this, selfPointer);
	}
	template <typename T = Il2CppString*> T Title() {
		return ((T (*)(NativeLeaderboard*))(Il2CppBase() + 0x2AEC038))(this);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AE73E8))(0, pointer);
	}
	template <typename T = uintptr_t> T Titleb__2_0(Il2CppArray<uintptr_t>* out_string, uintptr_t out_size) {
		return ((T (*)(NativeLeaderboard*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF1FE8))(this, out_string, out_size);
	}

};

}
