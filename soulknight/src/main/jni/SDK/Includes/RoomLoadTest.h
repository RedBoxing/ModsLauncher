#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomLoadTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomLoadTest"));
	}

	template <typename T = int32_t> T& roomCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RoomLoadTest*))(Il2CppBase() + 0x17FBE90))(this);
	}
	template <typename T = void> T LoadRoom() {
		return ((T (*)(RoomLoadTest*))(Il2CppBase() + 0x17FBEEC))(this);
	}
	template <typename T = uintptr_t> T CreateRoom() {
		return ((T (*)(RoomLoadTest*))(Il2CppBase() + 0x17FBF68))(this);
	}
	template <typename T = uintptr_t> T LoadingRoomBundle(Il2CppString* roomName) {
		return ((T (*)(RoomLoadTest*, Il2CppString*))(Il2CppBase() + 0x17FC048))(this, roomName);
	}

};

}
