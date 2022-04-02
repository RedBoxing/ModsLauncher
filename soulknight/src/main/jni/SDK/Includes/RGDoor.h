#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGDoor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGDoor"));
	}

	template <typename T = uintptr_t> T& the_room() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGDoor*))(Il2CppBase() + 0x2219E14))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGDoor*))(Il2CppBase() + 0x2219F24))(this);
	}
	template <typename T = void> T OpenDoor() {
		return ((T (*)(RGDoor*))(Il2CppBase() + 0x221A08C))(this);
	}
	template <typename T = void> T CloseDoor() {
		return ((T (*)(RGDoor*))(Il2CppBase() + 0x221A248))(this);
	}
	template <typename T = void> T CloseDoorCompletely() {
		return ((T (*)(RGDoor*))(Il2CppBase() + 0x221A850))(this);
	}
	template <typename T = void> T ChangeDoorColor(bool isRed) {
		return ((T (*)(RGDoor*, bool))(Il2CppBase() + 0x221A938))(this, isRed);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(RGDoor*, uintptr_t))(Il2CppBase() + 0x221AAE8))(this, other);
	}
	template <typename T = void> T OnExitDoorEvent(Il2CppString* aisleName, Il2CppVector2 player_pos) {
		return ((T (*)(RGDoor*, Il2CppString*, Il2CppVector2))(Il2CppBase() + 0x221ADB8))(this, aisleName, player_pos);
	}
	template <typename T = void> T MovePet() {
		return ((T (*)(RGDoor*))(Il2CppBase() + 0x221A40C))(this);
	}

};

}
