#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CloudSaveSundry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CloudSaveSundry"));
	}

	template <typename T = uint32_t> T& Version() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& GameVersion() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& ChanneName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Gem() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& BossRushTicket() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& RoomLevel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& FishChip() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& NewFishChip() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& CumulativePurchaseFishChip() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, int32_t>*>*> T& skinLock() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<uintptr_t, bool>*> T& PetUnlock() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& heroLevel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& roomObjectLevel() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& tokenHeroCount() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& removeMaxMinThresholds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int16_t> static T& removeCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T CreateCloudSaveSundry(uintptr_t cloudData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x206BCB8))(0, cloudData);
	}
	template <typename T = int64_t> static T GetMaterialTotalCount(uintptr_t itemData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x206C134))(0, itemData);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T RemoveMaxMin(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x206C254))(0, data);
	}
	template <typename T = double> static T GetVarianceRemoveMaxMin(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x206C458))(0, data);
	}
	template <typename T = double> static T GetVariance(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x206C500))(0, data);
	}
	template <typename T = int64_t> static T GetEnenmyTotal(uintptr_t statisticData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x206C6FC))(0, statisticData);
	}
	template <typename T = int64_t> static T GetBossTotal(uintptr_t statisticData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x206CC18))(0, statisticData);
	}
	template <typename T = int32_t> static T GetWeaponCount(uintptr_t statisticData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x206D130))(0, statisticData);
	}
	template <typename T = int32_t> static T GetCanForgeWeaponCount(uintptr_t statisticData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x206D964))(0, statisticData);
	}

};

}
