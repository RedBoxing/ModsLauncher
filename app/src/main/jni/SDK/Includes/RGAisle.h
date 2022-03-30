#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGAisle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGAisle"));
	}

	template <typename T = uintptr_t> T& wall_group() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& floor_group() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& door_group() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& direction() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& the_room() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& hasWallSprite() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& floorObjs() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> T get_mapManagerLevel() {
		return ((T (*)(RGAisle*))(Il2CppBase() + 0x1BA71F0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGAisle*))(Il2CppBase() + 0x1BA72D0))(this);
	}
	template <typename T = void> T SetDirection(uintptr_t direction, uintptr_t room) {
		return ((T (*)(RGAisle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1BA73EC))(this, direction, room);
	}
	template <typename T = void> T CreateAisle(uintptr_t param, void* onCreateWall) {
		return ((T (*)(RGAisle*, uintptr_t, void*))(Il2CppBase() + 0x1BA7650))(this, param, onCreateWall);
	}
	template <typename T = void> T CreateDoor() {
		return ((T (*)(RGAisle*))(Il2CppBase() + 0x1BA7840))(this);
	}
	template <typename T = void> T CreateWall(void* onCreateWall) {
		return ((T (*)(RGAisle*, void*))(Il2CppBase() + 0x1BA7F74))(this, onCreateWall);
	}
	template <typename T = void> T CreateAisleWall(void* onCreateWall) {
		return ((T (*)(RGAisle*, void*))(Il2CppBase() + 0x1BA7B30))(this, onCreateWall);
	}
	template <typename T = void> T CreateWall_1(Il2CppVector3 position, bool isAisle) {
		return ((T (*)(RGAisle*, Il2CppVector3, bool))(Il2CppBase() + 0x1BA8584))(this, position, isAisle);
	}
	template <typename T = void> T CreateVacantWall() {
		return ((T (*)(RGAisle*))(Il2CppBase() + 0x1BA8130))(this);
	}
	template <typename T = void> T CreateVacantWall_1(Il2CppVector2 size, Il2CppVector2 position, uintptr_t parentTransform) {
		return ((T (*)(RGAisle*, Il2CppVector2, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x1BA88D8))(this, size, position, parentTransform);
	}
	template <typename T = bool> T get_horizontal() {
		return ((T (*)(RGAisle*))(Il2CppBase() + 0x1BA7990))(this);
	}
	template <typename T = int32_t> T get_length() {
		return ((T (*)(RGAisle*))(Il2CppBase() + 0x1BA7A04))(this);
	}
	template <typename T = int32_t> T get_FloorLength() {
		return ((T (*)(RGAisle*))(Il2CppBase() + 0x1BA8B40))(this);
	}
	template <typename T = void> T CreateFloor(uintptr_t param) {
		return ((T (*)(RGAisle*, uintptr_t))(Il2CppBase() + 0x1BA7AB0))(this, param);
	}
	template <typename T = void> static T CreateFloor_1(uintptr_t aisle, uintptr_t param) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1BA8D10))(0, aisle, param);
	}
	template <typename T = void> T ClearWall() {
		return ((T (*)(RGAisle*))(Il2CppBase() + 0x1BA7E50))(this);
	}
	template <typename T = void> T ClearFloor() {
		return ((T (*)(RGAisle*))(Il2CppBase() + 0x1BA8BEC))(this);
	}
	template <typename T = void> T CreateAisleb__11_0(uintptr_t aisle, int32_t x, int32_t y, Il2CppVector3 pos, int32_t index) {
		return ((T (*)(RGAisle*, uintptr_t, int32_t, int32_t, Il2CppVector3, int32_t))(Il2CppBase() + 0x1BA90E4))(this, aisle, x, y, pos, index);
	}
	template <typename T = void> T CreateAisleb__11_1(uintptr_t aisle, int32_t x, int32_t y, Il2CppVector3 position) {
		return ((T (*)(RGAisle*, uintptr_t, int32_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x1BA928C))(this, aisle, x, y, position);
	}
	template <typename T = void> T CreateWallb__13_0(uintptr_t aisle, int32_t idxX, int32_t idxY, Il2CppVector3 position) {
		return ((T (*)(RGAisle*, uintptr_t, int32_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x1BA92E4))(this, aisle, idxX, idxY, position);
	}

};

}
