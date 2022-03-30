#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IslandGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IslandGenerator"));
	}

	template <typename T = uintptr_t> T& islandTileMap() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ruleTileLandBase() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ruleTileLandShore() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ruleTileSeaShore() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ruleTileMud() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& randomTileIronLand() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& ruleTilePipe() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& gasLeakPrefab() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& gasLeakProbability() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& commonFootprint() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& petFootprint() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& trashPrefab() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& maxFishingSpotCount() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& fishingSpotPrefab() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _tileMapObject() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _tileMapSea() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _tileMapLandShore() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _tileMapLandBase() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _tileMapDecorate() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _tileMapPiples() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _createdFishingSpot() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _rooms() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(IslandGenerator*))(Il2CppBase() + 0x1A4AF78))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(IslandGenerator*))(Il2CppBase() + 0x1A4B360))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(IslandGenerator*))(Il2CppBase() + 0x1A4B444))(this);
	}
	template <typename T = void> T OnCreateCharacter(uintptr_t data) {
		return ((T (*)(IslandGenerator*, uintptr_t))(Il2CppBase() + 0x1A4B528))(this, data);
	}
	template <typename T = void> T OnDetermineRoomSize(uintptr_t room) {
		return ((T (*)(IslandGenerator*, uintptr_t))(Il2CppBase() + 0x1A4B5BC))(this, room);
	}
	template <typename T = void> T CreateRoom(uintptr_t room) {
		return ((T (*)(IslandGenerator*, uintptr_t))(Il2CppBase() + 0x1A4B66C))(this, room);
	}
	template <typename T = void> T CreatePatternObstacle(uintptr_t room, uintptr_t occupied) {
		return ((T (*)(IslandGenerator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A4F974))(this, room, occupied);
	}
	template <typename T = void> T CreateIronFloor(uintptr_t room) {
		return ((T (*)(IslandGenerator*, uintptr_t))(Il2CppBase() + 0x1A4D27C))(this, room);
	}
	template <typename T = void> T CreateMudFloor(uintptr_t room) {
		return ((T (*)(IslandGenerator*, uintptr_t))(Il2CppBase() + 0x1A4D8A0))(this, room);
	}
	template <typename T = void> T CreateTrash(uintptr_t room) {
		return ((T (*)(IslandGenerator*, uintptr_t))(Il2CppBase() + 0x1A4DE5C))(this, room);
	}
	template <typename T = bool> T IsSegmentCross(Il2CppVector3 v1, Il2CppVector3 v2, Il2CppVector3 v3, Il2CppVector3 v4) {
		return ((T (*)(IslandGenerator*, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x1A4FF24))(this, v1, v2, v3, v4);
	}
	template <typename T = void> T CreatePipes(uintptr_t room, uintptr_t occupied) {
		return ((T (*)(IslandGenerator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A4E0F0))(this, room, occupied);
	}
	template <typename T = void> T _ConnectPipe(uintptr_t room, uintptr_t p1, uintptr_t p2, Il2CppList<uintptr_t>* pipePosList) {
		return ((T (*)(IslandGenerator*, uintptr_t, uintptr_t, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1A5025C))(this, room, p1, p2, pipePosList);
	}
	template <typename T = bool> T CanProcess(uintptr_t room) {
		return ((T (*)(IslandGenerator*, uintptr_t))(Il2CppBase() + 0x1A50E40))(this, room);
	}
	template <typename T = void> T OnAllRoomCreated(uintptr_t mml) {
		return ((T (*)(IslandGenerator*, uintptr_t))(Il2CppBase() + 0x1A50EB4))(this, mml);
	}

};

}
