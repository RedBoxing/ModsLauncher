#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class TurnBasedMatch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "TurnBasedMatch"));
	}


	template <typename T = uint32_t> static T TurnBasedMatch_AutomatchingSlotsAvailable(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3584174))(0, self);
	}
	template <typename T = uint64_t> static T TurnBasedMatch_CreationTime(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3584210))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMatch_Participants_Length(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35842AC))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMatch_Participants_GetElement(uintptr_t self, uintptr_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3584348))(0, self, index);
	}
	template <typename T = uint32_t> static T TurnBasedMatch_Version(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35843F4))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMatch_ParticipantResults(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3584490))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMatch_Status(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x358452C))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMatch_Description(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35845C8))(0, self, out_arg, out_size);
	}
	template <typename T = uintptr_t> static T TurnBasedMatch_PendingParticipant(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3584684))(0, self);
	}
	template <typename T = uint32_t> static T TurnBasedMatch_Variant(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3584720))(0, self);
	}
	template <typename T = bool> static T TurnBasedMatch_HasPreviousMatchData(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35847BC))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMatch_Data(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x3584860))(0, self, out_arg, out_size);
	}
	template <typename T = uintptr_t> static T TurnBasedMatch_LastUpdatingParticipant(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x358491C))(0, self);
	}
	template <typename T = bool> static T TurnBasedMatch_HasData(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35849B8))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMatch_SuggestedNextParticipant(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3584A5C))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMatch_PreviousMatchData(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x3584AF8))(0, self, out_arg, out_size);
	}
	template <typename T = uint64_t> static T TurnBasedMatch_LastUpdateTime(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3584BB4))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMatch_RematchId(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x3584C50))(0, self, out_arg, out_size);
	}
	template <typename T = uint32_t> static T TurnBasedMatch_Number(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3584D08))(0, self);
	}
	template <typename T = bool> static T TurnBasedMatch_HasRematchId(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3584DA4))(0, self);
	}
	template <typename T = bool> static T TurnBasedMatch_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3584E48))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMatch_CreatingParticipant(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3584EEC))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMatch_Id(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x3584F88))(0, self, out_arg, out_size);
	}
	template <typename T = void> static T TurnBasedMatch_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3585044))(0, self);
	}

};

}
