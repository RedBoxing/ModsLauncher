#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IslandEnemyProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IslandEnemyProcessor"));
	}

	template <typename T = uintptr_t> T& sinkInWaterEffectPefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& bananaPiratePrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& gunPiratePrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& divePiratePrefab() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& divingAttackTimesMin() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& divingAttackTimesMax() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& divePirateProbability() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& boatProbability() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& verticalBoat() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& horizontalBoat() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& verticalBoatSinkEffect() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& horizontalBoatSinkEffect() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T BeforeRoomCreated(uintptr_t room) {
		return ((T (*)(IslandEnemyProcessor*, uintptr_t))(Il2CppBase() + 0x1A45FF4))(this, room);
	}
	template <typename T = uintptr_t> static T CreateReinforcementBoat(uintptr_t enemyPrefab, uintptr_t maker, uintptr_t verticalBoat, uintptr_t horizontalBoat, uintptr_t onLand) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A45080))(0, enemyPrefab, maker, verticalBoat, horizontalBoat, onLand);
	}

};

}
