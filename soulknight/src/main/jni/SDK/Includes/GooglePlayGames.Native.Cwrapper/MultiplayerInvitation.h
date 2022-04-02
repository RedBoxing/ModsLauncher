#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class MultiplayerInvitation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "MultiplayerInvitation"));
	}


	template <typename T = uint32_t> static T MultiplayerInvitation_AutomatchingSlotsAvailable(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D8AC4))(0, self);
	}
	template <typename T = uintptr_t> static T MultiplayerInvitation_InvitingParticipant(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D8B60))(0, self);
	}
	template <typename T = uint32_t> static T MultiplayerInvitation_Variant(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D8BFC))(0, self);
	}
	template <typename T = uint64_t> static T MultiplayerInvitation_CreationTime(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D8C98))(0, self);
	}
	template <typename T = uintptr_t> static T MultiplayerInvitation_Participants_Length(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D8D34))(0, self);
	}
	template <typename T = uintptr_t> static T MultiplayerInvitation_Participants_GetElement(uintptr_t self, uintptr_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D8DD0))(0, self, index);
	}
	template <typename T = bool> static T MultiplayerInvitation_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D8E7C))(0, self);
	}
	template <typename T = uintptr_t> static T MultiplayerInvitation_Type(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D8F20))(0, self);
	}
	template <typename T = uintptr_t> static T MultiplayerInvitation_Id(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35D8FBC))(0, self, out_arg, out_size);
	}
	template <typename T = void> static T MultiplayerInvitation_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D9074))(0, self);
	}

};

}
