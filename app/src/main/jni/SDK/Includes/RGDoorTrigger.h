#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGDoorTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGDoorTrigger"));
	}

	template <typename T = uintptr_t> T& the_room() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGDoorTrigger*))(Il2CppBase() + 0x221B0B4))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGDoorTrigger*, uintptr_t))(Il2CppBase() + 0x221B1AC))(this, other);
	}
	template <typename T = void> T OnEnterDoorEvent(Il2CppString* aisleName) {
		return ((T (*)(RGDoorTrigger*, Il2CppString*))(Il2CppBase() + 0x221B654))(this, aisleName);
	}

};

}
