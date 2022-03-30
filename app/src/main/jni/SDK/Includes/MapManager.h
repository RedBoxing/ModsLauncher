#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MapManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapManager"));
	}

	template <typename T = uintptr_t> T& rg_random() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& level() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& bgm_clip() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& camera_bg() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& centerPoint() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& all_room() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& enterNextMap() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& gameStartTracked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& environmentSpriteMaterial() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& environmentAlphaMaterial() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = Il2CppString*> T get_levelText() {
		return ((T (*)(MapManager*))(Il2CppBase() + 0x4300EB4))(this);
	}
	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4300F14))(0);
	}
	template <typename T = int32_t> T get_chestLevel() {
		return ((T (*)(MapManager*))(Il2CppBase() + 0x430101C))(this);
	}
	template <typename T = int32_t> T get_loopCount() {
		return ((T (*)(MapManager*))(Il2CppBase() + 0x430107C))(this);
	}
	template <typename T = uintptr_t> T get_bgm() {
		return ((T (*)(MapManager*))(Il2CppBase() + 0x430117C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MapManager*))(Il2CppBase() + 0x43011DC))(this);
	}
	template <typename T = void> T InitCamera() {
		return ((T (*)(MapManager*))(Il2CppBase() + 0x43015D0))(this);
	}
	template <typename T = void> T SetRGRandomSeed(int32_t seed) {
		return ((T (*)(MapManager*, int32_t))(Il2CppBase() + 0x430162C))(this, seed);
	}
	template <typename T = Il2CppString*> static T GetMapManagerName(int32_t levelIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x43016B8))(0, levelIndex);
	}
	template <typename T = void> T CreateMap() {
		return ((T (*)(MapManager*))(Il2CppBase() + 0x4301F48))(this);
	}
	template <typename T = int32_t> T GetAdditionDamage(int32_t camp) {
		return ((T (*)(MapManager*, int32_t))(Il2CppBase() + 0x4301FA4))(this, camp);
	}
	template <typename T = uintptr_t> T GetRoomByName(Il2CppString* room_name) {
		return ((T (*)(MapManager*, Il2CppString*))(Il2CppBase() + 0x4302018))(this, room_name);
	}
	template <typename T = Il2CppString*> static T GetLevelText(uintptr_t battleData, bool includeHeroRoom) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4302198))(0, battleData, includeHeroRoom);
	}
	template <typename T = Il2CppString*> static T GetLevelText_1(int32_t index, bool isBossRush, bool isLoop, bool includeHeroRoom, bool inDungeon) {
		return ((T (*)(void *, int32_t, bool, bool, bool, bool))(Il2CppBase() + 0x4302278))(0, index, isBossRush, isLoop, includeHeroRoom, inDungeon);
	}
	template <typename T = int32_t> static T GetSceneIndex(int32_t index, bool isBossRush, bool isLoop, bool inDungeon) {
		return ((T (*)(void *, int32_t, bool, bool, bool))(Il2CppBase() + 0x43023FC))(0, index, isBossRush, isLoop, inDungeon);
	}
	template <typename T = int32_t> static T GetLevelIndex(int32_t index, bool isBossRush, bool isLoop, bool inDungeon) {
		return ((T (*)(void *, int32_t, bool, bool, bool))(Il2CppBase() + 0x43024BC))(0, index, isBossRush, isLoop, inDungeon);
	}
	template <typename T = void> T StatisticGameStart() {
		return ((T (*)(MapManager*))(Il2CppBase() + 0x43013C0))(this);
	}
	template <typename T = void> T ReplaceEnvironmentMaterials() {
		return ((T (*)(MapManager*))(Il2CppBase() + 0x4302588))(this);
	}

};

}
