#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwampWallGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwampWallGenerator"));
	}

	template <typename T = uintptr_t> T& wallTilePrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& treeTiles() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& floorTile() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _wallTilemap() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _topTilemap() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _floorTilemap() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T BeforeRoomCreated(uintptr_t room) {
		return ((T (*)(SwampWallGenerator*, uintptr_t))(Il2CppBase() + 0x18BDBC4))(this, room);
	}
	template <typename T = void> T CreateAisleWall(uintptr_t aisleDirection, uintptr_t aisle, int32_t thickness, uintptr_t random) {
		return ((T (*)(SwampWallGenerator*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x18BE004))(this, aisleDirection, aisle, thickness, random);
	}
	template <typename T = void> T CreateRoomWall(uintptr_t room, int32_t thickness, uintptr_t random) {
		return ((T (*)(SwampWallGenerator*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x18BE408))(this, room, thickness, random);
	}
	template <typename T = void> T GenerateWall(int32_t tileCount, Il2CppArray<uintptr_t>* tilePositions, uintptr_t random) {
		return ((T (*)(SwampWallGenerator*, int32_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x18BE6F8))(this, tileCount, tilePositions, random);
	}

};

}
