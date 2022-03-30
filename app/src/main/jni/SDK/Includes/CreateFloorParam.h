#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateFloorParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateFloorParam"));
	}

	template <typename T = uintptr_t> T& rect() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& useWeightedPattern() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& floorWeight() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& floorChangeNeedCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& baseTileChangeRate() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& use_new_floor_pattern() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& floors() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& floor_group() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& tiles() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& onCreateFloor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& onCreateAisleFloor() {
		return *(T*)((uintptr_t)this + 0x60);
	}


};

}
