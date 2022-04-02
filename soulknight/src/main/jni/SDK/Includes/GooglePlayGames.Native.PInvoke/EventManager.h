#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class EventManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "EventManager"));
	}

	template <typename T = uintptr_t> T& mServices() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T FetchAll(uintptr_t source, void* callback) {
		return ((T (*)(EventManager*, uintptr_t, void*))(Il2CppBase() + 0x283FFAC))(this, source, callback);
	}
	template <typename T = void> static T InternalFetchAllCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x283FDA4))(0, response, data);
	}
	template <typename T = void> T Fetch(uintptr_t source, Il2CppString* eventId, void* callback) {
		return ((T (*)(EventManager*, uintptr_t, Il2CppString*, void*))(Il2CppBase() + 0x2840128))(this, source, eventId, callback);
	}
	template <typename T = void> static T InternalFetchCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x283FE70))(0, response, data);
	}
	template <typename T = void> T Increment(Il2CppString* eventId, uint32_t steps) {
		return ((T (*)(EventManager*, Il2CppString*, uint32_t))(Il2CppBase() + 0x28402BC))(this, eventId, steps);
	}

};

}
