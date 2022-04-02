#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native {

class NativeEventClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native", "NativeEventClient"));
	}

	template <typename T = uintptr_t> T& mEventManager() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T FetchAllEvents(uintptr_t source, void* callback) {
		return ((T (*)(NativeEventClient*, uintptr_t, void*))(Il2CppBase() + 0x3591DBC))(this, source, callback);
	}
	template <typename T = void> T FetchEvent(uintptr_t source, Il2CppString* eventId, void* callback) {
		return ((T (*)(NativeEventClient*, uintptr_t, Il2CppString*, void*))(Il2CppBase() + 0x3591F84))(this, source, eventId, callback);
	}
	template <typename T = void> T IncrementEvent(Il2CppString* eventId, uint32_t stepsToIncrement) {
		return ((T (*)(NativeEventClient*, Il2CppString*, uint32_t))(Il2CppBase() + 0x3592108))(this, eventId, stepsToIncrement);
	}

};

}
