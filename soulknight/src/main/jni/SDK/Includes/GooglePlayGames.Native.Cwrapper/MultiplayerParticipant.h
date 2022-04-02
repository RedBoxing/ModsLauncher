#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class MultiplayerParticipant
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "MultiplayerParticipant"));
	}


	template <typename T = uintptr_t> static T MultiplayerParticipant_Status(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D9110))(0, self);
	}
	template <typename T = uint32_t> static T MultiplayerParticipant_MatchRank(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D91AC))(0, self);
	}
	template <typename T = bool> static T MultiplayerParticipant_IsConnectedToRoom(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D9248))(0, self);
	}
	template <typename T = uintptr_t> static T MultiplayerParticipant_DisplayName(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35D92EC))(0, self, out_arg, out_size);
	}
	template <typename T = bool> static T MultiplayerParticipant_HasPlayer(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D93A8))(0, self);
	}
	template <typename T = uintptr_t> static T MultiplayerParticipant_AvatarUrl(uintptr_t self, uintptr_t resolution, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35D944C))(0, self, resolution, out_arg, out_size);
	}
	template <typename T = uintptr_t> static T MultiplayerParticipant_MatchResult(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D95D4))(0, self);
	}
	template <typename T = uintptr_t> static T MultiplayerParticipant_Player(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D9670))(0, self);
	}
	template <typename T = void> static T MultiplayerParticipant_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D970C))(0, self);
	}
	template <typename T = bool> static T MultiplayerParticipant_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D97A8))(0, self);
	}
	template <typename T = bool> static T MultiplayerParticipant_HasMatchResult(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D984C))(0, self);
	}
	template <typename T = uintptr_t> static T MultiplayerParticipant_Id(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35D98F0))(0, self, out_arg, out_size);
	}

};

}
