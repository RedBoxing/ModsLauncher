#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativeTurnBasedMatch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativeTurnBasedMatch"));
	}


	template <typename T = uint32_t> T AvailableAutomatchSlots() {
		return ((T (*)(NativeTurnBasedMatch*))(Il2CppBase() + 0x2AF63C8))(this);
	}
	template <typename T = uint64_t> T CreationTime() {
		return ((T (*)(NativeTurnBasedMatch*))(Il2CppBase() + 0x2AF6434))(this);
	}
	template <typename T = uint64_t> T LastUpdateTime() {
		return ((T (*)(NativeTurnBasedMatch*))(Il2CppBase() + 0x2AF64A0))(this);
	}
	template <typename T = void*> T Participants() {
		return ((T (*)(NativeTurnBasedMatch*))(Il2CppBase() + 0x2AF650C))(this);
	}
	template <typename T = uint32_t> T Version() {
		return ((T (*)(NativeTurnBasedMatch*))(Il2CppBase() + 0x2AF661C))(this);
	}
	template <typename T = uint32_t> T Variant() {
		return ((T (*)(NativeTurnBasedMatch*))(Il2CppBase() + 0x2AF6688))(this);
	}
	template <typename T = uintptr_t> T Results() {
		return ((T (*)(NativeTurnBasedMatch*))(Il2CppBase() + 0x2AF66F4))(this);
	}
	template <typename T = uintptr_t> T ParticipantWithId(Il2CppString* participantId) {
		return ((T (*)(NativeTurnBasedMatch*, Il2CppString*))(Il2CppBase() + 0x2AF6828))(this, participantId);
	}
	template <typename T = uintptr_t> T PendingParticipant() {
		return ((T (*)(NativeTurnBasedMatch*))(Il2CppBase() + 0x2AF6BBC))(this);
	}
	template <typename T = uintptr_t> T MatchStatus() {
		return ((T (*)(NativeTurnBasedMatch*))(Il2CppBase() + 0x2AF6CAC))(this);
	}
	template <typename T = Il2CppString*> T Description() {
		return ((T (*)(NativeTurnBasedMatch*))(Il2CppBase() + 0x2AF6D18))(this);
	}
	template <typename T = bool> T HasRematchId() {
		return ((T (*)(NativeTurnBasedMatch*))(Il2CppBase() + 0x2AF6DE8))(this);
	}
	template <typename T = Il2CppString*> T RematchId() {
		return ((T (*)(NativeTurnBasedMatch*))(Il2CppBase() + 0x2AF6EB4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Data() {
		return ((T (*)(NativeTurnBasedMatch*))(Il2CppBase() + 0x2AF6F84))(this);
	}
	template <typename T = Il2CppString*> T Id() {
		return ((T (*)(NativeTurnBasedMatch*))(Il2CppBase() + 0x2AF70C4))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativeTurnBasedMatch*, uintptr_t))(Il2CppBase() + 0x2AF7194))(this, selfPointer);
	}
	template <typename T = uintptr_t> T AsTurnBasedMatch(Il2CppString* selfPlayerId) {
		return ((T (*)(NativeTurnBasedMatch*, Il2CppString*))(Il2CppBase() + 0x2AF7218))(this, selfPlayerId);
	}
	template <typename T = uintptr_t> static T ToTurnStatus(uintptr_t status) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AF79E4))(0, status);
	}
	template <typename T = uintptr_t> static T ToMatchStatus(Il2CppString* pendingParticipantId, uintptr_t status) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2AF7A60))(0, pendingParticipantId, status);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t selfPointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AE99C0))(0, selfPointer);
	}
	template <typename T = uintptr_t> T Participantsb__4_0(uintptr_t index) {
		return ((T (*)(NativeTurnBasedMatch*, uintptr_t))(Il2CppBase() + 0x2AF7B1C))(this, index);
	}
	template <typename T = uintptr_t> T Descriptionb__11_0(Il2CppArray<uintptr_t>* out_string, uintptr_t size) {
		return ((T (*)(NativeTurnBasedMatch*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF7BA8))(this, out_string, size);
	}
	template <typename T = uintptr_t> T RematchIdb__13_0(Il2CppArray<uintptr_t>* out_string, uintptr_t size) {
		return ((T (*)(NativeTurnBasedMatch*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF7BDC))(this, out_string, size);
	}
	template <typename T = uintptr_t> T Datab__14_0(Il2CppArray<uintptr_t>* bytes, uintptr_t size) {
		return ((T (*)(NativeTurnBasedMatch*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF7C10))(this, bytes, size);
	}
	template <typename T = uintptr_t> T Idb__15_0(Il2CppArray<uintptr_t>* out_string, uintptr_t size) {
		return ((T (*)(NativeTurnBasedMatch*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF7C44))(this, out_string, size);
	}

};

}
