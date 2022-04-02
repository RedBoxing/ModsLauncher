#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class GameServicesBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "GameServicesBuilder"));
	}


	template <typename T = void> T SetOnAuthFinishedCallback(uintptr_t callback) {
		return ((T (*)(GameServicesBuilder*, uintptr_t))(Il2CppBase() + 0x2AE8CF8))(this, callback);
	}
	template <typename T = void> T EnableSnapshots() {
		return ((T (*)(GameServicesBuilder*))(Il2CppBase() + 0x2AE8E0C))(this);
	}
	template <typename T = void> T AddOauthScope(Il2CppString* scope) {
		return ((T (*)(GameServicesBuilder*, Il2CppString*))(Il2CppBase() + 0x2AE8E78))(this, scope);
	}
	template <typename T = void> static T InternalAuthFinishedCallback(uintptr_t op, uintptr_t status, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AE836C))(0, op, status, data);
	}
	template <typename T = void> T SetOnAuthStartedCallback(uintptr_t callback) {
		return ((T (*)(GameServicesBuilder*, uintptr_t))(Il2CppBase() + 0x2AE9364))(this, callback);
	}
	template <typename T = void> static T InternalAuthStartedCallback(uintptr_t op, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AE8510))(0, op, data);
	}
	template <typename T = void> T SetShowConnectingPopup(bool flag) {
		return ((T (*)(GameServicesBuilder*, bool))(Il2CppBase() + 0x2AE98B8))(this, flag);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(GameServicesBuilder*, uintptr_t))(Il2CppBase() + 0x2AE993C))(this, selfPointer);
	}
	template <typename T = void> static T InternalOnTurnBasedMatchEventCallback(uintptr_t eventType, Il2CppString* matchId, uintptr_t match, uintptr_t userData) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AE86A8))(0, eventType, matchId, match, userData);
	}
	template <typename T = void> T SetOnTurnBasedMatchEventCallback(void* callback) {
		return ((T (*)(GameServicesBuilder*, void*))(Il2CppBase() + 0x2AE9A94))(this, callback);
	}
	template <typename T = void> static T InternalOnMultiplayerInvitationEventCallback(uintptr_t eventType, Il2CppString* matchId, uintptr_t match, uintptr_t userData) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AE8984))(0, eventType, matchId, match, userData);
	}
	template <typename T = void> T SetOnMultiplayerInvitationEventCallback(void* callback) {
		return ((T (*)(GameServicesBuilder*, void*))(Il2CppBase() + 0x2AE9C80))(this, callback);
	}
	template <typename T = uintptr_t> T Build(uintptr_t configRef) {
		return ((T (*)(GameServicesBuilder*, uintptr_t))(Il2CppBase() + 0x2AE9D98))(this, configRef);
	}
	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x2AE9F78))(0);
	}

};

}
