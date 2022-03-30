#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomDecorator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomDecorator"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(RoomDecorator*))(Il2CppBase() + 0x1BF44F0))(this);
	}
	template <typename T = void> T SetDecorate(uintptr_t decorate) {
		return ((T (*)(RoomDecorator*, uintptr_t))(Il2CppBase() + 0x1BF454C))(this, decorate);
	}
	template <typename T = void> T DoDecorate() {
		return ((T (*)(RoomDecorator*))(Il2CppBase() + 0x1BF4630))(this);
	}
	template <typename T = uintptr_t> T GetDefaultDecorate() {
		return ((T (*)(RoomDecorator*))(Il2CppBase() + 0x1BF48BC))(this);
	}

};

}
