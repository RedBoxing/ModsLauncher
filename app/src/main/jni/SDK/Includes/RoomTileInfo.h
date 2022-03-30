#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomTileInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomTileInfo"));
	}

	template <typename T = uintptr_t> T& tileType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& horizontalVacancy() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& verticalVacancy() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& areaVacancy() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
