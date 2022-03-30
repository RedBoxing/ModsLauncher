#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicEntranceGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicEntranceGenerator"));
	}

	template <typename T = int32_t> T& bossRoomType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& entranceRoomPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& probability() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _hasEntranceRoom() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _entranceModel() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnInstantiateRoom(uintptr_t room) {
		return ((T (*)(RelicEntranceGenerator*, uintptr_t))(Il2CppBase() + 0x42B7C3C))(this, room);
	}
	template <typename T = void> T OnAfterGenerateRoomPattern(uintptr_t mapManager) {
		return ((T (*)(RelicEntranceGenerator*, uintptr_t))(Il2CppBase() + 0x42B7CE0))(this, mapManager);
	}
	template <typename T = bool> T TryGetBossRoomPosition(uintptr_t roomRelation, int32_t bossRelationIndex, uintptr_t* xIndex, uintptr_t* yIndex) {
		return ((T (*)(RelicEntranceGenerator*, uintptr_t, int32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x42B7EA0))(this, roomRelation, bossRelationIndex, xIndex, yIndex);
	}
	template <typename T = bool> T TryGetEntranceIndex(uintptr_t roomRelation, int32_t bossX, int32_t bossY, uintptr_t* entranceModel) {
		return ((T (*)(RelicEntranceGenerator*, uintptr_t, int32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x42B8058))(this, roomRelation, bossX, bossY, entranceModel);
	}
	template <typename T = void> T GenerateRoom(uintptr_t mapManagerLevel, uintptr_t entranceModel) {
		return ((T (*)(RelicEntranceGenerator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B8368))(this, mapManagerLevel, entranceModel);
	}

};

}
