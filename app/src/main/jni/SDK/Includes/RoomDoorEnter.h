#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomDoorEnter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomDoorEnter"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& entered_adv_tutorial() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RoomDoorEnter*, uintptr_t))(Il2CppBase() + 0x1BF5358))(this, other);
	}
	template <typename T = void> T EnterGame() {
		return ((T (*)(RoomDoorEnter*))(Il2CppBase() + 0x1BF57A0))(this);
	}
	template <typename T = void> T OnTriggerEnter2Db__2_0() {
		return ((T (*)(RoomDoorEnter*))(Il2CppBase() + 0x1BF5F3C))(this);
	}

};

}
