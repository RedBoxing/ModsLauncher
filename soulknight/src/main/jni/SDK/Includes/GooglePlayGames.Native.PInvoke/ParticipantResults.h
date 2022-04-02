#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class ParticipantResults
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "ParticipantResults"));
	}


	template <typename T = bool> T HasResultsForParticipant(Il2CppString* participantId) {
		return ((T (*)(ParticipantResults*, Il2CppString*))(Il2CppBase() + 0x2AFA94C))(this, participantId);
	}
	template <typename T = uint32_t> T PlacingForParticipant(Il2CppString* participantId) {
		return ((T (*)(ParticipantResults*, Il2CppString*))(Il2CppBase() + 0x2AFA9D0))(this, participantId);
	}
	template <typename T = uintptr_t> T ResultsForParticipant(Il2CppString* participantId) {
		return ((T (*)(ParticipantResults*, Il2CppString*))(Il2CppBase() + 0x2AFAA54))(this, participantId);
	}
	template <typename T = uintptr_t> T WithResult(Il2CppString* participantId, uint32_t placing, uintptr_t result) {
		return ((T (*)(ParticipantResults*, Il2CppString*, uint32_t, uintptr_t))(Il2CppBase() + 0x2AFAAD8))(this, participantId, placing, result);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(ParticipantResults*, uintptr_t))(Il2CppBase() + 0x2AFABD0))(this, selfPointer);
	}

};

}
