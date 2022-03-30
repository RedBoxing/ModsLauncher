#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativeScore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativeScore"));
	}

	template <typename T = uint64_t> static T& MinusOne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativeScore*, uintptr_t))(Il2CppBase() + 0x2AF3FBC))(this, selfPointer);
	}
	template <typename T = uint64_t> T GetDate() {
		return ((T (*)(NativeScore*))(Il2CppBase() + 0x2AF4044))(this);
	}
	template <typename T = Il2CppString*> T GetMetadata() {
		return ((T (*)(NativeScore*))(Il2CppBase() + 0x2AF40A4))(this);
	}
	template <typename T = uint64_t> T GetRank() {
		return ((T (*)(NativeScore*))(Il2CppBase() + 0x2AF4174))(this);
	}
	template <typename T = uint64_t> T GetValue() {
		return ((T (*)(NativeScore*))(Il2CppBase() + 0x2AF41E0))(this);
	}
	template <typename T = uintptr_t> T AsScore(Il2CppString* leaderboardId, Il2CppString* selfPlayerId) {
		return ((T (*)(NativeScore*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2AEC490))(this, leaderboardId, selfPlayerId);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AF424C))(0, pointer);
	}
	template <typename T = uintptr_t> T GetMetadatab__4_0(Il2CppArray<uintptr_t>* out_string, uintptr_t out_size) {
		return ((T (*)(NativeScore*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF4330))(this, out_string, out_size);
	}

};

}
