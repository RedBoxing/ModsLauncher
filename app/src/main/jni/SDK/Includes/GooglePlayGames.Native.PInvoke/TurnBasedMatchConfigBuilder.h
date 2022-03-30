#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class TurnBasedMatchConfigBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "TurnBasedMatchConfigBuilder"));
	}


	template <typename T = uintptr_t> T PopulateFromUIResponse(uintptr_t response) {
		return ((T (*)(TurnBasedMatchConfigBuilder*, uintptr_t))(Il2CppBase() + 0x460D27C))(this, response);
	}
	template <typename T = uintptr_t> T SetVariant(uint32_t variant) {
		return ((T (*)(TurnBasedMatchConfigBuilder*, uint32_t))(Il2CppBase() + 0x460D330))(this, variant);
	}
	template <typename T = uintptr_t> T AddInvitedPlayer(Il2CppString* playerId) {
		return ((T (*)(TurnBasedMatchConfigBuilder*, Il2CppString*))(Il2CppBase() + 0x460D3BC))(this, playerId);
	}
	template <typename T = uintptr_t> T SetExclusiveBitMask(uint64_t bitmask) {
		return ((T (*)(TurnBasedMatchConfigBuilder*, uint64_t))(Il2CppBase() + 0x460D448))(this, bitmask);
	}
	template <typename T = uintptr_t> T SetMinimumAutomatchingPlayers(uint32_t minimum) {
		return ((T (*)(TurnBasedMatchConfigBuilder*, uint32_t))(Il2CppBase() + 0x460D4D4))(this, minimum);
	}
	template <typename T = uintptr_t> T SetMaximumAutomatchingPlayers(uint32_t maximum) {
		return ((T (*)(TurnBasedMatchConfigBuilder*, uint32_t))(Il2CppBase() + 0x460D560))(this, maximum);
	}
	template <typename T = uintptr_t> T Build() {
		return ((T (*)(TurnBasedMatchConfigBuilder*))(Il2CppBase() + 0x460D5EC))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(TurnBasedMatchConfigBuilder*, uintptr_t))(Il2CppBase() + 0x460D6A8))(this, selfPointer);
	}
	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x460D72C))(0);
	}

};

}
