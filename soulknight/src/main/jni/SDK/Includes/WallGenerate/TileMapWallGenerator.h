#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace WallGenerate {

class TileMapWallGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WallGenerate", "TileMapWallGenerator"));
	}

	template <typename T = uintptr_t> T& wallGeneratorModel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& tilemap() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& tiles() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& DoorSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T GenerateTileWall() {
		return ((T (*)(TileMapWallGenerator*))(Il2CppBase() + 0x4365120))(this);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(TileMapWallGenerator*))(Il2CppBase() + 0x4365328))(this);
	}

};

}
