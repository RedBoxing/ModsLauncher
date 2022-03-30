#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MapManagerDefence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapManagerDefence"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& enemyCreators() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& createInterval() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& waveInterval() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& waveExInterval() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& OnWaveClear() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& OnWaveStart() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& magicStone() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& doors() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& batteries() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& destroyOnNextWave() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& nextDirections() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _enemyRoot() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& enemyCount() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4304E0C))(0);
	}
	template <typename T = int32_t> T get_chestLevel() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x4304EC8))(this);
	}
	template <typename T = void> T add_OnWaveClear(uintptr_t value) {
		return ((T (*)(MapManagerDefence*, uintptr_t))(Il2CppBase() + 0x4304FCC))(this, value);
	}
	template <typename T = void> T remove_OnWaveClear(uintptr_t value) {
		return ((T (*)(MapManagerDefence*, uintptr_t))(Il2CppBase() + 0x43050B8))(this, value);
	}
	template <typename T = void> T add_OnWaveStart(uintptr_t value) {
		return ((T (*)(MapManagerDefence*, uintptr_t))(Il2CppBase() + 0x43051A4))(this, value);
	}
	template <typename T = void> T remove_OnWaveStart(uintptr_t value) {
		return ((T (*)(MapManagerDefence*, uintptr_t))(Il2CppBase() + 0x4305290))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_chestGroups() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x430537C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_sellGroups() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x430540C))(this);
	}
	template <typename T = int32_t> T get_waveIndex() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x4304F48))(this);
	}
	template <typename T = void> T set_waveIndex(int32_t value) {
		return ((T (*)(MapManagerDefence*, int32_t))(Il2CppBase() + 0x430549C))(this, value);
	}
	template <typename T = int32_t> T get_loopIndex() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x4305534))(this);
	}
	template <typename T = bool> T get_isBuffWave() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x43055B8))(this);
	}
	template <typename T = bool> T get_isBossWave() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x4305704))(this);
	}
	template <typename T = bool> T get_isExWave() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x4305794))(this);
	}
	template <typename T = bool> T get_isDenseWave() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x4305834))(this);
	}
	template <typename T = uintptr_t> T get_enemyRoot() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x43058C0))(this);
	}
	template <typename T = float> T get_hpFactor() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x43059D4))(this);
	}
	template <typename T = float> T get_priceFactor() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x4305AC0))(this);
	}
	template <typename T = void> T SetRGRandomSeed(int32_t seed) {
		return ((T (*)(MapManagerDefence*, int32_t))(Il2CppBase() + 0x4305BA0))(this, seed);
	}
	template <typename T = bool> T IsGateOpen(uintptr_t key) {
		return ((T (*)(MapManagerDefence*, uintptr_t))(Il2CppBase() + 0x4305C2C))(this, key);
	}
	template <typename T = void> T CreateMap() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x4305D34))(this);
	}
	template <typename T = void> T InitComponent() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x4305DE4))(this);
	}
	template <typename T = void> T RefreshAllChests() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x4306060))(this);
	}
	template <typename T = void> T StartNextWaveCountDown() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x43061A0))(this);
	}
	template <typename T = void> T HandleLevelScene() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x4306414))(this);
	}
	template <typename T = void> T HandleGatesDirection() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x43067B8))(this);
	}
	template <typename T = void> T StartWave() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x4306E38))(this);
	}
	template <typename T = void> T OpenDoor(bool isOpen) {
		return ((T (*)(MapManagerDefence*, bool))(Il2CppBase() + 0x4306CA8))(this, isOpen);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetEnemiesList() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x4307558))(this);
	}
	template <typename T = void> T OnEnemyCreate(uintptr_t enemy) {
		return ((T (*)(MapManagerDefence*, uintptr_t))(Il2CppBase() + 0x4307670))(this, enemy);
	}
	template <typename T = void> T OnEnemyDead(uintptr_t enemy) {
		return ((T (*)(MapManagerDefence*, uintptr_t))(Il2CppBase() + 0x43076EC))(this, enemy);
	}
	template <typename T = void> T CreateEnemyReward(uintptr_t enemy) {
		return ((T (*)(MapManagerDefence*, uintptr_t))(Il2CppBase() + 0x4307840))(this, enemy);
	}
	template <typename T = void> T CheckEnemyClear(uintptr_t enemy) {
		return ((T (*)(MapManagerDefence*, uintptr_t))(Il2CppBase() + 0x43078B0))(this, enemy);
	}
	template <typename T = void> T OnEnemyClear(uintptr_t enemy) {
		return ((T (*)(MapManagerDefence*, uintptr_t))(Il2CppBase() + 0x4307A60))(this, enemy);
	}
	template <typename T = void> T AddBattery(uintptr_t battery) {
		return ((T (*)(MapManagerDefence*, uintptr_t))(Il2CppBase() + 0x4307C90))(this, battery);
	}
	template <typename T = void> T RemoveBattery(uintptr_t battery) {
		return ((T (*)(MapManagerDefence*, uintptr_t))(Il2CppBase() + 0x4307DC8))(this, battery);
	}
	template <typename T = void> T LoadBattery() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x4305EF4))(this);
	}
	template <typename T = void> T RestoreAllBatteries() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x4307E80))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetBatteryInfos() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x4307FE4))(this);
	}
	template <typename T = int32_t> T GetAdditionDamage(int32_t camp) {
		return ((T (*)(MapManagerDefence*, int32_t))(Il2CppBase() + 0x430829C))(this, camp);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_chestLevel() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x4308400))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetRGRandomSeed(int32_t P0) {
		return ((T (*)(MapManagerDefence*, int32_t))(Il2CppBase() + 0x4308404))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_CreateMap() {
		return ((T (*)(MapManagerDefence*))(Il2CppBase() + 0x4308408))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetAdditionDamage(int32_t P0) {
		return ((T (*)(MapManagerDefence*, int32_t))(Il2CppBase() + 0x430840C))(this, P0);
	}

};

}
