#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGRoomX
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGRoomX"));
	}

	template <typename T = int32_t> static T& EdgeLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& process() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& rect() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& room_width() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& room_height() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& roomType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& room_type() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& canGenerateIceFloor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& wall_level() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& obstacle_level() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& random_room() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& e_maker() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& room_x() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& room_y() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& openDirection() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& onRoomClear() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& map() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& floor_list() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& wall_group() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& floor_group() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& enemy_group() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& dir2Entrances() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& door_open() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& special_box_rate() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& create_with_close_state() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& roomScore() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> static T& _ObjCheckMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> T& onRoomDetermineSize() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = void*> T& onRoomCreated() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = void*> T& beforeRoomCreated() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = void*> T& onRoomInstantiateObstacle() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& roomLayout() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& enemyRoomReward() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& customRoomLayout() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = void*> T& onGetMapIcon() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = void*> T& onRoomStart() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = void*> T& onRoomEnd() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& room_extra_data() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& cast_hits() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& scan_width() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& scan_height() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& step() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector2> static T& special_obj_offset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T add_onRoomDetermineSize(void* value) {
		return ((T (*)(RGRoomX*, void*))(Il2CppBase() + 0x1C77680))(this, value);
	}
	template <typename T = void> T remove_onRoomDetermineSize(void* value) {
		return ((T (*)(RGRoomX*, void*))(Il2CppBase() + 0x1C7776C))(this, value);
	}
	template <typename T = void> T add_onRoomCreated(void* value) {
		return ((T (*)(RGRoomX*, void*))(Il2CppBase() + 0x1C77858))(this, value);
	}
	template <typename T = void> T remove_onRoomCreated(void* value) {
		return ((T (*)(RGRoomX*, void*))(Il2CppBase() + 0x1C77944))(this, value);
	}
	template <typename T = void> T add_beforeRoomCreated(void* value) {
		return ((T (*)(RGRoomX*, void*))(Il2CppBase() + 0x1C77A30))(this, value);
	}
	template <typename T = void> T remove_beforeRoomCreated(void* value) {
		return ((T (*)(RGRoomX*, void*))(Il2CppBase() + 0x1C77B1C))(this, value);
	}
	template <typename T = void> T add_onRoomInstantiateObstacle(void* value) {
		return ((T (*)(RGRoomX*, void*))(Il2CppBase() + 0x1C77C08))(this, value);
	}
	template <typename T = void> T remove_onRoomInstantiateObstacle(void* value) {
		return ((T (*)(RGRoomX*, void*))(Il2CppBase() + 0x1C77CF4))(this, value);
	}
	template <typename T = void> T add_onRoomStart(void* value) {
		return ((T (*)(RGRoomX*, void*))(Il2CppBase() + 0x1C77DE0))(this, value);
	}
	template <typename T = void> T remove_onRoomStart(void* value) {
		return ((T (*)(RGRoomX*, void*))(Il2CppBase() + 0x1C77ED0))(this, value);
	}
	template <typename T = void> T add_onRoomEnd(void* value) {
		return ((T (*)(RGRoomX*, void*))(Il2CppBase() + 0x1C77FC0))(this, value);
	}
	template <typename T = void> T remove_onRoomEnd(void* value) {
		return ((T (*)(RGRoomX*, void*))(Il2CppBase() + 0x1C780B0))(this, value);
	}
	template <typename T = int32_t> static T get_ObjCheckMask() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C781A0))(0);
	}
	template <typename T = uintptr_t> T get_mapManagerLevel() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C782D0))(this);
	}
	template <typename T = bool> T get_IsRoomCleared() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C78330))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C78398))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C78A10))(this);
	}
	template <typename T = void> T StartRoom(Il2CppVector2 position) {
		return ((T (*)(RGRoomX*, Il2CppVector2))(Il2CppBase() + 0x1C78E1C))(this, position);
	}
	template <typename T = void> T StartRoom_1() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C79200))(this);
	}
	template <typename T = void> T ChangeBattleGameState() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C79850))(this);
	}
	template <typename T = bool> T get_isBattleRoom() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C79910))(this);
	}
	template <typename T = bool> T get_isBranch() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C799A8))(this);
	}
	template <typename T = void> T CloseDoor() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C79A60))(this);
	}
	template <typename T = void> T OpenDoor() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C79BFC))(this);
	}
	template <typename T = void> T ChangeDoorsColor(bool isRed) {
		return ((T (*)(RGRoomX*, bool))(Il2CppBase() + 0x1C78B04))(this, isRed);
	}
	template <typename T = void> T CloseDoorCompletely() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C79D9C))(this);
	}
	template <typename T = void> T ClearRoom() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C79F38))(this);
	}
	template <typename T = bool> T IsClear() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C7A2F8))(this);
	}
	template <typename T = void> T CreateRoomSpecialObject() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C7A3A0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetChestArr() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C7A588))(this);
	}
	template <typename T = void> T GetRoomReward() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C7A634))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(RGRoomX*, int32_t))(Il2CppBase() + 0x1C7B120))(this, seed);
	}
	template <typename T = void> T RollRoomConfig() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C7B6E4))(this);
	}
	template <typename T = uintptr_t> T GetMinimapSprite(uintptr_t map) {
		return ((T (*)(RGRoomX*, uintptr_t))(Il2CppBase() + 0x1C7BF7C))(this, map);
	}
	template <typename T = void> T ForceClearRoom() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C7C3C8))(this);
	}
	template <typename T = void> T SetUpLevelSpecial() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C78CA8))(this);
	}
	template <typename T = void> T InitRoomExtraData() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C7C52C))(this);
	}
	template <typename T = uintptr_t> T GetRoomExtraData() {
		return ((T (*)(RGRoomX*))(Il2CppBase() + 0x1C7C6EC))(this);
	}
	template <typename T = Il2CppVector2> T GetRandomEmptyPos(uintptr_t* isValid) {
		return ((T (*)(RGRoomX*, uintptr_t*))(Il2CppBase() + 0x1C7C75C))(this, isValid);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T GetRoomEmptyPosition(uintptr_t boxCastSize, Il2CppVector2 specialObjOffset, int32_t verticalStartOffset) {
		return ((T (*)(RGRoomX*, uintptr_t, Il2CppVector2, int32_t))(Il2CppBase() + 0x1C7CE34))(this, boxCastSize, specialObjOffset, verticalStartOffset);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> static T GetRoomEmptyPosition_1(Il2CppVector2 roomWorldPosition, uintptr_t boxCastSize, Il2CppVector2 specialObjOffset, uintptr_t roomSize, int32_t verticalStartOffset) {
		return ((T (*)(void *, Il2CppVector2, uintptr_t, Il2CppVector2, uintptr_t, int32_t))(Il2CppBase() + 0x1C7C990))(0, roomWorldPosition, boxCastSize, specialObjOffset, roomSize, verticalStartOffset);
	}
	template <typename T = void> T RemoveEmptyPointAfterSpecialObj(Il2CppVector2 vec2, Il2CppList<uintptr_t>* point_list) {
		return ((T (*)(RGRoomX*, Il2CppVector2, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1C7D0E8))(this, vec2, point_list);
	}
	template <typename T = void> T OnSetRGRandomSeedb__74_0(uintptr_t obstacle) {
		return ((T (*)(RGRoomX*, uintptr_t))(Il2CppBase() + 0x1C7D5C8))(this, obstacle);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(RGRoomX*, int32_t))(Il2CppBase() + 0x1C7D63C))(this, P0);
	}

};

}
