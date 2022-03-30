#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SBRoomObjectCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SBRoomObjectCreator"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& room2Object() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& created() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = uintptr_t> T get_roomInfo() {
		return ((T (*)(SBRoomObjectCreator*))(Il2CppBase() + 0x180B0C0))(this);
	}
	template <typename T = void> T CreateRoomObject() {
		return ((T (*)(SBRoomObjectCreator*))(Il2CppBase() + 0x180B164))(this);
	}

};

}
