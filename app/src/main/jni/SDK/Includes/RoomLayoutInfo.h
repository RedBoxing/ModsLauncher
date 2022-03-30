#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomLayoutInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomLayoutInfo"));
	}

	template <typename T = uintptr_t> T& roomType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _room() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& crossValues() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& areaValues() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_room() {
		return ((T (*)(RoomLayoutInfo*))(Il2CppBase() + 0x17FAA3C))(this);
	}
	template <typename T = void> T set_room(uintptr_t value) {
		return ((T (*)(RoomLayoutInfo*, uintptr_t))(Il2CppBase() + 0x17FAA9C))(this, value);
	}
	template <typename T = void> T SetRoom(uintptr_t room) {
		return ((T (*)(RoomLayoutInfo*, uintptr_t))(Il2CppBase() + 0x17FAB1C))(this, room);
	}
	template <typename T = uintptr_t> T GetCrossValues(uintptr_t tiles) {
		return ((T (*)(RoomLayoutInfo*, uintptr_t))(Il2CppBase() + 0x17FAC84))(this, tiles);
	}
	template <typename T = void> T GetAreaValues(uintptr_t tiles) {
		return ((T (*)(RoomLayoutInfo*, uintptr_t))(Il2CppBase() + 0x17FB754))(this, tiles);
	}
	template <typename T = int32_t> T GetValue(uintptr_t values, int32_t x, int32_t y) {
		return ((T (*)(RoomLayoutInfo*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17FBBF4))(this, values, x, y);
	}
	template <typename T = uintptr_t> T GetValue_1(uintptr_t values, int32_t x, int32_t y) {
		return ((T (*)(RoomLayoutInfo*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17FBD3C))(this, values, x, y);
	}

};

}
