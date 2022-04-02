#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class EventManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "EventManager"));
	}


	template <typename T = void> static T EventManager_FetchAll(uintptr_t self, uintptr_t data_source, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D24EC))(0, self, data_source, callback, callback_arg);
	}
	template <typename T = void> static T EventManager_Fetch(uintptr_t self, uintptr_t data_source, Il2CppString* event_id, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D25B8))(0, self, data_source, event_id, callback, callback_arg);
	}
	template <typename T = void> static T EventManager_Increment(uintptr_t self, Il2CppString* event_id, uint32_t steps) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uint32_t))(Il2CppBase() + 0x35D26A0))(0, self, event_id, steps);
	}
	template <typename T = void> static T EventManager_FetchAllResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D2768))(0, self);
	}
	template <typename T = uintptr_t> static T EventManager_FetchAllResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D2804))(0, self);
	}
	template <typename T = uintptr_t> static T EventManager_FetchAllResponse_GetData(uintptr_t self, Il2CppArray<uintptr_t>* out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x35D28A0))(0, self, out_arg, out_size);
	}
	template <typename T = void> static T EventManager_FetchResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D295C))(0, self);
	}
	template <typename T = uintptr_t> static T EventManager_FetchResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D29F8))(0, self);
	}
	template <typename T = uintptr_t> static T EventManager_FetchResponse_GetData(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D2A94))(0, self);
	}

};

}
