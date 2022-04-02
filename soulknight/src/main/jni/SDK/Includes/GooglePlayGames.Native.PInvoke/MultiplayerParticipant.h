#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class MultiplayerParticipant
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "MultiplayerParticipant"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& StatusConversion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T Status() {
		return ((T (*)(MultiplayerParticipant*))(Il2CppBase() + 0x2AEE3C4))(this);
	}
	template <typename T = bool> T IsConnectedToRoom() {
		return ((T (*)(MultiplayerParticipant*))(Il2CppBase() + 0x2AEE430))(this);
	}
	template <typename T = Il2CppString*> T DisplayName() {
		return ((T (*)(MultiplayerParticipant*))(Il2CppBase() + 0x2AEE4BC))(this);
	}
	template <typename T = uintptr_t> T Player() {
		return ((T (*)(MultiplayerParticipant*))(Il2CppBase() + 0x2AEE58C))(this);
	}
	template <typename T = Il2CppString*> T Id() {
		return ((T (*)(MultiplayerParticipant*))(Il2CppBase() + 0x2AEE6DC))(this);
	}
	template <typename T = bool> T Valid() {
		return ((T (*)(MultiplayerParticipant*))(Il2CppBase() + 0x2AED7E8))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(MultiplayerParticipant*, uintptr_t))(Il2CppBase() + 0x2AEE7AC))(this, selfPointer);
	}
	template <typename T = uintptr_t> T AsParticipant() {
		return ((T (*)(MultiplayerParticipant*))(Il2CppBase() + 0x2AEE160))(this);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AEE910))(0, pointer);
	}
	template <typename T = uintptr_t> static T AutomatchingSentinel() {
		return ((T (*)(void *))(Il2CppBase() + 0x2AEE9E4))(0);
	}
	template <typename T = uintptr_t> T DisplayNameb__4_0(Il2CppArray<uintptr_t>* out_string, uintptr_t size) {
		return ((T (*)(MultiplayerParticipant*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AEEC5C))(this, out_string, size);
	}
	template <typename T = uintptr_t> T Idb__6_0(Il2CppArray<uintptr_t>* out_string, uintptr_t size) {
		return ((T (*)(MultiplayerParticipant*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AEEC90))(this, out_string, size);
	}

};

}
