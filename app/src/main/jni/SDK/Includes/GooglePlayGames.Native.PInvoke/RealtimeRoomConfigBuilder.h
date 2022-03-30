#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class RealtimeRoomConfigBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "RealtimeRoomConfigBuilder"));
	}


	template <typename T = uintptr_t> T PopulateFromUIResponse(uintptr_t response) {
		return ((T (*)(RealtimeRoomConfigBuilder*, uintptr_t))(Il2CppBase() + 0x2B00FAC))(this, response);
	}
	template <typename T = uintptr_t> T SetVariant(uint32_t variantValue) {
		return ((T (*)(RealtimeRoomConfigBuilder*, uint32_t))(Il2CppBase() + 0x2B01060))(this, variantValue);
	}
	template <typename T = uintptr_t> T AddInvitedPlayer(Il2CppString* playerId) {
		return ((T (*)(RealtimeRoomConfigBuilder*, Il2CppString*))(Il2CppBase() + 0x2B010F4))(this, playerId);
	}
	template <typename T = uintptr_t> T SetExclusiveBitMask(uint64_t bitmask) {
		return ((T (*)(RealtimeRoomConfigBuilder*, uint64_t))(Il2CppBase() + 0x2B01180))(this, bitmask);
	}
	template <typename T = uintptr_t> T SetMinimumAutomatchingPlayers(uint32_t minimum) {
		return ((T (*)(RealtimeRoomConfigBuilder*, uint32_t))(Il2CppBase() + 0x2B0120C))(this, minimum);
	}
	template <typename T = uintptr_t> T SetMaximumAutomatchingPlayers(uint32_t maximum) {
		return ((T (*)(RealtimeRoomConfigBuilder*, uint32_t))(Il2CppBase() + 0x2B01298))(this, maximum);
	}
	template <typename T = uintptr_t> T Build() {
		return ((T (*)(RealtimeRoomConfigBuilder*))(Il2CppBase() + 0x2B01324))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(RealtimeRoomConfigBuilder*, uintptr_t))(Il2CppBase() + 0x2B013E0))(this, selfPointer);
	}
	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B01464))(0);
	}

};

}
