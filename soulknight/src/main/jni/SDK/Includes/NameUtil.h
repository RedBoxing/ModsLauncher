#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NameUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NameUtil"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& FemaleHeroes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& colorFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> static T GetHeroName(uintptr_t hero, bool forceCN) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x43809B8))(0, hero, forceCN);
	}
	template <typename T = Il2CppString*> static T GetSkinName(uintptr_t hero, int32_t skinIndex, bool forceCN) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x437CB30))(0, hero, skinIndex, forceCN);
	}
	template <typename T = Il2CppString*> static T GetSkinName2(uintptr_t hero, int32_t skinIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4380A78))(0, hero, skinIndex);
	}
	template <typename T = Il2CppString*> static T GetSkinSubtitle(uintptr_t hero, int32_t skinIndex, bool forceCN) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4380C0C))(0, hero, skinIndex, forceCN);
	}
	template <typename T = Il2CppString*> static T GetMultiRoomSkinName(int32_t index, bool forceCN) {
		return ((T (*)(void *, int32_t, bool))(Il2CppBase() + 0x4380DD4))(0, index, forceCN);
	}
	template <typename T = Il2CppString*> static T GetSkinNameWithHeroNameAndSubtitle(uintptr_t hero, int32_t skinIndex, bool forceCN) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4380EE0))(0, hero, skinIndex, forceCN);
	}
	template <typename T = Il2CppString*> static T GetSkillName(uintptr_t hero, int32_t skillIndex, bool forceCN) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x43811E0))(0, hero, skillIndex, forceCN);
	}
	template <typename T = Il2CppString*> static T GetHeroSkillName(uintptr_t hero, int32_t skillIndex, bool forceCN) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x43812E8))(0, hero, skillIndex, forceCN);
	}
	template <typename T = Il2CppString*> static T GetPetName(uintptr_t pet, bool forceCN) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x43813E0))(0, pet, forceCN);
	}
	template <typename T = Il2CppString*> static T GetWeaponName(Il2CppString* key, bool forceCN) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x43814BC))(0, key, forceCN);
	}
	template <typename T = Il2CppString*> static T GetTokenTickWeaponPrefabName(Il2CppString* ticketName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43815B0))(0, ticketName);
	}
	template <typename T = Il2CppString*> static T GetPlantName(Il2CppString* key, bool forceCN) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x43816F8))(0, key, forceCN);
	}
	template <typename T = Il2CppString*> static T GetBlueprintName(Il2CppString* key, bool forceCN) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x4381784))(0, key, forceCN);
	}
	template <typename T = Il2CppString*> static T GetMaterialName(Il2CppString* key, bool forceCN) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x437F69C))(0, key, forceCN);
	}
	template <typename T = Il2CppString*> static T GetTapeName(Il2CppString* key, bool forceCN) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x43820EC))(0, key, forceCN);
	}
	template <typename T = Il2CppString*> static T GetSeedName(Il2CppString* key, bool forceCN) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x437F728))(0, key, forceCN);
	}
	template <typename T = Il2CppString*> static T GetMechName(Il2CppString* key, bool forceCN) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x4381E9C))(0, key, forceCN);
	}
	template <typename T = Il2CppString*> static T GetFurnitureName(Il2CppString* key, bool forceCN) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x4381FF8))(0, key, forceCN);
	}
	template <typename T = Il2CppString*> static T GetAchievementName(int32_t achieveId, bool forceCN) {
		return ((T (*)(void *, int32_t, bool))(Il2CppBase() + 0x43821E4))(0, achieveId, forceCN);
	}
	template <typename T = Il2CppString*> static T GetTokenTicketName(Il2CppString* ticketName, bool withColor, bool forceCN) {
		return ((T (*)(void *, Il2CppString*, bool, bool))(Il2CppBase() + 0x43822C0))(0, ticketName, withColor, forceCN);
	}
	template <typename T = Il2CppString*> static T GetLevelSceneName(uintptr_t levelScene, bool forceCN) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4382A3C))(0, levelScene, forceCN);
	}
	template <typename T = Il2CppString*> static T GetRoomName(uintptr_t room, bool forceCN) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4382B50))(0, room, forceCN);
	}
	template <typename T = Il2CppString*> static T GetBuffDesc(uintptr_t buff, bool forceCN) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4382C44))(0, buff, forceCN);
	}
	template <typename T = Il2CppString*> static T GetPrettyName(uintptr_t hero) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4382D40))(0, hero);
	}
	template <typename T = bool> static T IsFemale(uintptr_t hero) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4382E08))(0, hero);
	}
	template <typename T = Il2CppString*> static T GetStringWithColor(Il2CppString* row, int32_t level) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x4382940))(0, row, level);
	}
	template <typename T = Il2CppString*> static T GetGameModeName(uintptr_t mode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4382ED4))(0, mode);
	}
	template <typename T = Il2CppString*> static T IAPTransHeroIDToName(uintptr_t heroID) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4383010))(0, heroID);
	}

};

}
