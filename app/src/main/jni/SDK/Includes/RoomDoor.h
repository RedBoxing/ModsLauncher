#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomDoor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomDoor"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RoomDoor*, uintptr_t))(Il2CppBase() + 0x1BF4924))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(RoomDoor*, uintptr_t))(Il2CppBase() + 0x1BF4AFC))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(RoomDoor*, uintptr_t))(Il2CppBase() + 0x1BF4C88))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(RoomDoor*))(Il2CppBase() + 0x1BF4E08))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(RoomDoor*))(Il2CppBase() + 0x1BF4E68))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(RoomDoor*))(Il2CppBase() + 0x1BF4EF4))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(RoomDoor*))(Il2CppBase() + 0x1BF4F54))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(RoomDoor*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1BF4FB4))(this, controller, ext_info);
	}

};

}
