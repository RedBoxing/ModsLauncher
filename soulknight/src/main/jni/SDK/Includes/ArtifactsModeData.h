#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactsModeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactsModeData"));
	}

	template <typename T = int32_t> T& rarityFunctionLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& maxWeaponPartRarity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& partUpgradeFailedTimes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& weaponType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& artifactWeaponName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& artifactWeaponParts() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& weaponRecharge() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& playerAddAttack() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& playerAddCrit() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& playerAddEnergy() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& playerAddHP() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& playerAddArmor() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& playerAddAtkSpd() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& currentPlayerHP() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& currentPlayerEnergy() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& EXP() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& playerLevel() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& consumedLevelSkillPoint() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& bossRecords() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& commonData() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = uintptr_t> static T get_Inst() {
		return ((T (*)(void *))(Il2CppBase() + 0x4174280))(0);
	}
	template <typename T = float> T CoinToGemFactor() {
		return ((T (*)(ArtifactsModeData*))(Il2CppBase() + 0x417D6D8))(this);
	}

};

}
