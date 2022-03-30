#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactsLevelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactsLevelController"));
	}

	template <typename T = int32_t> T& _busyCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& config() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& funnelPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& chooseWeapon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& componentSortingOrder() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& partSortingOrder() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& additionalRarityLevel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& additionalArcaneMissile() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& currentHpPercentage() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& createdInitWeapons() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& recycledParts() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& Inst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& cleanWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& cmds() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& modifiedPet() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*>*> T& cachedPartList() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = bool> T get_playerBusy() {
		return ((T (*)(ArtifactsLevelController*))(Il2CppBase() + 0x41736E4))(this);
	}
	template <typename T = void> T set_playerBusy(bool value) {
		return ((T (*)(ArtifactsLevelController*, bool))(Il2CppBase() + 0x417374C))(this, value);
	}
	template <typename T = int32_t> T get_componentSortingOrder() {
		return ((T (*)(ArtifactsLevelController*))(Il2CppBase() + 0x41737E0))(this);
	}
	template <typename T = void> T set_componentSortingOrder(int32_t value) {
		return ((T (*)(ArtifactsLevelController*, int32_t))(Il2CppBase() + 0x41737E8))(this, value);
	}
	template <typename T = int32_t> T get_partSortingOrder() {
		return ((T (*)(ArtifactsLevelController*))(Il2CppBase() + 0x41737F0))(this);
	}
	template <typename T = void> T set_partSortingOrder(int32_t value) {
		return ((T (*)(ArtifactsLevelController*, int32_t))(Il2CppBase() + 0x41737F8))(this, value);
	}
	template <typename T = int32_t> T get_additionalRarityLevel() {
		return ((T (*)(ArtifactsLevelController*))(Il2CppBase() + 0x4173800))(this);
	}
	template <typename T = void> T set_additionalRarityLevel(int32_t value) {
		return ((T (*)(ArtifactsLevelController*, int32_t))(Il2CppBase() + 0x4173808))(this, value);
	}
	template <typename T = int32_t> T get_additionalArcaneMissile() {
		return ((T (*)(ArtifactsLevelController*))(Il2CppBase() + 0x4173810))(this);
	}
	template <typename T = void> T set_additionalArcaneMissile(int32_t value) {
		return ((T (*)(ArtifactsLevelController*, int32_t))(Il2CppBase() + 0x4173818))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ArtifactsLevelController*))(Il2CppBase() + 0x4173820))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ArtifactsLevelController*))(Il2CppBase() + 0x4174358))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ArtifactsLevelController*))(Il2CppBase() + 0x41749A8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ArtifactsLevelController*))(Il2CppBase() + 0x4174E7C))(this);
	}
	template <typename T = void> T OnSetUpWeapons(uintptr_t data) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t))(Il2CppBase() + 0x4175350))(this, data);
	}
	template <typename T = void> T CharacterSpecialize(uintptr_t controller) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t))(Il2CppBase() + 0x4176688))(this, controller);
	}
	template <typename T = void> T OnArtifactChanged(uintptr_t data) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t))(Il2CppBase() + 0x4176A48))(this, data);
	}
	template <typename T = void> T OnEnterGate(uintptr_t data) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t))(Il2CppBase() + 0x4176ABC))(this, data);
	}
	template <typename T = void> T OnCreateEnemy(uintptr_t data) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t))(Il2CppBase() + 0x4177070))(this, data);
	}
	template <typename T = void> T OnCreateBoss(uintptr_t data) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t))(Il2CppBase() + 0x41772F8))(this, data);
	}
	template <typename T = void> T OnEnemyMakerStart(uintptr_t data) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t))(Il2CppBase() + 0x4177668))(this, data);
	}
	template <typename T = void> T OnBattleStart(uintptr_t data) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t))(Il2CppBase() + 0x4177828))(this, data);
	}
	template <typename T = void> T OnBattleEnd(uintptr_t data) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t))(Il2CppBase() + 0x4177CEC))(this, data);
	}
	template <typename T = void> T OnWeaponChanged(uintptr_t data) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t))(Il2CppBase() + 0x4177EC0))(this, data);
	}
	template <typename T = void> T OnHireMercenary(uintptr_t data) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t))(Il2CppBase() + 0x4178388))(this, data);
	}
	template <typename T = void> T OnOpenBossChest(uintptr_t data) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t))(Il2CppBase() + 0x4178758))(this, data);
	}
	template <typename T = void> T OnPickCoin(uintptr_t data) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t))(Il2CppBase() + 0x41797E8))(this, data);
	}
	template <typename T = void> T OnCreateMercenary(uintptr_t data) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t))(Il2CppBase() + 0x4179964))(this, data);
	}
	template <typename T = void> T OnWeaponPickedUp(uintptr_t data) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t))(Il2CppBase() + 0x4179C14))(this, data);
	}
	template <typename T = void> T OnSaveData(uintptr_t data) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t))(Il2CppBase() + 0x417A088))(this, data);
	}
	template <typename T = uintptr_t> static T CreateWeapon(uintptr_t prefab, Il2CppArray<uintptr_t>* partsInfo) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4175D30))(0, prefab, partsInfo);
	}
	template <typename T = uintptr_t> static T CopyWeapon(uintptr_t weapon, bool copyComponents) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x417A33C))(0, weapon, copyComponents);
	}
	template <typename T = uintptr_t> T CreateInitWeapon(uintptr_t prefab, uintptr_t rg_random) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4173FE8))(this, prefab, rg_random);
	}
	template <typename T = void> T SaveWeapon(uintptr_t weapon) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t))(Il2CppBase() + 0x4178034))(this, weapon);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T CreatePartInfoList(uintptr_t weapon) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x417A5F0))(0, weapon);
	}
	template <typename T = uintptr_t> T CreateWeaponPart(uintptr_t weaponType, int32_t partID, int32_t rarityFunction, int32_t maxRarity, uintptr_t rg_random, bool canRecycle, uintptr_t specifiedPartPrefab) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t, int32_t, int32_t, int32_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x4178C9C))(this, weaponType, partID, rarityFunction, maxRarity, rg_random, canRecycle, specifiedPartPrefab);
	}
	template <typename T = uintptr_t> T CreateWeaponPart_1(uintptr_t partPrefab, int32_t rarity, Il2CppArray<uintptr_t>* components, int32_t elementType, bool canRecycle) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x417B5AC))(this, partPrefab, rarity, components, elementType, canRecycle);
	}
	template <typename T = uintptr_t> T CreateWeaponComponent(uintptr_t part, int32_t rarityFunction, int32_t maxRarity, uintptr_t specified, uintptr_t rg_random, void* exclude, bool alwaysSucceed) {
		return ((T (*)(ArtifactsLevelController*, uintptr_t, int32_t, int32_t, uintptr_t, uintptr_t, void*, bool))(Il2CppBase() + 0x417AE40))(this, part, rarityFunction, maxRarity, specified, rg_random, exclude, alwaysSucceed);
	}
	template <typename T = uintptr_t> static T CreateSpriteObject(uintptr_t sprite, uintptr_t parent) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x417B9A8))(0, sprite, parent);
	}
	template <typename T = uintptr_t> static T CreateWeaponUIObj(uintptr_t parent, uintptr_t obj, float imgScale, float scale) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x417BC14))(0, parent, obj, imgScale, scale);
	}
	template <typename T = void> T UpdatePauseWindow() {
		return ((T (*)(ArtifactsLevelController*))(Il2CppBase() + 0x4174634))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ArtifactsLevelController*))(Il2CppBase() + 0x417C64C))(this);
	}
	template <typename T = int32_t> T GenRandomRarity(int32_t rarityFunction, int32_t maxRarity) {
		return ((T (*)(ArtifactsLevelController*, int32_t, int32_t))(Il2CppBase() + 0x417ACF0))(this, rarityFunction, maxRarity);
	}
	template <typename T = int32_t> static T GetPartValue(uintptr_t config, uintptr_t part) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x417C6DC))(0, config, part);
	}

};

}
