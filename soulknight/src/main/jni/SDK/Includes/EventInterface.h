#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EventInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventInterface"));
	}


	template <typename T = void> T AddEvent() {
		return ((T (*)(EventInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T RemoveEvent() {
		return ((T (*)(EventInterface*))(Il2CppBase() + 0x0))(this);
	}

};

}
