#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MapInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapInfo"));
	}

	template <typename T = float> T& map_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& map() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& width() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& height() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
