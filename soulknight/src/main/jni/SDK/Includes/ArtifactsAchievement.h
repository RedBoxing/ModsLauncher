#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactsAchievement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactsAchievement"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& copper_achievements() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& COPPER_COMPLETE_VERYRARE_WEAPON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& COPPER_USE_ALL_GOD_POWER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& COPPER_HIGHLIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& COPPER_EPIC_PART() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& silver_achievements() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& SILVER_ALL_WEAPON_TYPE_PASS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SILVER_GOD_POWER_KILLS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SILVER_REFRESH_GOLDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SILVER_USE_GOD_POWERS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& gold_achievements() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& GOLD_LEGENDARY_WEAPON_PASS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GOLD_COLLECT_ALL_PARTS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GOLD_DAMAGE_SUM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DAMAGE_SUM_LIMIT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GOLD_INITIAL_WEAPON_PASS_BADASS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& current_god_power_kills() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> static T IsAchievementComplete(Il2CppString* achievement) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1CAC6D8))(0, achievement);
	}
	template <typename T = void> static T GetCurrentStateDesc(uintptr_t ui_text, Il2CppString* achievement) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1CAD768))(0, ui_text, achievement);
	}
	template <typename T = void> static T SetArtifactCondition(uintptr_t condition, int32_t current, int32_t max) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1CAE4CC))(0, condition, current, max);
	}
	template <typename T = bool> static T get_IS_COMPLETE_COPPER_01() {
		return ((T (*)(void *))(Il2CppBase() + 0x1CACBB8))(0);
	}
	template <typename T = void> static T CheckRecordCompleteVeryRareWeapon(uintptr_t weapon) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1CAE874))(0, weapon);
	}
	template <typename T = bool> static T get_IS_COMPLETE_COPPER_02() {
		return ((T (*)(void *))(Il2CppBase() + 0x1CACC78))(0);
	}
	template <typename T = void> static T CheckRecordUseAllGodPower(Il2CppString* god_power_id) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1CAEC38))(0, god_power_id);
	}
	template <typename T = bool> static T get_IS_COMPLETE_COPPER_03() {
		return ((T (*)(void *))(Il2CppBase() + 0x1CACD44))(0);
	}
	template <typename T = void> static T CheckRecordHighlight() {
		return ((T (*)(void *))(Il2CppBase() + 0x1CAEDAC))(0);
	}
	template <typename T = bool> static T get_IS_COMPLETE_COPPER_04() {
		return ((T (*)(void *))(Il2CppBase() + 0x1CACE04))(0);
	}
	template <typename T = void> static T CheckRecordEpicPart(int32_t rarity) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1CAEFD4))(0, rarity);
	}
	template <typename T = bool> static T get_IS_COMPLETE_SILVER_01() {
		return ((T (*)(void *))(Il2CppBase() + 0x1CACEC4))(0);
	}
	template <typename T = void> static T CheckRecordAllWeaponTypePass(uintptr_t weapon_type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1CAF108))(0, weapon_type);
	}
	template <typename T = bool> static T get_IS_COMPLETE_SILVER_02() {
		return ((T (*)(void *))(Il2CppBase() + 0x1CACF90))(0);
	}
	template <typename T = void> static T CheckRecordGodPowerKills(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1CAF46C))(0, e);
	}
	template <typename T = bool> static T get_IS_COMPLETE_SILVER_03() {
		return ((T (*)(void *))(Il2CppBase() + 0x1CAD0A0))(0);
	}
	template <typename T = void> static T CheckRecordRefreshGolds(int32_t coin) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1CAF6A4))(0, coin);
	}
	template <typename T = bool> static T get_IS_COMPLETE_SILVER_04() {
		return ((T (*)(void *))(Il2CppBase() + 0x1CAD1B0))(0);
	}
	template <typename T = void> static T CheckRecordUseGoldPowers() {
		return ((T (*)(void *))(Il2CppBase() + 0x1CAF774))(0);
	}
	template <typename T = bool> static T get_IS_COMPLETE_GOLD_01() {
		return ((T (*)(void *))(Il2CppBase() + 0x1CAD2C0))(0);
	}
	template <typename T = void> static T CheckRecordLegendaryWeaponPass() {
		return ((T (*)(void *))(Il2CppBase() + 0x1CAF83C))(0);
	}
	template <typename T = bool> static T get_IS_COMPLETE_GOLD_02() {
		return ((T (*)(void *))(Il2CppBase() + 0x1CAD380))(0);
	}
	template <typename T = int32_t> static T GetCollectedPartsOfWeaponType(uintptr_t weaponType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1CAE640))(0, weaponType);
	}
	template <typename T = void> static T CheckRecordCollectAllParts(uintptr_t part) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1CAFAD0))(0, part);
	}
	template <typename T = bool> static T get_IS_COMPLETE_GOLD_03() {
		return ((T (*)(void *))(Il2CppBase() + 0x1CAD55C))(0);
	}
	template <typename T = void> static T CheckRecordDamageSum(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1CAFC2C))(0, e);
	}
	template <typename T = bool> static T get_IS_COMPLETE_GOLD_04() {
		return ((T (*)(void *))(Il2CppBase() + 0x1CAD6A8))(0);
	}
	template <typename T = void> static T CheckRecordInitialWeaponPassBadass() {
		return ((T (*)(void *))(Il2CppBase() + 0x1CAFDD8))(0);
	}
	template <typename T = void> static T CheckSeasonPrize() {
		return ((T (*)(void *))(Il2CppBase() + 0x1CAFE9C))(0);
	}

};

}
