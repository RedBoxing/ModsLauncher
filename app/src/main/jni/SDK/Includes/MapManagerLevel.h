#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MapManagerLevel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapManagerLevel"));
	}

	template <typename T = int32_t> T& room_count() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _baseManager() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& chest_level() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& this_room_x() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& this_room_y() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& the_room() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& room_relation() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& map_list() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& map_long() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& special_rooms() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& has_badass() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& room_start_distributions() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& startRoomImpartType() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& room_end_list() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& room_chest_distributions() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& chestRoomImpartType() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& room_special_distributions() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& specialRoomImpartType() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& floor_list() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& useWeightedPattern() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& floorWeight() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = int32_t> T& floorChangeNeedCount() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& baseTileChangeRate() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& wall_list() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& obstacle_list() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = bool> T& useCustomObstacleList() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = bool> T& use_new_floor_pattern() {
		return *(T*)((uintptr_t)this + 0x161);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& enemy_infos() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& onManagerInstantiate() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& onDetermineRoomSize() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& onRoomCreated() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& beforeRoomCreated() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& afterRoomCreatedEvent() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& onAfterGenerateRoomPattern() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& onRoomInstantiate() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& onRoomInstantiateObstacle() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& alwaysRandomRoom() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& ran_room_probability() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& obstacleProcessor() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _specialRooms() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _chestRooms() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _startRooms() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _walls() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _obstacles() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& _enemyRoomReward() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& _customRoomLayout() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = int32_t> T& _loadedRoomCount() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& branch_room_list() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = int32_t> T& _createRoomCount() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = Il2CppList<int32_t>*> T& usedRoom() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uintptr_t> T& _customObstacleList() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = bool> T& _additionDamageCalculated() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = int32_t> T& _additionDamage() {
		return *(T*)((uintptr_t)this + 0x224);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x430A0F0))(0);
	}
	template <typename T = uintptr_t> T get_baseMng() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430A1AC))(this);
	}
	template <typename T = uintptr_t> T GetComponentFromManager() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_chestLevel() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430A304))(this);
	}
	template <typename T = Il2CppString*> T get_levelText() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430A370))(this);
	}
	template <typename T = bool> T get_isPrefab() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430A3D8))(this);
	}
	template <typename T = uintptr_t> T get_bgm() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x4302808))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_specialRooms() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430452C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_chestRooms() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430A504))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_startRooms() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430A6F0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_endRooms() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x4304418))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_floors() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430A9B4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_walls() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430AAC8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_obstacles() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430ABD8))(this);
	}
	template <typename T = bool> T IsArrayEmpty(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(MapManagerLevel*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x430A92C))(this, array);
	}
	template <typename T = bool> T IsArrayEmpty_1(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(MapManagerLevel*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x430A47C))(this, array);
	}
	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x430ACE8))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430AEA0))(this);
	}
	template <typename T = void> T CreateMap() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430B43C))(this);
	}
	template <typename T = void> T HandleTroopRoom() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430CAE8))(this);
	}
	template <typename T = int32_t> T get_BossRoomRelationIndex() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430CB88))(this);
	}
	template <typename T = bool> T IsInMapList(int32_t tx, int32_t ty) {
		return ((T (*)(MapManagerLevel*, int32_t, int32_t))(Il2CppBase() + 0x430C8CC))(this, tx, ty);
	}
	template <typename T = void> T AddBranchRoom(Il2CppVector2 branch_room) {
		return ((T (*)(MapManagerLevel*, Il2CppVector2))(Il2CppBase() + 0x430CA24))(this, branch_room);
	}
	template <typename T = bool> T IsBranchRoom(Il2CppVector2 room_pos) {
		return ((T (*)(MapManagerLevel*, Il2CppVector2))(Il2CppBase() + 0x430CBEC))(this, room_pos);
	}
	template <typename T = void> T CheckRoomNull(uintptr_t roomProto, Il2CppString* info) {
		return ((T (*)(MapManagerLevel*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x430CCE8))(this, roomProto, info);
	}
	template <typename T = uintptr_t> T CreateRoom(int32_t vx, int32_t vy, int32_t room_type) {
		return ((T (*)(MapManagerLevel*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x430CE0C))(this, vx, vy, room_type);
	}
	template <typename T = void> T UpdateRoomDirection(int32_t vx, int32_t vy, uintptr_t room) {
		return ((T (*)(MapManagerLevel*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x430CF28))(this, vx, vy, room);
	}
	template <typename T = uintptr_t> T InstantiateExtraRoom(uintptr_t roomPrefab, int32_t positionX, int32_t positionY) {
		return ((T (*)(MapManagerLevel*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x430D654))(this, roomPrefab, positionX, positionY);
	}
	template <typename T = uintptr_t> T LoadingRoomBundle(Il2CppString* roomName) {
		return ((T (*)(MapManagerLevel*, Il2CppString*))(Il2CppBase() + 0x430D874))(this, roomName);
	}
	template <typename T = void> T IntoAisle(int32_t value) {
		return ((T (*)(MapManagerLevel*, int32_t))(Il2CppBase() + 0x430D93C))(this, value);
	}
	template <typename T = uintptr_t> T GetRelation() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430DA04))(this);
	}
	template <typename T = int32_t> T GetRoomType() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430DA64))(this);
	}
	template <typename T = void> T SetRGRandomSeed(int32_t seed) {
		return ((T (*)(MapManagerLevel*, int32_t))(Il2CppBase() + 0x430DB38))(this, seed);
	}
	template <typename T = int32_t> T GetRandomRoomIndex() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430DED8))(this);
	}
	template <typename T = void> T HandleRoomConfig() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430B294))(this);
	}
	template <typename T = uintptr_t> T GetObstaclePrefab(int32_t obstacleIndex, uintptr_t random) {
		return ((T (*)(MapManagerLevel*, int32_t, uintptr_t))(Il2CppBase() + 0x430E048))(this, obstacleIndex, random);
	}
	template <typename T = bool> T CanInstantiateObstacle(int32_t obstacleIndex, uintptr_t random) {
		return ((T (*)(MapManagerLevel*, int32_t, uintptr_t))(Il2CppBase() + 0x430E1D0))(this, obstacleIndex, random);
	}
	template <typename T = int32_t> T GetAdditionDamage(int32_t camp) {
		return ((T (*)(MapManagerLevel*, int32_t))(Il2CppBase() + 0x430E3BC))(this, camp);
	}
	template <typename T = void> T CreateRoomb__91_0(uintptr_t room) {
		return ((T (*)(MapManagerLevel*, uintptr_t))(Il2CppBase() + 0x430E604))(this, room);
	}
	template <typename T = void> T CreateRoomb__91_1(uintptr_t room) {
		return ((T (*)(MapManagerLevel*, uintptr_t))(Il2CppBase() + 0x430E738))(this, room);
	}
	template <typename T = void> T CreateRoomb__91_2(uintptr_t room) {
		return ((T (*)(MapManagerLevel*, uintptr_t))(Il2CppBase() + 0x430E7AC))(this, room);
	}
	template <typename T = void> T CreateRoomb__91_3(uintptr_t obstacle) {
		return ((T (*)(MapManagerLevel*, uintptr_t))(Il2CppBase() + 0x430E820))(this, obstacle);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_bgm() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430E894))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_chestLevel() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430E898))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_get_levelText() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430E89C))(this);
	}
	template <typename T = void> T iFixBaseProxy_CreateMap() {
		return ((T (*)(MapManagerLevel*))(Il2CppBase() + 0x430E8A0))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetRGRandomSeed(int32_t P0) {
		return ((T (*)(MapManagerLevel*, int32_t))(Il2CppBase() + 0x430E8A4))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetAdditionDamage(int32_t P0) {
		return ((T (*)(MapManagerLevel*, int32_t))(Il2CppBase() + 0x430E8A8))(this, P0);
	}

};

}
