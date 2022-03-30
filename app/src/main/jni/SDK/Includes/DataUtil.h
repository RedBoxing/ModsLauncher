#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DataUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DataUtil"));
	}

	template <typename T = uintptr_t> static T& _saveMng() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _uiHeroSkinWeaponIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T GetOriginSaveManager() {
		return ((T (*)(void *))(Il2CppBase() + 0x42D71E0))(0);
	}
	template <typename T = bool> static T GetHeroUnlock(uintptr_t hero) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42D732C))(0, hero);
	}
	template <typename T = void> static T SetHeroUnlock(uintptr_t hero, bool isUnlock) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x42D7520))(0, hero, isUnlock);
	}
	template <typename T = void> static T SetHeroCharUnlock(uintptr_t hero, bool isUnlock) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x42D76E8))(0, hero, isUnlock);
	}
	template <typename T = int32_t> static T GetHeroLevel(uintptr_t hero) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42D7828))(0, hero);
	}
	template <typename T = void> static T SetHeroLevel(uintptr_t hero, int32_t level) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x42D798C))(0, hero, level);
	}
	template <typename T = void> static T SetHeroMaxLevel(uintptr_t hero) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42D7768))(0, hero);
	}
	template <typename T = void> static T SetAllHeroCharacterLevelMax() {
		return ((T (*)(void *))(Il2CppBase() + 0x42D7AFC))(0);
	}
	template <typename T = bool> static T GetSkinUnlock(uintptr_t hero, int32_t skinIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x42D7CEC))(0, hero, skinIndex);
	}
	template <typename T = void> static T SetSkinUnlock(uintptr_t hero, int32_t skinIndex, bool isUnlock) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x42D8234))(0, hero, skinIndex, isUnlock);
	}
	template <typename T = bool> static T GetSkinSeriesUnlock(Il2CppString* subtitle, uintptr_t* unlockCount, uintptr_t* totalCount, uintptr_t* list) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x42D8688))(0, subtitle, unlockCount, totalCount, list);
	}
	template <typename T = Il2CppString*> static T GetSkinName(uintptr_t hero, int32_t skinIndex, bool forceCn) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x42D8904))(0, hero, skinIndex, forceCn);
	}
	template <typename T = Il2CppString*> static T GetSkinSubtitle(uintptr_t hero, int32_t skinIndex, bool forceCn) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x42D89D0))(0, hero, skinIndex, forceCn);
	}
	template <typename T = bool> static T GetSkillUnlock(uintptr_t hero, int32_t skillIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x42D8A9C))(0, hero, skillIndex);
	}
	template <typename T = void> static T SetSkillUnlock(uintptr_t hero, int32_t skillIndex, bool isUnlock) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x42D8C54))(0, hero, skillIndex, isUnlock);
	}
	template <typename T = uintptr_t> static T get_UiHeroSkinWeaponIndex() {
		return ((T (*)(void *))(Il2CppBase() + 0x42D8D5C))(0);
	}
	template <typename T = Il2CppString*> static T GetInitWeaponName(uintptr_t heroType, int32_t skinIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x42D8E54))(0, heroType, skinIndex);
	}
	template <typename T = Il2CppString*> static T GetInitWeaponName_1(uintptr_t heroType, int32_t skinIndex, int32_t level) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x42D8F74))(0, heroType, skinIndex, level);
	}
	template <typename T = bool> static T GetPetUnlock(uintptr_t pet) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42D9170))(0, pet);
	}
	template <typename T = void> static T SetPetUnlock(uintptr_t pet, bool isUnlock) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x42D92FC))(0, pet, isUnlock);
	}
	template <typename T = void> static T SetMultiRoomSkinUnlock(int32_t index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x42D9480))(0, index);
	}
	template <typename T = bool> static T GetMultiRoomSkinUnlock(int32_t index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x42D9758))(0, index);
	}
	template <typename T = Il2CppList<int32_t>*> static T GetAllUnlockedMultiRoomSkinIndex() {
		return ((T (*)(void *))(Il2CppBase() + 0x42D986C))(0);
	}
	template <typename T = void> static T SetMultiRoomSkinIndex(int32_t multiRoomSkinIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x42D99A8))(0, multiRoomSkinIndex);
	}
	template <typename T = int32_t> static T GetMultiRoomSkinIndex() {
		return ((T (*)(void *))(Il2CppBase() + 0x42D9B30))(0);
	}
	template <typename T = int32_t> static T GetUnlockHeroCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x42D9BF0))(0);
	}
	template <typename T = int32_t> static T GetUnlockSkinCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x42D9D64))(0);
	}
	template <typename T = int32_t> static T GetHeroSkillCount(uintptr_t hero) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42D9EE4))(0, hero);
	}
	template <typename T = int32_t> static T GetHeroSkinCount(uintptr_t hero) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42D9FE8))(0, hero);
	}
	template <typename T = bool> static T IsBossRushUnlock() {
		return ((T (*)(void *))(Il2CppBase() + 0x42DA0FC))(0);
	}
	template <typename T = bool> static T HasBluePrint(Il2CppString* blueprintName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42DA1F4))(0, blueprintName);
	}
	template <typename T = int32_t> static T GetWeaponCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x42DA2C0))(0);
	}
	template <typename T = bool> static T CurIsTargetScene(Il2CppString* scene_name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42DA374))(0, scene_name);
	}
	template <typename T = bool> static T IsTutorialRoom() {
		return ((T (*)(void *))(Il2CppBase() + 0x42DA438))(0);
	}
	template <typename T = bool> static T IsHeroRoom() {
		return ((T (*)(void *))(Il2CppBase() + 0x42DA4BC))(0);
	}
	template <typename T = bool> static T IsMultiRoom() {
		return ((T (*)(void *))(Il2CppBase() + 0x42DA540))(0);
	}
	template <typename T = Il2CppString*> static T GetCurSceneName() {
		return ((T (*)(void *))(Il2CppBase() + 0x42DA5C4))(0);
	}
	template <typename T = void> static T ChoseHero() {
		return ((T (*)(void *))(Il2CppBase() + 0x42DA630))(0);
	}
	template <typename T = void> static T ResetChoseHero() {
		return ((T (*)(void *))(Il2CppBase() + 0x42DA684))(0);
	}
	template <typename T = void> static T ChosePet() {
		return ((T (*)(void *))(Il2CppBase() + 0x42DADD4))(0);
	}
	template <typename T = bool> static T CheckUnlockRoomDecorateCondi(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42DAE28))(0, item);
	}
	template <typename T = int64_t> static T GetAllKillCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x42DAE88))(0);
	}
	template <typename T = int64_t> static T GetEnemyKillCountById(Il2CppString* enemy_id) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42DB4CC))(0, enemy_id);
	}
	template <typename T = void> static T UnlockAchievement(uintptr_t info) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42DB594))(0, info);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> static T GetWeaponForgeMaterials(uintptr_t weapon) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42DB7BC))(0, weapon);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> static T GetWeaponForgeMaterials_1(uintptr_t weaponGo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42DB894))(0, weaponGo);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> static T GetMechForgeMaterials(Il2CppString* mechName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42DB978))(0, mechName);
	}
	template <typename T = bool> static T IsBossrushDayMaxTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x42DBB40))(0);
	}
	template <typename T = bool> static T IsBossrushTicketEnough() {
		return ((T (*)(void *))(Il2CppBase() + 0x42DBC24))(0);
	}
	template <typename T = Il2CppString*> static T TransValueToId(int32_t f_char_index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x42DBE1C))(0, f_char_index);
	}
	template <typename T = uintptr_t> static T GetFontSetting() {
		return ((T (*)(void *))(Il2CppBase() + 0x42DC020))(0);
	}
	template <typename T = void> static T SetFontSetting(int32_t fontSetting) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x42DC0F4))(0, fontSetting);
	}

};

}
