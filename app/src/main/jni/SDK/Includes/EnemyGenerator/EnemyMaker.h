#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace EnemyGenerator {

class EnemyMaker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "EnemyGenerator", "EnemyMaker"));
	}

	template <typename T = uintptr_t> T& rg_random() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& room_size() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& max_room_size() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& enemy_point() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& this_count() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& part() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& the_room() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& enemy_group() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& enemy_total_count() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& badass_rate() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& always_badass() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& all_badass() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = uintptr_t> T& generateProcessor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _enemyShowUp() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = int32_t> T get_enemy_point() {
		return ((T (*)(EnemyMaker*))(Il2CppBase() + 0x1FE96E8))(this);
	}
	template <typename T = void> T set_enemy_point(int32_t value) {
		return ((T (*)(EnemyMaker*, int32_t))(Il2CppBase() + 0x1FE96F0))(this, value);
	}
	template <typename T = uintptr_t> T get_mapManagerLevel() {
		return ((T (*)(EnemyMaker*))(Il2CppBase() + 0x1FE96F8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EnemyMaker*))(Il2CppBase() + 0x1FE9758))(this);
	}
	template <typename T = void> T StartEnemyMaker() {
		return ((T (*)(EnemyMaker*))(Il2CppBase() + 0x1FE9848))(this);
	}
	template <typename T = void> T GuardDead() {
		return ((T (*)(EnemyMaker*))(Il2CppBase() + 0x1FEA150))(this);
	}
	template <typename T = void> T EnemyDead() {
		return ((T (*)(EnemyMaker*))(Il2CppBase() + 0x1FEA284))(this);
	}
	template <typename T = void> T BossDead() {
		return ((T (*)(EnemyMaker*))(Il2CppBase() + 0x1FEA3E8))(this);
	}
	template <typename T = void> T CreatePart(int32_t totalSize) {
		return ((T (*)(EnemyMaker*, int32_t))(Il2CppBase() + 0x1FEA5B0))(this, totalSize);
	}
	template <typename T = uintptr_t> T CreateEnemy() {
		return ((T (*)(EnemyMaker*))(Il2CppBase() + 0x1FEAFAC))(this);
	}
	template <typename T = uintptr_t> T CreateEnemy_1(uintptr_t prefab, bool inPart) {
		return ((T (*)(EnemyMaker*, uintptr_t, bool))(Il2CppBase() + 0x1FEB3E8))(this, prefab, inPart);
	}
	template <typename T = void> T ShowUpEnemy(uintptr_t enemyObject) {
		return ((T (*)(EnemyMaker*, uintptr_t))(Il2CppBase() + 0x1FEAD5C))(this, enemyObject);
	}
	template <typename T = Il2CppVector2> T GetEnemyInstantiatePosition(uintptr_t the_room, uintptr_t enemyBoundingBox) {
		return ((T (*)(EnemyMaker*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1FEB788))(this, the_room, enemyBoundingBox);
	}
	template <typename T = void> T ShowUpEffect() {
		return ((T (*)(EnemyMaker*))(Il2CppBase() + 0x1FEBE58))(this);
	}
	template <typename T = void> T AddDelegate() {
		return ((T (*)(EnemyMaker*))(Il2CppBase() + 0x1FEA048))(this);
	}
	template <typename T = void> T RemoveDelegate() {
		return ((T (*)(EnemyMaker*))(Il2CppBase() + 0x1FEBF18))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t value) {
		return ((T (*)(EnemyMaker*, int32_t))(Il2CppBase() + 0x1FEC018))(this, value);
	}
	template <typename T = void> T SetRGRandomSeed(int32_t seed) {
		return ((T (*)(EnemyMaker*, int32_t))(Il2CppBase() + 0x1FEC088))(this, seed);
	}
	template <typename T = void> T AddExternalEnemyCount(int32_t external_count) {
		return ((T (*)(EnemyMaker*, int32_t))(Il2CppBase() + 0x1FEC124))(this, external_count);
	}
	template <typename T = void> T Update() {
		return ((T (*)(EnemyMaker*))(Il2CppBase() + 0x1FEC1A0))(this);
	}

};

}
