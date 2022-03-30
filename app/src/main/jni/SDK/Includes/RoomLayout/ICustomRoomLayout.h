#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RoomLayout {

class ICustomRoomLayout
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RoomLayout", "ICustomRoomLayout"));
	}


	template <typename T = void> T CreateRoom(uintptr_t room) {
		return ((T (*)(ICustomRoomLayout*, uintptr_t))(Il2CppBase() + 0x0))(this, room);
	}
	template <typename T = bool> T CanProcess(uintptr_t room) {
		return ((T (*)(ICustomRoomLayout*, uintptr_t))(Il2CppBase() + 0x0))(this, room);
	}

};

}
