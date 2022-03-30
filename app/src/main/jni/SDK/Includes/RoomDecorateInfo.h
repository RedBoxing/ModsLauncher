#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomDecorateInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomDecorateInfo"));
	}

	template <typename T = Il2CppString*> T& room_decorate_name() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
