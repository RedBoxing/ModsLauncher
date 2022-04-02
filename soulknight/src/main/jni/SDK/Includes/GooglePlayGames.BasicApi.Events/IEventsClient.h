#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Events {

class IEventsClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Events", "IEventsClient"));
	}


	template <typename T = void> T FetchAllEvents(uintptr_t source, void* callback) {
		return ((T (*)(IEventsClient*, uintptr_t, void*))(Il2CppBase() + 0x0))(this, source, callback);
	}
	template <typename T = void> T FetchEvent(uintptr_t source, Il2CppString* eventId, void* callback) {
		return ((T (*)(IEventsClient*, uintptr_t, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, source, eventId, callback);
	}
	template <typename T = void> T IncrementEvent(Il2CppString* eventId, uint32_t stepsToIncrement) {
		return ((T (*)(IEventsClient*, Il2CppString*, uint32_t))(Il2CppBase() + 0x0))(this, eventId, stepsToIncrement);
	}

};

}
