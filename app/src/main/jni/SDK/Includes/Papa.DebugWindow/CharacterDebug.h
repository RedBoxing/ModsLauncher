#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Papa.DebugWindow {

class CharacterDebug
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Papa.DebugWindow", "CharacterDebug"));
	}

	template <typename T = Il2CppList<int32_t>*> T& unlockSkinCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& unlockPetCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& weaponItem() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& checkWeapon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& itemCount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& levelIndex() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& branch() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& gameMode() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& boss_names() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& br_boss_names() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> T& boss_dic() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& gemCount() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& hp() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& armor() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& energy() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& coin() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> static T& lockLevelBranch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = char> T get_branch_char() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x45670D0))(this);
	}
	template <typename T = void> T InitData() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x456720C))(this);
	}
	template <typename T = void> T InitBossData() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x4567878))(this);
	}
	template <typename T = void> T UnlockRoom() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x45678D4))(this);
	}
	template <typename T = void> T UnlockAllHeroPet() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x4567DBC))(this);
	}
	template <typename T = void> T UnlockAllSkin() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x4567F48))(this);
	}
	template <typename T = void> T HeroMaxLevel() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x45680CC))(this);
	}
	template <typename T = void> T GetAllWeapon() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x45681F0))(this);
	}
	template <typename T = void> T ResetTutorial() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x45683D8))(this);
	}
	template <typename T = void> T ResetBossRushTimes() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x45684A0))(this);
	}
	template <typename T = void> T GetGem() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x456855C))(this);
	}
	template <typename T = void> T GetAllMaterials(int32_t num) {
		return ((T (*)(CharacterDebug*, int32_t))(Il2CppBase() + 0x45686BC))(this, num);
	}
	template <typename T = void> T GetAllBlueprints() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x4568890))(this);
	}
	template <typename T = void> T UnlockHeroSecondSkill() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x4568A58))(this);
	}
	template <typename T = void> T ClearData(Il2CppArray<uintptr_t>* path_list) {
		return ((T (*)(CharacterDebug*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45677A4))(this, path_list);
	}
	template <typename T = Il2CppString*> T get_data_path() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x4567544))(this);
	}
	template <typename T = Il2CppString*> T get_backup_path() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x45674AC))(this);
	}
	template <typename T = Il2CppString*> T get_item_data_path() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x45675DC))(this);
	}
	template <typename T = Il2CppString*> T get_item_data_backup_path() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x456770C))(this);
	}
	template <typename T = Il2CppString*> static T get_battle_path() {
		return ((T (*)(void *))(Il2CppBase() + 0x4568BA4))(0);
	}
	template <typename T = Il2CppString*> T get_statistic_path() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x4567674))(this);
	}
	template <typename T = void> T GetWeapon() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x4568C34))(this);
	}
	template <typename T = bool> T CanGetWeapon() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x4568DC8))(this);
	}
	template <typename T = bool> T CanGetWeaponItem() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x4568EF0))(this);
	}
	template <typename T = void> T GetWeaponItem() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x4569018))(this);
	}
	template <typename T = bool> T CanGetWeaponSupportedItem() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x456926C))(this);
	}
	template <typename T = void> T GetWeaponSupportedItem() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x4569394))(this);
	}
	template <typename T = void> T SetHp() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x456976C))(this);
	}
	template <typename T = void> T SetEnergy() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x45698D4))(this);
	}
	template <typename T = void> T SetArmor() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x4569A3C))(this);
	}
	template <typename T = void> T SetCoin() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x4569B84))(this);
	}
	template <typename T = bool> T CanGetItem() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x4569C64))(this);
	}
	template <typename T = void> T GetItem() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x4569D8C))(this);
	}
	template <typename T = bool> T CanSetLevel() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x4569F68))(this);
	}
	template <typename T = bool> T IsBranchSuitable() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x456A070))(this);
	}
	template <typename T = void> T SetLevel() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x456A0FC))(this);
	}
	template <typename T = void> T BackHeroRoom() {
		return ((T (*)(CharacterDebug*))(Il2CppBase() + 0x456A4F4))(this);
	}

};

}
