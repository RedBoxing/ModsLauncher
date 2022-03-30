#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomDecorateEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomDecorateEffect"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(RoomDecorateEffect*))(Il2CppBase() + 0x1BF4218))(this);
	}
	template <typename T = void> T OnDecorated(uintptr_t decorate) {
		return ((T (*)(RoomDecorateEffect*, uintptr_t))(Il2CppBase() + 0x1BF42E0))(this, decorate);
	}
	template <typename T = void> T OnUnDecorated(uintptr_t decorate) {
		return ((T (*)(RoomDecorateEffect*, uintptr_t))(Il2CppBase() + 0x1BF43E0))(this, decorate);
	}

};

}
