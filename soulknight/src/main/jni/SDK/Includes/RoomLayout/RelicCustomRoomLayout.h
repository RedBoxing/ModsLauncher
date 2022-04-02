#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RoomLayout {

class RelicCustomRoomLayout
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RoomLayout", "RelicCustomRoomLayout"));
	}

	template <typename T = int32_t> T& emptyIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& hollowIndex() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& obstacleBoxIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& awardBoxIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& relicFloorPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& floorPositionOffset() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& obstacleBox() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& awardBox() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& levelPatternConfig() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& processRoomType() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& brazierPrefab() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& obstacles() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _mapModels() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RelicCustomRoomLayout*))(Il2CppBase() + 0x1BF8728))(this);
	}
	template <typename T = void> T CreateRoom(uintptr_t room) {
		return ((T (*)(RelicCustomRoomLayout*, uintptr_t))(Il2CppBase() + 0x1BF87F4))(this, room);
	}
	template <typename T = bool> T CanProcess(uintptr_t room) {
		return ((T (*)(RelicCustomRoomLayout*, uintptr_t))(Il2CppBase() + 0x1BFC33C))(this, room);
	}
	template <typename T = void> T InstantiateBrazier(uintptr_t room, Il2CppArray<uintptr_t>* emptyPositions) {
		return ((T (*)(RelicCustomRoomLayout*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1BFA834))(this, room, emptyPositions);
	}
	template <typename T = void> T InstantiateObstacle(uintptr_t room, Il2CppArray<uintptr_t>* emptyPositions) {
		return ((T (*)(RelicCustomRoomLayout*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1BFB62C))(this, room, emptyPositions);
	}

};

}
