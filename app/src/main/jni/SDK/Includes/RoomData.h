#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomData"));
	}

	template <typename T = uintptr_t> T& tiles() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& room_map() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
