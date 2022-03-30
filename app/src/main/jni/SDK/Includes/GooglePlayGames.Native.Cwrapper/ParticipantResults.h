#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class ParticipantResults
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "ParticipantResults"));
	}


	template <typename T = uintptr_t> static T ParticipantResults_WithResult(uintptr_t self, Il2CppString* participant_id, uint32_t placing, uintptr_t result) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uint32_t, uintptr_t))(Il2CppBase() + 0x3574784))(0, self, participant_id, placing, result);
	}
	template <typename T = bool> static T ParticipantResults_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3574864))(0, self);
	}
	template <typename T = uintptr_t> static T ParticipantResults_MatchResultForParticipant(uintptr_t self, Il2CppString* participant_id) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3574908))(0, self, participant_id);
	}
	template <typename T = uint32_t> static T ParticipantResults_PlaceForParticipant(uintptr_t self, Il2CppString* participant_id) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x35749D0))(0, self, participant_id);
	}
	template <typename T = bool> static T ParticipantResults_HasResultsForParticipant(uintptr_t self, Il2CppString* participant_id) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3574A98))(0, self, participant_id);
	}
	template <typename T = void> static T ParticipantResults_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3574B64))(0, self);
	}

};

}
