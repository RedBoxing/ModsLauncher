#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class TurnBasedMatchConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "TurnBasedMatchConfig"));
	}


	template <typename T = Il2CppString*> T PlayerIdAtIndex(uintptr_t index) {
		return ((T (*)(TurnBasedMatchConfig*, uintptr_t))(Il2CppBase() + 0x460CD34))(this, index);
	}
	template <typename T = void*> T PlayerIdsToInvite() {
		return ((T (*)(TurnBasedMatchConfig*))(Il2CppBase() + 0x460CE68))(this);
	}
	template <typename T = uint32_t> T Variant() {
		return ((T (*)(TurnBasedMatchConfig*))(Il2CppBase() + 0x460CF78))(this);
	}
	template <typename T = int64_t> T ExclusiveBitMask() {
		return ((T (*)(TurnBasedMatchConfig*))(Il2CppBase() + 0x460CFE4))(this);
	}
	template <typename T = uint32_t> T MinimumAutomatchingPlayers() {
		return ((T (*)(TurnBasedMatchConfig*))(Il2CppBase() + 0x460D050))(this);
	}
	template <typename T = uint32_t> T MaximumAutomatchingPlayers() {
		return ((T (*)(TurnBasedMatchConfig*))(Il2CppBase() + 0x460D0BC))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(TurnBasedMatchConfig*, uintptr_t))(Il2CppBase() + 0x460D128))(this, selfPointer);
	}

};

}
