#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class PlayerManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "PlayerManager"));
	}

	template <typename T = uintptr_t> T& mGameServices() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T FetchSelf(void* callback) {
		return ((T (*)(PlayerManager*, void*))(Il2CppBase() + 0x2AFAEC4))(this, callback);
	}
	template <typename T = void> static T InternalFetchSelfCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AFAC54))(0, response, data);
	}
	template <typename T = void> T FetchList(Il2CppArray<uintptr_t>* userIds, void* callback) {
		return ((T (*)(PlayerManager*, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x2AFB034))(this, userIds, callback);
	}
	template <typename T = void> static T InternalFetchCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AFAD24))(0, response, data);
	}
	template <typename T = void> T HandleFetchResponse(uintptr_t collector, uintptr_t resp) {
		return ((T (*)(PlayerManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AFB38C))(this, collector, resp);
	}
	template <typename T = void> T FetchFriends(void* callback) {
		return ((T (*)(PlayerManager*, void*))(Il2CppBase() + 0x2AFB69C))(this, callback);
	}
	template <typename T = void> static T InternalFetchConnectedCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AFADF4))(0, response, data);
	}
	template <typename T = void> T HandleFetchCollected(uintptr_t rsp, void* callback) {
		return ((T (*)(PlayerManager*, uintptr_t, void*))(Il2CppBase() + 0x2AFB88C))(this, rsp, callback);
	}

};

}
