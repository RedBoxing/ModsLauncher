#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGSaveManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSaveManager"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& char_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& pet_list() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hero_skin_list() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& game_data() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& gems_icon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& fish_icon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& c_levelup_gems() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& store_key() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Init() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C2073C))(this);
	}
	template <typename T = void> T OnLoad() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C25B94))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C25CC4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C25DD8))(this);
	}
	template <typename T = void> T InitSave() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C20F6C))(this);
	}
	template <typename T = void> T Save() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C25EDC))(this);
	}
	template <typename T = void> T Load() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C24D40))(this);
	}
	template <typename T = int32_t> T LoadLastPetIndex() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C26424))(this);
	}
	template <typename T = void> T SaveLastPetIndex(int32_t value) {
		return ((T (*)(RGSaveManager*, int32_t))(Il2CppBase() + 0x1C264E8))(this, value);
	}
	template <typename T = bool> T HeroUnLock(int32_t id) {
		return ((T (*)(RGSaveManager*, int32_t))(Il2CppBase() + 0x1C265C4))(this, id);
	}
	template <typename T = bool> T HeroSkinUnlock(int32_t f_char_id, int32_t f_skin_id, uintptr_t unlockType) {
		return ((T (*)(RGSaveManager*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x1C26C74))(this, f_char_id, f_skin_id, unlockType);
	}
	template <typename T = bool> T IsHeroSkinUnlock(int32_t f_char_id, int32_t f_skin_id) {
		return ((T (*)(RGSaveManager*, int32_t, int32_t))(Il2CppBase() + 0x1C26F2C))(this, f_char_id, f_skin_id);
	}
	template <typename T = int32_t> T ForceUnlockHeroSkin(int32_t f_char_id, int32_t f_skin_id) {
		return ((T (*)(RGSaveManager*, int32_t, int32_t))(Il2CppBase() + 0x1C27028))(this, f_char_id, f_skin_id);
	}
	template <typename T = void> T GetReBornCard() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C271BC))(this);
	}
	template <typename T = bool> T PetUnLock(int32_t id) {
		return ((T (*)(RGSaveManager*, int32_t))(Il2CppBase() + 0x1C27284))(this, id);
	}
	template <typename T = bool> T HeroLevelUp(int32_t id) {
		return ((T (*)(RGSaveManager*, int32_t))(Il2CppBase() + 0x1C27510))(this, id);
	}
	template <typename T = bool> T ConsumeGem(int32_t value, bool needRecord) {
		return ((T (*)(RGSaveManager*, int32_t, bool))(Il2CppBase() + 0x1C26868))(this, value, needRecord);
	}
	template <typename T = void> T AddGem(int32_t value) {
		return ((T (*)(RGSaveManager*, int32_t))(Il2CppBase() + 0x1C277AC))(this, value);
	}
	template <typename T = void> T AddGem_1(int32_t addGem, uintptr_t obtainGemType, Il2CppDictionary<Il2CppString*, uintptr_t>* param) {
		return ((T (*)(RGSaveManager*, int32_t, uintptr_t, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1C27B14))(this, addGem, obtainGemType, param);
	}
	template <typename T = void> T LocalAddGem(int32_t addGem) {
		return ((T (*)(RGSaveManager*, int32_t))(Il2CppBase() + 0x1C27824))(this, addGem);
	}
	template <typename T = int32_t> T GetGem() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C27BBC))(this);
	}
	template <typename T = uintptr_t> T GetHeroUISprite(int32_t f_hero_index, int32_t f_hero_skin) {
		return ((T (*)(RGSaveManager*, int32_t, int32_t))(Il2CppBase() + 0x1C27C80))(this, f_hero_index, f_hero_skin);
	}
	template <typename T = uintptr_t> T GetPetUISprite(int32_t petIndex) {
		return ((T (*)(RGSaveManager*, int32_t))(Il2CppBase() + 0x1C27E74))(this, petIndex);
	}
	template <typename T = Il2CppString*> static T get_Path() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C27F50))(0);
	}
	template <typename T = Il2CppString*> static T get_OldPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C27FE0))(0);
	}
	template <typename T = void> T SaveGameData() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C28070))(this);
	}
	template <typename T = void> T LoadGameData() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C20D84))(this);
	}
	template <typename T = void> T SetCurrentSkin(uintptr_t hero_index, int32_t skin_index) {
		return ((T (*)(RGSaveManager*, uintptr_t, int32_t))(Il2CppBase() + 0x1C281BC))(this, hero_index, skin_index);
	}
	template <typename T = int32_t> T GetCurrentSkin(uintptr_t hero) {
		return ((T (*)(RGSaveManager*, uintptr_t))(Il2CppBase() + 0x1C28298))(this, hero);
	}
	template <typename T = int32_t> T GetSkillIndex(uintptr_t hero) {
		return ((T (*)(RGSaveManager*, uintptr_t))(Il2CppBase() + 0x1C28560))(this, hero);
	}
	template <typename T = void> T SetSkillIndex(uintptr_t hero, int32_t skillIndex) {
		return ((T (*)(RGSaveManager*, uintptr_t, int32_t))(Il2CppBase() + 0x1C2866C))(this, hero, skillIndex);
	}
	template <typename T = bool> T GetSkillUnlock(uintptr_t hero, int32_t skillIndex) {
		return ((T (*)(RGSaveManager*, uintptr_t, int32_t))(Il2CppBase() + 0x1C2878C))(this, hero, skillIndex);
	}
	template <typename T = void> T SetSkillUnlock(uintptr_t hero, int32_t skillIndex, bool isUnlock) {
		return ((T (*)(RGSaveManager*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x1C289C4))(this, hero, skillIndex, isUnlock);
	}
	template <typename T = uintptr_t> T GetSkillInfo(uintptr_t hero, int32_t skillIndex) {
		return ((T (*)(RGSaveManager*, uintptr_t, int32_t))(Il2CppBase() + 0x1C28A74))(this, hero, skillIndex);
	}
	template <typename T = bool> T UnlockAllHero() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C28BC0))(this);
	}
	template <typename T = void> T Reload() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C28CA4))(this);
	}
	template <typename T = void> static T ReloadAllData() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C291B8))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C29424))(this);
	}
	template <typename T = void> T SetUpKtPlay() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C25D24))(this);
	}
	template <typename T = bool> T TryUnlockHero(Il2CppString* key) {
		return ((T (*)(RGSaveManager*, Il2CppString*))(Il2CppBase() + 0x1C29510))(this, key);
	}
	template <typename T = bool> T TryUnlockKtSkin(Il2CppString* key) {
		return ((T (*)(RGSaveManager*, Il2CppString*))(Il2CppBase() + 0x1C29700))(this, key);
	}
	template <typename T = bool> T TryUnlockPet(Il2CppString* key) {
		return ((T (*)(RGSaveManager*, Il2CppString*))(Il2CppBase() + 0x1C29A84))(this, key);
	}
	template <typename T = bool> T TryUnlockSkill(Il2CppString* key) {
		return ((T (*)(RGSaveManager*, Il2CppString*))(Il2CppBase() + 0x1C29CF0))(this, key);
	}
	template <typename T = bool> T TryUnlockPlantPot(Il2CppString* key) {
		return ((T (*)(RGSaveManager*, Il2CppString*))(Il2CppBase() + 0x1C2A02C))(this, key);
	}
	template <typename T = void> T UpdateVersion() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C21714))(this);
	}
	template <typename T = void> T UpdateAddition() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C2A498))(this);
	}
	template <typename T = void> T Fix43Data() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C2A384))(this);
	}
	template <typename T = void> T Fix43DataLocal() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C2A3E0))(this);
	}
	template <typename T = void> T Fix43DataNotUseCloudSave() {
		return ((T (*)(RGSaveManager*))(Il2CppBase() + 0x1C2A43C))(this);
	}
	template <typename T = void> T Fix43Data_1(Il2CppDictionary<Il2CppString*, bool>* OldLocalChannelUidRegDic) {
		return ((T (*)(RGSaveManager*, Il2CppDictionary<Il2CppString*, bool>*))(Il2CppBase() + 0x1C2A4F4))(this, OldLocalChannelUidRegDic);
	}
	template <typename T = void> T FixData(Il2CppString* Key) {
		return ((T (*)(RGSaveManager*, Il2CppString*))(Il2CppBase() + 0x1C2A564))(this, Key);
	}
	template <typename T = void> T SetUpKtPlayb__48_0(uintptr_t reward) {
		return ((T (*)(RGSaveManager*, uintptr_t))(Il2CppBase() + 0x1C2A694))(this, reward);
	}

};

}
