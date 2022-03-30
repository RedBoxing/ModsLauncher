#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class RealTimeRoomConfigBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "RealTimeRoomConfigBuilder"));
	}


	template <typename T = void> static T RealTimeRoomConfig_Builder_PopulateFromPlayerSelectUIResponse(uintptr_t self, uintptr_t response) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x357E16C))(0, self, response);
	}
	template <typename T = void> static T RealTimeRoomConfig_Builder_SetVariant(uintptr_t self, uint32_t variant) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x357E218))(0, self, variant);
	}
	template <typename T = void> static T RealTimeRoomConfig_Builder_AddPlayerToInvite(uintptr_t self, Il2CppString* player_id) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x357E2C4))(0, self, player_id);
	}
	template <typename T = uintptr_t> static T RealTimeRoomConfig_Builder_Construct() {
		return ((T (*)(void *))(Il2CppBase() + 0x357E384))(0);
	}
	template <typename T = void> static T RealTimeRoomConfig_Builder_SetExclusiveBitMask(uintptr_t self, uint64_t exclusive_bit_mask) {
		return ((T (*)(void *, uintptr_t, uint64_t))(Il2CppBase() + 0x357E410))(0, self, exclusive_bit_mask);
	}
	template <typename T = void> static T RealTimeRoomConfig_Builder_SetMaximumAutomatchingPlayers(uintptr_t self, uint32_t maximum_automatching_players) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x357E4BC))(0, self, maximum_automatching_players);
	}
	template <typename T = uintptr_t> static T RealTimeRoomConfig_Builder_Create(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357E568))(0, self);
	}
	template <typename T = void> static T RealTimeRoomConfig_Builder_SetMinimumAutomatchingPlayers(uintptr_t self, uint32_t minimum_automatching_players) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x357E604))(0, self, minimum_automatching_players);
	}
	template <typename T = void> static T RealTimeRoomConfig_Builder_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357E6B0))(0, self);
	}

};

}
