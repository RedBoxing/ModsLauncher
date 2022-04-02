#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomSpecialObjectCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomSpecialObjectCreator"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& objectTypes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& createdObjects() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CreateSpecialObjet(uintptr_t mapManagerLevel, uintptr_t room) {
		return ((T (*)(RoomSpecialObjectCreator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1802778))(this, mapManagerLevel, room);
	}
	template <typename T = void> T CreateCage(uintptr_t mapManagerLevel, uintptr_t room) {
		return ((T (*)(RoomSpecialObjectCreator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1802888))(this, mapManagerLevel, room);
	}

};

}
