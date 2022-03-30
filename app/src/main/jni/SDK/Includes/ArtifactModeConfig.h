#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactModeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactModeConfig"));
	}

	template <typename T = uintptr_t> static T& Inst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& stdSwordAtk() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& stdStaffAtk() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& stdBowAtk() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& stdCrit() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> static T& weaponElementTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> T& weaponPartCount() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& colorOfRarity() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& partFXOnFloor() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& weaponPartMaxRarity() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& rarityFunctionBase() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& pickCoinFactor() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& priceFactor() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& partUpgradeConsume() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& partUpgradeProbability() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& partUpgradeProbabilityIncrement() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& componentUpgradeConsume() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& refreshComponentConsume() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& refreshTimesLimit() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& partValueOfRarity() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& componentValueOfRarity() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& partPriceFactor() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& redProbabilityInBossChest() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& enemyHpFactor() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& bossHpFactor() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& enemyHpIncrementFactor() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& enemyMakerPointFactor() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& enemyMassFactor() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& skillCooldownFactor() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& levelUpExp() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& fxCharacterLevelUp() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& levelUpAddAtk() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> T& levelUpAddCrit() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = int32_t> T& levelUpAddHp() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& levelUpAddArmor() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = int32_t> T& levelUpAddAtkSpd() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& initWeapons() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppList<Il2CppList<float>*>*> T& rarityWeights() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& elementTypeLargeIcon() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& elementTypeSmallIcon() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppString*> static T& assetBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<int32_t>*>*> T& weaponPartTags() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& artifactsContentList() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppArray<uintptr_t>*>*> T& initParts() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> T& artifactsPartList() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> T& weaponComponentsList() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& commonComponentsList() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<Il2CppString*>*>*> T& partNames() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& WeaponInfoPrefab() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& UIUpgradePrefab() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& godPower_sword() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& godPower_staff() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& godPower_bow() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& godPower_fff() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& godPower_ffw() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& godPower_fft() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& godPower_www() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& godPower_wwf() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = uintptr_t> T& godPower_wwt() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = uintptr_t> T& godPower_ttt() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uintptr_t> T& godPower_ttf() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = uintptr_t> T& godPower_ttw() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, float>*>*> T& weaponPartUIObjScale() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, float>*>*> T& weaponPartUIObjRotate() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = int32_t> T& HIGHLIGHT_KILLS() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = int32_t> T& GOD_POWER_KILLS() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = int32_t> T& REFRESH_GOLDS() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = int32_t> T& USE_GOD_POWERS() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = int32_t> T& GOLD_DAMAGE_SUM() {
		return *(T*)((uintptr_t)this + 0x260);
	}

	template <typename T = int32_t> T GetStdAtk(uintptr_t weaponType) {
		return ((T (*)(ArtifactModeConfig*, uintptr_t))(Il2CppBase() + 0x1CA5764))(this, weaponType);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppArray<uintptr_t>*>*> T get_initParts() {
		return ((T (*)(ArtifactModeConfig*))(Il2CppBase() + 0x1CA57F8))(this);
	}
	template <typename T = void> T set_initParts(Il2CppDictionary<uintptr_t, Il2CppArray<uintptr_t>*>* value) {
		return ((T (*)(ArtifactModeConfig*, Il2CppDictionary<uintptr_t, Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x1CA5800))(this, value);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> T get_artifactsPartList() {
		return ((T (*)(ArtifactModeConfig*))(Il2CppBase() + 0x1CA5808))(this);
	}
	template <typename T = void> T set_artifactsPartList(Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>* value) {
		return ((T (*)(ArtifactModeConfig*, Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*))(Il2CppBase() + 0x1CA5810))(this, value);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> T get_weaponComponentsList() {
		return ((T (*)(ArtifactModeConfig*))(Il2CppBase() + 0x1CA5818))(this);
	}
	template <typename T = void> T set_weaponComponentsList(Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>* value) {
		return ((T (*)(ArtifactModeConfig*, Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*))(Il2CppBase() + 0x1CA5820))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_commonComponentsList() {
		return ((T (*)(ArtifactModeConfig*))(Il2CppBase() + 0x1CA5828))(this);
	}
	template <typename T = void> T set_commonComponentsList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(ArtifactModeConfig*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1CA5830))(this, value);
	}
	template <typename T = uintptr_t> T FindPartByName(uintptr_t weaponType, Il2CppString* partName) {
		return ((T (*)(ArtifactModeConfig*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1CA5838))(this, weaponType, partName);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<Il2CppString*>*>*> T get_partNames() {
		return ((T (*)(ArtifactModeConfig*))(Il2CppBase() + 0x1CA5A80))(this);
	}
	template <typename T = void> T set_partNames(Il2CppDictionary<uintptr_t, Il2CppList<Il2CppString*>*>* value) {
		return ((T (*)(ArtifactModeConfig*, Il2CppDictionary<uintptr_t, Il2CppList<Il2CppString*>*>*))(Il2CppBase() + 0x1CA5A88))(this, value);
	}
	template <typename T = int32_t> T get_totalPartCount() {
		return ((T (*)(ArtifactModeConfig*))(Il2CppBase() + 0x1CA5A90))(this);
	}
	template <typename T = void> T LoadPartNames() {
		return ((T (*)(ArtifactModeConfig*))(Il2CppBase() + 0x1CA5C3C))(this);
	}
	template <typename T = void> T LoadContent() {
		return ((T (*)(ArtifactModeConfig*))(Il2CppBase() + 0x1CA62F0))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T PartIDsOfWeapon(uintptr_t weaponType) {
		return ((T (*)(ArtifactModeConfig*, uintptr_t))(Il2CppBase() + 0x1C98334))(this, weaponType);
	}
	template <typename T = float> T GetWeaponPartUIScale(uintptr_t weaponType, int32_t partID) {
		return ((T (*)(ArtifactModeConfig*, uintptr_t, int32_t))(Il2CppBase() + 0x1CA6CC8))(this, weaponType, partID);
	}
	template <typename T = float> T GetWeaponPartUIRotate(uintptr_t weaponType, int32_t partID) {
		return ((T (*)(ArtifactModeConfig*, uintptr_t, int32_t))(Il2CppBase() + 0x1CA6E38))(this, weaponType, partID);
	}
	template <typename T = uintptr_t> T GetGodPower(uintptr_t weaponType, Il2CppArray<uintptr_t>* parts, uintptr_t* main) {
		return ((T (*)(ArtifactModeConfig*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x1CA6FA8))(this, weaponType, parts, main);
	}
	template <typename T = uintptr_t> T GetGodPower_1(uintptr_t weaponType, Il2CppString* str, uintptr_t* main) {
		return ((T (*)(ArtifactModeConfig*, uintptr_t, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x1CA71C0))(this, weaponType, str, main);
	}
	template <typename T = uintptr_t> T GetComponentLevels(uintptr_t weaponType, Il2CppString* name) {
		return ((T (*)(ArtifactModeConfig*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1CA75AC))(this, weaponType, name);
	}
	template <typename T = uintptr_t> static T Load() {
		return ((T (*)(void *))(Il2CppBase() + 0x1CA7840))(0);
	}

};

}
