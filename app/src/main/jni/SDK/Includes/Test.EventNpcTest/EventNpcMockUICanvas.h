#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Test.EventNpcTest {

class EventNpcMockUICanvas
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Test.EventNpcTest", "EventNpcMockUICanvas"));
	}


	template <typename T = void> T Awake() {
		return ((T (*)(EventNpcMockUICanvas*))(Il2CppBase() + 0x43BEB24))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EventNpcMockUICanvas*))(Il2CppBase() + 0x43BEEFC))(this);
	}
	template <typename T = void> T OnApplicationPause(bool pauseStatus) {
		return ((T (*)(EventNpcMockUICanvas*, bool))(Il2CppBase() + 0x43BEF58))(this, pauseStatus);
	}

};

}
