#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ResourcesUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResourcesUtil"));
	}


	template <typename T = uintptr_t> static T Load(Il2CppString* resPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42CAB34))(0, resPath);
	}
	template <typename T = uintptr_t> static T Load_1(Il2CppString* resPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x0))(0, resPath);
	}
	template <typename T = uintptr_t> static T LoadFont(Il2CppString* fontName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42CABFC))(0, fontName);
	}
	template <typename T = uintptr_t> static T LoadHero(int32_t heroID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x42CAD30))(0, heroID);
	}
	template <typename T = uintptr_t> static T LoadMount(Il2CppString* mountName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42CAED0))(0, mountName);
	}
	template <typename T = uintptr_t> static T LoadHeroSkin(int32_t index, int32_t skinIndex) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x42CB010))(0, index, skinIndex);
	}
	template <typename T = uintptr_t> static T LoadPetSkin(int32_t index, int32_t skinIndex) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x42CB190))(0, index, skinIndex);
	}
	template <typename T = uintptr_t> static T LoadPetAnimatorController(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42CB274))(0, name);
	}
	template <typename T = uintptr_t> static T LoadWeapon(Il2CppString* weaponName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42C6B38))(0, weaponName);
	}
	template <typename T = uintptr_t> static T LoadItem(Il2CppString* itemName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42CB3B8))(0, itemName);
	}
	template <typename T = uintptr_t> static T LoadEnemy(Il2CppString* enemyName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42CB558))(0, enemyName);
	}
	template <typename T = uintptr_t> static T LoadMap(Il2CppString* mapName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42CB790))(0, mapName);
	}
	template <typename T = uintptr_t> static T LoadArtifact(Il2CppString* artifactName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42CB924))(0, artifactName);
	}
	template <typename T = int64_t> static T GetAvailableRoom() {
		return ((T (*)(void *))(Il2CppBase() + 0x42CBAB8))(0);
	}

};

}
