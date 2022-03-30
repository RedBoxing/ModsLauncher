#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class PlayerManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "PlayerManager"));
	}


	template <typename T = void> static T PlayerManager_FetchInvitable(uintptr_t self, uintptr_t data_source, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3575354))(0, self, data_source, callback, callback_arg);
	}
	template <typename T = void> static T PlayerManager_FetchConnected(uintptr_t self, uintptr_t data_source, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x357541C))(0, self, data_source, callback, callback_arg);
	}
	template <typename T = void> static T PlayerManager_Fetch(uintptr_t self, uintptr_t data_source, Il2CppString* player_id, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35754E4))(0, self, data_source, player_id, callback, callback_arg);
	}
	template <typename T = void> static T PlayerManager_FetchRecentlyPlayed(uintptr_t self, uintptr_t data_source, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35755CC))(0, self, data_source, callback, callback_arg);
	}
	template <typename T = void> static T PlayerManager_FetchSelf(uintptr_t self, uintptr_t data_source, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3575698))(0, self, data_source, callback, callback_arg);
	}
	template <typename T = void> static T PlayerManager_FetchSelfResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3575764))(0, self);
	}
	template <typename T = uintptr_t> static T PlayerManager_FetchSelfResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3575800))(0, self);
	}
	template <typename T = uintptr_t> static T PlayerManager_FetchSelfResponse_GetData(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357589C))(0, self);
	}
	template <typename T = void> static T PlayerManager_FetchResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3575938))(0, self);
	}
	template <typename T = uintptr_t> static T PlayerManager_FetchResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35759D4))(0, self);
	}
	template <typename T = uintptr_t> static T PlayerManager_FetchResponse_GetData(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3575A70))(0, self);
	}
	template <typename T = void> static T PlayerManager_FetchListResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3575B0C))(0, self);
	}
	template <typename T = uintptr_t> static T PlayerManager_FetchListResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3575BA8))(0, self);
	}
	template <typename T = uintptr_t> static T PlayerManager_FetchListResponse_GetData_Length(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3575C44))(0, self);
	}
	template <typename T = uintptr_t> static T PlayerManager_FetchListResponse_GetData_GetElement(uintptr_t self, uintptr_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3575CE0))(0, self, index);
	}

};

}
