#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class RealTimeRoomConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "RealTimeRoomConfig"));
	}


	template <typename T = uintptr_t> static T RealTimeRoomConfig_PlayerIdsToInvite_Length(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357DB98))(0, self);
	}
	template <typename T = uintptr_t> static T RealTimeRoomConfig_PlayerIdsToInvite_GetElement(uintptr_t self, uintptr_t index, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x357DC34))(0, self, index, out_arg, out_size);
	}
	template <typename T = uint32_t> static T RealTimeRoomConfig_Variant(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357DDBC))(0, self);
	}
	template <typename T = int64_t> static T RealTimeRoomConfig_ExclusiveBitMask(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357DE58))(0, self);
	}
	template <typename T = bool> static T RealTimeRoomConfig_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357DEF4))(0, self);
	}
	template <typename T = uint32_t> static T RealTimeRoomConfig_MaximumAutomatchingPlayers(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357DF98))(0, self);
	}
	template <typename T = uint32_t> static T RealTimeRoomConfig_MinimumAutomatchingPlayers(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357E034))(0, self);
	}
	template <typename T = void> static T RealTimeRoomConfig_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357E0D0))(0, self);
	}

};

}
