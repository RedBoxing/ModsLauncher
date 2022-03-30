#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IceCaveEntranceGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IceCaveEntranceGenerator"));
	}

	template <typename T = uintptr_t> T& iceCaveConfig() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _entranceModel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _cageObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _obstacles() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _bossRoom() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _entranceRoom() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _roomCreateCount() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _hasEntranceRoom() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T OnRoomCreated(uintptr_t room) {
		return ((T (*)(IceCaveEntranceGenerator*, uintptr_t))(Il2CppBase() + 0x19B7C88))(this, room);
	}
	template <typename T = void> T OnAfterGenerateRoomPattern(uintptr_t mapManagerLevel) {
		return ((T (*)(IceCaveEntranceGenerator*, uintptr_t))(Il2CppBase() + 0x19B80D0))(this, mapManagerLevel);
	}
	template <typename T = void> T OnInstantiateRoom(uintptr_t room) {
		return ((T (*)(IceCaveEntranceGenerator*, uintptr_t))(Il2CppBase() + 0x19B8C58))(this, room);
	}
	template <typename T = void> T OnInstantiateGate(uintptr_t gate) {
		return ((T (*)(IceCaveEntranceGenerator*, uintptr_t))(Il2CppBase() + 0x19B8DF0))(this, gate);
	}
	template <typename T = Il2CppVector3> T GetBossDoorCenter() {
		return ((T (*)(IceCaveEntranceGenerator*))(Il2CppBase() + 0x19B90BC))(this);
	}
	template <typename T = Il2CppVector3> T GetEntranceDoorCenter() {
		return ((T (*)(IceCaveEntranceGenerator*))(Il2CppBase() + 0x19B93A4))(this);
	}
	template <typename T = Il2CppVector3> static T GetDoorCenter(uintptr_t direction, uintptr_t room) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x19B9118))(0, direction, room);
	}
	template <typename T = void> T OnShowGate() {
		return ((T (*)(IceCaveEntranceGenerator*))(Il2CppBase() + 0x19B9400))(this);
	}
	template <typename T = void> T GenerateRoom(uintptr_t mapManagerLevel, uintptr_t entranceModel) {
		return ((T (*)(IceCaveEntranceGenerator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19B8764))(this, mapManagerLevel, entranceModel);
	}
	template <typename T = void> T OnEntranceRoomCreate(uintptr_t roomX) {
		return ((T (*)(IceCaveEntranceGenerator*, uintptr_t))(Il2CppBase() + 0x19B94F8))(this, roomX);
	}
	template <typename T = void> T CreateObstacle() {
		return ((T (*)(IceCaveEntranceGenerator*))(Il2CppBase() + 0x19B7D54))(this);
	}
	template <typename T = Il2CppVector3> T GetEntranceObstaclePosition(uintptr_t direction, int32_t index, int32_t length) {
		return ((T (*)(IceCaveEntranceGenerator*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x19B9588))(this, direction, index, length);
	}
	template <typename T = bool> T TryGetBossRoomPosition(uintptr_t roomRelation, int32_t bossRelationIndex, uintptr_t* xIndex, uintptr_t* yIndex) {
		return ((T (*)(IceCaveEntranceGenerator*, uintptr_t, int32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x19B82AC))(this, roomRelation, bossRelationIndex, xIndex, yIndex);
	}
	template <typename T = bool> T TryGetEntranceIndex(uintptr_t roomRelation, int32_t bossX, int32_t bossY, uintptr_t* entranceModel) {
		return ((T (*)(IceCaveEntranceGenerator*, uintptr_t, int32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x19B845C))(this, roomRelation, bossX, bossY, entranceModel);
	}
	template <typename T = void> T OnInstantiateGateb__11_0(uintptr_t npcObject) {
		return ((T (*)(IceCaveEntranceGenerator*, uintptr_t))(Il2CppBase() + 0x19B96EC))(this, npcObject);
	}

};

}
