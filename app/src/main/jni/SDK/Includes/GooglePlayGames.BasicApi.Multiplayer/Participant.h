#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Multiplayer {

class Participant
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Multiplayer", "Participant"));
	}

	template <typename T = Il2CppString*> T& mDisplayName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& mParticipantId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mStatus() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mPlayer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& mIsConnectedToRoom() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = Il2CppString*> T get_DisplayName() {
		return ((T (*)(Participant*))(Il2CppBase() + 0x35C19D8))(this);
	}
	template <typename T = Il2CppString*> T get_ParticipantId() {
		return ((T (*)(Participant*))(Il2CppBase() + 0x35C1A38))(this);
	}
	template <typename T = uintptr_t> T get_Status() {
		return ((T (*)(Participant*))(Il2CppBase() + 0x35C1A98))(this);
	}
	template <typename T = uintptr_t> T get_Player() {
		return ((T (*)(Participant*))(Il2CppBase() + 0x35C1AF8))(this);
	}
	template <typename T = bool> T get_IsConnectedToRoom() {
		return ((T (*)(Participant*))(Il2CppBase() + 0x35C1B58))(this);
	}
	template <typename T = bool> T get_IsAutomatch() {
		return ((T (*)(Participant*))(Il2CppBase() + 0x35C1BB8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Participant*))(Il2CppBase() + 0x35C1CD8))(this);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t other) {
		return ((T (*)(Participant*, uintptr_t))(Il2CppBase() + 0x35C1FB8))(this, other);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(Participant*, uintptr_t))(Il2CppBase() + 0x35C2048))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Participant*))(Il2CppBase() + 0x35C220C))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(Participant*))(Il2CppBase() + 0x35C2284))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Equals(uintptr_t P0) {
		return ((T (*)(Participant*, uintptr_t))(Il2CppBase() + 0x35C228C))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetHashCode() {
		return ((T (*)(Participant*))(Il2CppBase() + 0x35C2294))(this);
	}

};

}
