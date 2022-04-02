#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Multiplayer {

class MatchOutcome
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Multiplayer", "MatchOutcome"));
	}

	template <typename T = uint32_t> static T& PlacementUnset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& mParticipantIds() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uint32_t>*> T& mPlacements() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& mResults() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T SetParticipantResult(Il2CppString* participantId, uintptr_t result, uint32_t placement) {
		return ((T (*)(MatchOutcome*, Il2CppString*, uintptr_t, uint32_t))(Il2CppBase() + 0x35C12F4))(this, participantId, result, placement);
	}
	template <typename T = void> T SetParticipantResult_1(Il2CppString* participantId, uintptr_t result) {
		return ((T (*)(MatchOutcome*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x35C144C))(this, participantId, result);
	}
	template <typename T = void> T SetParticipantResult_2(Il2CppString* participantId, uint32_t placement) {
		return ((T (*)(MatchOutcome*, Il2CppString*, uint32_t))(Il2CppBase() + 0x35C14D4))(this, participantId, placement);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_ParticipantIds() {
		return ((T (*)(MatchOutcome*))(Il2CppBase() + 0x35C155C))(this);
	}
	template <typename T = uintptr_t> T GetResultFor(Il2CppString* participantId) {
		return ((T (*)(MatchOutcome*, Il2CppString*))(Il2CppBase() + 0x35C15BC))(this, participantId);
	}
	template <typename T = uint32_t> T GetPlacementFor(Il2CppString* participantId) {
		return ((T (*)(MatchOutcome*, Il2CppString*))(Il2CppBase() + 0x35C16B4))(this, participantId);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MatchOutcome*))(Il2CppBase() + 0x35C17AC))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(MatchOutcome*))(Il2CppBase() + 0x35C19D0))(this);
	}

};

}
