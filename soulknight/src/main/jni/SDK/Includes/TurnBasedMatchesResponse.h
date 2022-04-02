#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TurnBasedMatchesResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TurnBasedMatchesResponse"));
	}


	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(TurnBasedMatchesResponse*, uintptr_t))(Il2CppBase() + 0x460C254))(this, selfPointer);
	}
	template <typename T = uintptr_t> T Status() {
		return ((T (*)(TurnBasedMatchesResponse*))(Il2CppBase() + 0x460C2DC))(this);
	}
	template <typename T = void*> T Invitations() {
		return ((T (*)(TurnBasedMatchesResponse*))(Il2CppBase() + 0x460C348))(this);
	}
	template <typename T = int32_t> T InvitationCount() {
		return ((T (*)(TurnBasedMatchesResponse*))(Il2CppBase() + 0x460C458))(this);
	}
	template <typename T = void*> T MyTurnMatches() {
		return ((T (*)(TurnBasedMatchesResponse*))(Il2CppBase() + 0x460C4E0))(this);
	}
	template <typename T = int32_t> T MyTurnMatchesCount() {
		return ((T (*)(TurnBasedMatchesResponse*))(Il2CppBase() + 0x460C5F0))(this);
	}
	template <typename T = void*> T TheirTurnMatches() {
		return ((T (*)(TurnBasedMatchesResponse*))(Il2CppBase() + 0x460C678))(this);
	}
	template <typename T = int32_t> T TheirTurnMatchesCount() {
		return ((T (*)(TurnBasedMatchesResponse*))(Il2CppBase() + 0x460C788))(this);
	}
	template <typename T = void*> T CompletedMatches() {
		return ((T (*)(TurnBasedMatchesResponse*))(Il2CppBase() + 0x460C810))(this);
	}
	template <typename T = int32_t> T CompletedMatchesCount() {
		return ((T (*)(TurnBasedMatchesResponse*))(Il2CppBase() + 0x460C920))(this);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x460C9A8))(0, pointer);
	}
	template <typename T = uintptr_t> T Invitationsb__3_0(uintptr_t index) {
		return ((T (*)(TurnBasedMatchesResponse*, uintptr_t))(Il2CppBase() + 0x460CA7C))(this, index);
	}
	template <typename T = uintptr_t> T MyTurnMatchesb__5_0(uintptr_t index) {
		return ((T (*)(TurnBasedMatchesResponse*, uintptr_t))(Il2CppBase() + 0x460CB0C))(this, index);
	}
	template <typename T = uintptr_t> T TheirTurnMatchesb__7_0(uintptr_t index) {
		return ((T (*)(TurnBasedMatchesResponse*, uintptr_t))(Il2CppBase() + 0x460CB9C))(this, index);
	}
	template <typename T = uintptr_t> T CompletedMatchesb__9_0(uintptr_t index) {
		return ((T (*)(TurnBasedMatchesResponse*, uintptr_t))(Il2CppBase() + 0x460CC2C))(this, index);
	}

};

}
