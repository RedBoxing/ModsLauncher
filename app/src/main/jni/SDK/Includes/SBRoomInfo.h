#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SBRoomInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SBRoomInfo"));
	}

	template <typename T = uintptr_t> T& roomType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& levelScene() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector2> T& size() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& doorDir() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& enemyRoomInfo() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
