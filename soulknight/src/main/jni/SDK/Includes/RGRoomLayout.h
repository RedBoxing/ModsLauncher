#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGRoomLayout
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGRoomLayout"));
	}

	template <typename T = int32_t> static T& EdgeLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& size() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& rect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& rg_random() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& tiles() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& hasWallSprite() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& onInstantiateObstacle() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& wallLevel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& boxLevel() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = uintptr_t> T get_room() {
		return ((T (*)(RGRoomLayout*))(Il2CppBase() + 0x1C71360))(this);
	}
	template <typename T = uintptr_t> T get_mapManagerLevel() {
		return ((T (*)(RGRoomLayout*))(Il2CppBase() + 0x1C713F0))(this);
	}
	template <typename T = int32_t> T get_width() {
		return ((T (*)(RGRoomLayout*))(Il2CppBase() + 0x1C7146C))(this);
	}
	template <typename T = int32_t> T get_height() {
		return ((T (*)(RGRoomLayout*))(Il2CppBase() + 0x1C714EC))(this);
	}
	template <typename T = Il2CppVector2> T get_basePoint() {
		return ((T (*)(RGRoomLayout*))(Il2CppBase() + 0x1C7156C))(this);
	}
	template <typename T = void> T add_onInstantiateObstacle(void* value) {
		return ((T (*)(RGRoomLayout*, void*))(Il2CppBase() + 0x1C71628))(this, value);
	}
	template <typename T = void> T remove_onInstantiateObstacle(void* value) {
		return ((T (*)(RGRoomLayout*, void*))(Il2CppBase() + 0x1C71714))(this, value);
	}
	template <typename T = void> T CreateRoom(uintptr_t size, int32_t wallLevel, int32_t boxLevel, uintptr_t rg_random) {
		return ((T (*)(RGRoomLayout*, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x1C71800))(this, size, wallLevel, boxLevel, rg_random);
	}
	template <typename T = void> T Init(uintptr_t size, int32_t wallLevel, int32_t boxLevel, uintptr_t rg_random) {
		return ((T (*)(RGRoomLayout*, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x1C71940))(this, size, wallLevel, boxLevel, rg_random);
	}
	template <typename T = void> T SetupTilesInfo() {
		return ((T (*)(RGRoomLayout*))(Il2CppBase() + 0x1C72264))(this);
	}
	template <typename T = void> T CreateRoomObstacle() {
		return ((T (*)(RGRoomLayout*))(Il2CppBase() + 0x1C71C78))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_bPoints() {
		return ((T (*)(RGRoomLayout*))(Il2CppBase() + 0x1C71C04))(this);
	}
	template <typename T = void> T CreatePatternRoom() {
		return ((T (*)(RGRoomLayout*))(Il2CppBase() + 0x1C73514))(this);
	}
	template <typename T = void> T ScanBPoint() {
		return ((T (*)(RGRoomLayout*))(Il2CppBase() + 0x1C73860))(this);
	}
	template <typename T = void> T CreateRandomRoom() {
		return ((T (*)(RGRoomLayout*))(Il2CppBase() + 0x1C73A50))(this);
	}
	template <typename T = void> T CreateFloor() {
		return ((T (*)(RGRoomLayout*))(Il2CppBase() + 0x1C735A4))(this);
	}
	template <typename T = void> static T CreateFloor_1(uintptr_t param) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1C73D40))(0, param);
	}
	template <typename T = int32_t> T GetRepeatValue(int32_t x, int32_t y, uintptr_t floorsIndex) {
		return ((T (*)(RGRoomLayout*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x1C741C0))(this, x, y, floorsIndex);
	}
	template <typename T = void> T CreateAisle() {
		return ((T (*)(RGRoomLayout*))(Il2CppBase() + 0x1C74480))(this);
	}
	template <typename T = void> static T CreateAisle_1(uintptr_t room, uintptr_t param, void* onCreateWall) {
		return ((T (*)(void *, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x1C74630))(0, room, param, onCreateWall);
	}
	template <typename T = void> static T CreateBurner(uintptr_t tiles, uintptr_t room, uintptr_t direction) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C748B8))(0, tiles, room, direction);
	}
	template <typename T = void> T CreateWall() {
		return ((T (*)(RGRoomLayout*))(Il2CppBase() + 0x1C73758))(this);
	}
	template <typename T = void> static T CreateWall_1(int32_t width, int32_t height, void* onCreateWall) {
		return ((T (*)(void *, int32_t, int32_t, void*))(Il2CppBase() + 0x1C74F40))(0, width, height, onCreateWall);
	}
	template <typename T = void> T CreateWall_2(Il2CppVector3 position) {
		return ((T (*)(RGRoomLayout*, Il2CppVector3))(Il2CppBase() + 0x1C75310))(this, position);
	}
	template <typename T = void> T CreateVacantWall() {
		return ((T (*)(RGRoomLayout*))(Il2CppBase() + 0x1C75674))(this);
	}
	template <typename T = uintptr_t> static T CreateVacantWall_1(uintptr_t room) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1C75774))(0, room);
	}
	template <typename T = void> static T CreateVacantWall_2(int32_t width, int32_t height, int32_t wallBreadth, uintptr_t roomOpenDirection, uintptr_t vacantWallGroup) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C759C4))(0, width, height, wallBreadth, roomOpenDirection, vacantWallGroup);
	}
	template <typename T = void> static T CreateVacantWall_3(Il2CppVector2 size, Il2CppVector2 position, uintptr_t wallGroup) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x1C75F94))(0, size, position, wallGroup);
	}
	template <typename T = void> T CreateRandomLayout() {
		return ((T (*)(RGRoomLayout*))(Il2CppBase() + 0x1C76220))(this);
	}
	template <typename T = void> T InstantiateObstacle(int32_t index, Il2CppVector3 localPosition) {
		return ((T (*)(RGRoomLayout*, int32_t, Il2CppVector3))(Il2CppBase() + 0x1C77244))(this, index, localPosition);
	}
	template <typename T = bool> T IsWallPlacable(int32_t x, int32_t y, int32_t width, int32_t height) {
		return ((T (*)(RGRoomLayout*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1C77068))(this, x, y, width, height);
	}
	template <typename T = void> T GenHorizontalValues() {
		return ((T (*)(RGRoomLayout*))(Il2CppBase() + 0x1C72EA4))(this);
	}
	template <typename T = void> T GenVerticalValues() {
		return ((T (*)(RGRoomLayout*))(Il2CppBase() + 0x1C72840))(this);
	}
	template <typename T = void> T GenAreaValues() {
		return ((T (*)(RGRoomLayout*))(Il2CppBase() + 0x1C722D4))(this);
	}
	template <typename T = int32_t> T GetValue(int32_t x, int32_t y) {
		return ((T (*)(RGRoomLayout*, int32_t, int32_t))(Il2CppBase() + 0x1C774C0))(this, x, y);
	}
	template <typename T = void> T CreateWallb__35_0(int32_t x, int32_t y, Il2CppVector3 pos, uintptr_t dir) {
		return ((T (*)(RGRoomLayout*, int32_t, int32_t, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x1C77674))(this, x, y, pos, dir);
	}

};

}
