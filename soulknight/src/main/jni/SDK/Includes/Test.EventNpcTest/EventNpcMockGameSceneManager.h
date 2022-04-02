#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Test.EventNpcTest {

class EventNpcMockGameSceneManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Test.EventNpcTest", "EventNpcMockGameSceneManager"));
	}


	template <typename T = void> T Awake() {
		return ((T (*)(EventNpcMockGameSceneManager*))(Il2CppBase() + 0x43BE994))(this);
	}

};

}
