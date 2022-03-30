#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IslandBossRoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IslandBossRoom"));
	}

	template <typename T = float> T& autoLockCannonDistance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& supplymentBoatPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& cannonBallInterval() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& reinforcementCharacter() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& reinforcementCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& reinforcementRefreshTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& horizontalBoat() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& verticalBoat() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _supplyment_boat_control() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _reinforcement_control() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& _start() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _this_room() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& bossList() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _cachedHitResult() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Start() {
		return ((T (*)(IslandBossRoom*))(Il2CppBase() + 0x1A4366C))(this);
	}
	template <typename T = void> T OnRoomClear(uintptr_t room) {
		return ((T (*)(IslandBossRoom*, uintptr_t))(Il2CppBase() + 0x1A43CD0))(this, room);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(IslandBossRoom*))(Il2CppBase() + 0x1A43DA0))(this);
	}
	template <typename T = void> T HelpLockCannon(uintptr_t player) {
		return ((T (*)(IslandBossRoom*, uintptr_t))(Il2CppBase() + 0x1A4481C))(this, player);
	}

};

}
