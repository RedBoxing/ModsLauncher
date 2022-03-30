#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ProcessorOfRoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProcessorOfRoom"));
	}

	template <typename T = uintptr_t> T& sinkInWaterEffectPefab() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& bananaPiratePrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& gunPiratePrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& divePiratePrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& divingAttackTimesMin() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& divingAttackTimesMax() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& divePirateProbability() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& boatProbability() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& verticalBoat() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& horizontalBoat() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& verticalBoatSinkEffect() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& horizontalBoatSinkEffect() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& enemiesOnBoat() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& enemiesDive() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& availableShore() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& enemiesToWake() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& oriEnemiesThisWave() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& boatCreated() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& UsedWaterPosition() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T OnRoomStart() {
		return ((T (*)(ProcessorOfRoom*))(Il2CppBase() + 0x1A4648C))(this);
	}
	template <typename T = uintptr_t> T OnCreateEnemy(uintptr_t e, uintptr_t room) {
		return ((T (*)(ProcessorOfRoom*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A46620))(this, e, room);
	}
	template <typename T = void> T ProcessEnemyShow(uintptr_t em, uintptr_t enemyController, uintptr_t random) {
		return ((T (*)(ProcessorOfRoom*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A46804))(this, em, enemyController, random);
	}
	template <typename T = bool> T IsSetEnemyHide(uintptr_t enemyController) {
		return ((T (*)(ProcessorOfRoom*, uintptr_t))(Il2CppBase() + 0x1A46F58))(this, enemyController);
	}
	template <typename T = void> T BeforeCreatePart(uintptr_t em, uintptr_t random, int32_t part) {
		return ((T (*)(ProcessorOfRoom*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A47088))(this, em, random, part);
	}
	template <typename T = void> T AfterCreatePart(uintptr_t enemyMaker, uintptr_t random, int32_t part) {
		return ((T (*)(ProcessorOfRoom*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A47250))(this, enemyMaker, random, part);
	}
	template <typename T = void> T TryGenBoat(uintptr_t em, uintptr_t random, uintptr_t enemyController, int32_t totalEnemyCount) {
		return ((T (*)(ProcessorOfRoom*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A4767C))(this, em, random, enemyController, totalEnemyCount);
	}
	template <typename T = void> T EnemiesDive(uintptr_t enemyMaker, uintptr_t random) {
		return ((T (*)(ProcessorOfRoom*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A47A08))(this, enemyMaker, random);
	}
	template <typename T = void> T CreateBoats(uintptr_t enemyMaker, uintptr_t random) {
		return ((T (*)(ProcessorOfRoom*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A48A9C))(this, enemyMaker, random);
	}
	template <typename T = bool> T _CanOpccupied(int32_t x, int32_t y, Il2CppArray<uintptr_t>* testList) {
		return ((T (*)(ProcessorOfRoom*, int32_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A49934))(this, x, y, testList);
	}

};

}
