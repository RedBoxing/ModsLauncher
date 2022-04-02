#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Multiplayer {

class TurnBasedMatch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Multiplayer", "TurnBasedMatch"));
	}

	template <typename T = uintptr_t> static T& UnixEpoch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& mMatchId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mCanRematch() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& mAvailableAutomatchSlots() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& mSelfParticipantId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mParticipants() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& mPendingParticipantId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& mTurnStatus() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mMatchStatus() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& mVariant() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& mVersion() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int64_t> T& mCreationTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int64_t> T& mLastUpdateTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = uintptr_t> T get_CreationTime() {
		return ((T (*)(TurnBasedMatch*))(Il2CppBase() + 0x35C23AC))(this);
	}
	template <typename T = uintptr_t> T get_LastUpdateTime() {
		return ((T (*)(TurnBasedMatch*))(Il2CppBase() + 0x35C2478))(this);
	}
	template <typename T = Il2CppString*> T get_MatchId() {
		return ((T (*)(TurnBasedMatch*))(Il2CppBase() + 0x35C2544))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Data() {
		return ((T (*)(TurnBasedMatch*))(Il2CppBase() + 0x35C25A4))(this);
	}
	template <typename T = bool> T get_CanRematch() {
		return ((T (*)(TurnBasedMatch*))(Il2CppBase() + 0x35C2604))(this);
	}
	template <typename T = Il2CppString*> T get_SelfParticipantId() {
		return ((T (*)(TurnBasedMatch*))(Il2CppBase() + 0x35C2664))(this);
	}
	template <typename T = uintptr_t> T get_Self() {
		return ((T (*)(TurnBasedMatch*))(Il2CppBase() + 0x35C26C4))(this);
	}
	template <typename T = uintptr_t> T GetParticipant(Il2CppString* participantId) {
		return ((T (*)(TurnBasedMatch*, Il2CppString*))(Il2CppBase() + 0x35C2728))(this, participantId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Participants() {
		return ((T (*)(TurnBasedMatch*))(Il2CppBase() + 0x35C292C))(this);
	}
	template <typename T = Il2CppString*> T get_PendingParticipantId() {
		return ((T (*)(TurnBasedMatch*))(Il2CppBase() + 0x35C298C))(this);
	}
	template <typename T = uintptr_t> T get_PendingParticipant() {
		return ((T (*)(TurnBasedMatch*))(Il2CppBase() + 0x35C29EC))(this);
	}
	template <typename T = uintptr_t> T get_TurnStatus() {
		return ((T (*)(TurnBasedMatch*))(Il2CppBase() + 0x35C2A64))(this);
	}
	template <typename T = uintptr_t> T get_Status() {
		return ((T (*)(TurnBasedMatch*))(Il2CppBase() + 0x35C2AC4))(this);
	}
	template <typename T = uint32_t> T get_Variant() {
		return ((T (*)(TurnBasedMatch*))(Il2CppBase() + 0x35C2B24))(this);
	}
	template <typename T = uint32_t> T get_Version() {
		return ((T (*)(TurnBasedMatch*))(Il2CppBase() + 0x35C2B84))(this);
	}
	template <typename T = uint32_t> T get_AvailableAutomatchSlots() {
		return ((T (*)(TurnBasedMatch*))(Il2CppBase() + 0x35C2BE4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(TurnBasedMatch*))(Il2CppBase() + 0x35C2C44))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(TurnBasedMatch*))(Il2CppBase() + 0x35C32E8))(this);
	}

};

}
