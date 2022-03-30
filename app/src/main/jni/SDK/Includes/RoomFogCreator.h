#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomFogCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomFogCreator"));
	}

	template <typename T = int32_t> T& width() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& height() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& proto() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RoomFogCreator*))(Il2CppBase() + 0x1BF6B4C))(this);
	}
	template <typename T = uintptr_t> T CreatingFog() {
		return ((T (*)(RoomFogCreator*))(Il2CppBase() + 0x1BF6D50))(this);
	}
	template <typename T = void> T CreateFog() {
		return ((T (*)(RoomFogCreator*))(Il2CppBase() + 0x1BF6E30))(this);
	}

};

}
