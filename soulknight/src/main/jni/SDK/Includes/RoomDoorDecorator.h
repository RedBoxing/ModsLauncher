#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomDoorDecorator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomDoorDecorator"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& doorDirObjDic() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RoomDoorDecorator*))(Il2CppBase() + 0x1BF5034))(this);
	}
	template <typename T = void> T OnCreated(uintptr_t room) {
		return ((T (*)(RoomDoorDecorator*, uintptr_t))(Il2CppBase() + 0x1BF516C))(this, room);
	}

};

}
