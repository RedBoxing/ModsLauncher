#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace WallGenerate {

class WallGeneratorModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WallGenerate", "WallGeneratorModel"));
	}

	template <typename T = uintptr_t> T& size() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& thickNess() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& cornerSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& wallDirection() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& doorDirection() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& random() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& tileCenterPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T GenerateWall(Il2CppArray<uintptr_t>* tiles, uintptr_t tilemap) {
		return ((T (*)(WallGeneratorModel*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x43651AC))(this, tiles, tilemap);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetRandomTiles(int32_t tileCount, Il2CppArray<uintptr_t>* tileModels) {
		return ((T (*)(WallGeneratorModel*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4366218))(this, tileCount, tileModels);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetTilePositions(int32_t wallTileCount) {
		return ((T (*)(WallGeneratorModel*, int32_t))(Il2CppBase() + 0x436579C))(this, wallTileCount);
	}
	template <typename T = int32_t> T GetWallTileCount() {
		return ((T (*)(WallGeneratorModel*))(Il2CppBase() + 0x43656A8))(this);
	}

};

}
