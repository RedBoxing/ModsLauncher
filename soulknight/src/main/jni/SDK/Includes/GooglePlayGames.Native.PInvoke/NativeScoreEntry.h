#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativeScoreEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativeScoreEntry"));
	}

	template <typename T = uint64_t> static T& MinusOne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativeScoreEntry*, uintptr_t))(Il2CppBase() + 0x2AF43DC))(this, selfPointer);
	}
	template <typename T = uint64_t> T GetLastModifiedTime() {
		return ((T (*)(NativeScoreEntry*))(Il2CppBase() + 0x2AF4460))(this);
	}
	template <typename T = Il2CppString*> T GetPlayerId() {
		return ((T (*)(NativeScoreEntry*))(Il2CppBase() + 0x2AF44CC))(this);
	}
	template <typename T = uintptr_t> T GetScore() {
		return ((T (*)(NativeScoreEntry*))(Il2CppBase() + 0x2AF459C))(this);
	}
	template <typename T = uintptr_t> T AsScore(Il2CppString* leaderboardId) {
		return ((T (*)(NativeScoreEntry*, Il2CppString*))(Il2CppBase() + 0x2AED33C))(this, leaderboardId);
	}
	template <typename T = uintptr_t> T GetPlayerIdb__4_0(Il2CppArray<uintptr_t>* out_string, uintptr_t out_size) {
		return ((T (*)(NativeScoreEntry*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF4658))(this, out_string, out_size);
	}

};

}
