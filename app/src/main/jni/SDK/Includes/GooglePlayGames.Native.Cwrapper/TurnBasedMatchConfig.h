#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class TurnBasedMatchConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "TurnBasedMatchConfig"));
	}


	template <typename T = uintptr_t> static T TurnBasedMatchConfig_PlayerIdsToInvite_Length(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35850E0))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMatchConfig_PlayerIdsToInvite_GetElement(uintptr_t self, uintptr_t index, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x358517C))(0, self, index, out_arg, out_size);
	}
	template <typename T = uint32_t> static T TurnBasedMatchConfig_Variant(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3585248))(0, self);
	}
	template <typename T = int64_t> static T TurnBasedMatchConfig_ExclusiveBitMask(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35852E4))(0, self);
	}
	template <typename T = bool> static T TurnBasedMatchConfig_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3585380))(0, self);
	}
	template <typename T = uint32_t> static T TurnBasedMatchConfig_MaximumAutomatchingPlayers(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3585424))(0, self);
	}
	template <typename T = uint32_t> static T TurnBasedMatchConfig_MinimumAutomatchingPlayers(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35854C0))(0, self);
	}
	template <typename T = void> static T TurnBasedMatchConfig_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x358555C))(0, self);
	}

};

}
