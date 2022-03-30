#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectFishingSpot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectFishingSpot"));
	}

	template <typename T = Il2CppString*> T& key() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& namePosHight() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& _in_use() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& randomMaxUseTimes() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& hookSprite() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& autoDestroyLevel0Trash() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _maxUseTimes() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& _usedTimes() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& _inbattle() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& hideWhenEmpty() {
		return *(T*)((uintptr_t)this + 0x85);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector3> T& lootCratePosOffset() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& C_Pool() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& B_Pool() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& A_Pool() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& S_Pool() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& Spec_Pool() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& extraLootPools() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& _createdUniqueLoots() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _targetObjPrefab() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& _isUniqueLoot() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& onCreateUniquLoot() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& minigamePrefab() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ObjectFishingSpot*))(Il2CppBase() + 0x1D59638))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ObjectFishingSpot*))(Il2CppBase() + 0x1D59D28))(this);
	}
	template <typename T = void> T TryReplaceItemInShop() {
		return ((T (*)(ObjectFishingSpot*))(Il2CppBase() + 0x1D59E9C))(this);
	}
	template <typename T = void> T OnMapCreateComplete(uintptr_t e) {
		return ((T (*)(ObjectFishingSpot*, uintptr_t))(Il2CppBase() + 0x1D5A3DC))(this, e);
	}
	template <typename T = void> T CreateInBattleRoom(uintptr_t room) {
		return ((T (*)(ObjectFishingSpot*, uintptr_t))(Il2CppBase() + 0x1D5A46C))(this, room);
	}
	template <typename T = void> T OnBattleStart(uintptr_t e) {
		return ((T (*)(ObjectFishingSpot*, uintptr_t))(Il2CppBase() + 0x1D5A4F8))(this, e);
	}
	template <typename T = void> T OnBattleEnd(uintptr_t e) {
		return ((T (*)(ObjectFishingSpot*, uintptr_t))(Il2CppBase() + 0x1D5A570))(this, e);
	}
	template <typename T = void> T MergePool(uintptr_t pool, uintptr_t extraPool) {
		return ((T (*)(ObjectFishingSpot*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D59998))(this, pool, extraPool);
	}
	template <typename T = void> T MergePool_1(uintptr_t pool, uintptr_t extraPool) {
		return ((T (*)(ObjectFishingSpot*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D59BC0))(this, pool, extraPool);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ObjectFishingSpot*))(Il2CppBase() + 0x1D5A5E4))(this);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectFishingSpot*, uintptr_t))(Il2CppBase() + 0x1D5A644))(this, controller);
	}
	template <typename T = void> T OnStartFishing(uintptr_t controller, int32_t fishRodLevel) {
		return ((T (*)(ObjectFishingSpot*, uintptr_t, int32_t))(Il2CppBase() + 0x1D5AF2C))(this, controller, fishRodLevel);
	}
	template <typename T = void> T OnFinishedFishing(uintptr_t controller, bool result, void* finish) {
		return ((T (*)(ObjectFishingSpot*, uintptr_t, bool, void*))(Il2CppBase() + 0x1D5B038))(this, controller, result, finish);
	}
	template <typename T = void> T OnEliminiateUniqueLoot() {
		return ((T (*)(ObjectFishingSpot*))(Il2CppBase() + 0x1D5B468))(this);
	}
	template <typename T = void> T DisableSpot() {
		return ((T (*)(ObjectFishingSpot*))(Il2CppBase() + 0x1D5B4CC))(this);
	}
	template <typename T = void> T OnCreateLoot(uintptr_t controller, bool result, void* finish) {
		return ((T (*)(ObjectFishingSpot*, uintptr_t, bool, void*))(Il2CppBase() + 0x1D5B5E8))(this, controller, result, finish);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectFishingSpot*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D5BC50))(this, controller, ext_info);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectFishingSpot*))(Il2CppBase() + 0x1D5BCD0))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectFishingSpot*))(Il2CppBase() + 0x1D5BD90))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectFishingSpot*))(Il2CppBase() + 0x1D5BDF0))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectFishingSpot*))(Il2CppBase() + 0x1D5BE50))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectFishingSpot*, uintptr_t))(Il2CppBase() + 0x1D5BEEC))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectFishingSpot*, uintptr_t))(Il2CppBase() + 0x1D5C090))(this, other);
	}
	template <typename T = void> T PlayerIn(uintptr_t other) {
		return ((T (*)(ObjectFishingSpot*, uintptr_t))(Il2CppBase() + 0x1D5BF84))(this, other);
	}
	template <typename T = void> T PlayerOut(uintptr_t other) {
		return ((T (*)(ObjectFishingSpot*, uintptr_t))(Il2CppBase() + 0x1D5C108))(this, other);
	}
	template <typename T = void> T ShowName(float height) {
		return ((T (*)(ObjectFishingSpot*, float))(Il2CppBase() + 0x1D5C3A8))(this, height);
	}
	template <typename T = bool> T CanInteract(uintptr_t controller) {
		return ((T (*)(ObjectFishingSpot*, uintptr_t))(Il2CppBase() + 0x1D5C4B8))(this, controller);
	}
	template <typename T = uintptr_t> T Self() {
		return ((T (*)(ObjectFishingSpot*))(Il2CppBase() + 0x1D5C614))(this);
	}
	template <typename T = uintptr_t> T SelfItem() {
		return ((T (*)(ObjectFishingSpot*))(Il2CppBase() + 0x1D5C678))(this);
	}
	template <typename T = void> T OnStartInteract(uintptr_t controller) {
		return ((T (*)(ObjectFishingSpot*, uintptr_t))(Il2CppBase() + 0x1D5C214))(this, controller);
	}
	template <typename T = void> T OnEndInteract(uintptr_t controller) {
		return ((T (*)(ObjectFishingSpot*, uintptr_t))(Il2CppBase() + 0x1D5BB28))(this, controller);
	}
	template <typename T = void> T OnUseChildItem(uintptr_t controller) {
		return ((T (*)(ObjectFishingSpot*, uintptr_t))(Il2CppBase() + 0x1D5C6D8))(this, controller);
	}

};

}
