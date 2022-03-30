#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TileMapAlign
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TileMapAlign"));
	}

	template <typename T = uintptr_t> T& tile_map_obj() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& pixel2unit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& need_scale() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector2> T& size() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& temp_scale() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Start() {
		return ((T (*)(TileMapAlign*))(Il2CppBase() + 0x1E43C44))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TileMapAlign*))(Il2CppBase() + 0x1E43D78))(this);
	}

};

}
