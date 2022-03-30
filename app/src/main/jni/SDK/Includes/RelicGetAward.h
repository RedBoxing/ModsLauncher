#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicGetAward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicGetAward"));
	}

	template <typename T = int32_t> T& emptyWeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& coinWeight() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& potWeight() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& enemyWeight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& weaponWeight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& coinCount() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& hasCoinCat() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& energyPotProbability() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& enemyPrefabs() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& enemyCountRange() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& enemyInstantiateRadius() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& enemyInstantiateDuration() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& enemyShowDelay() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& enemyInstantiateEffectPrefab() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& weaponLevel() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& instantiatePositionOffset() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& generateParent() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = uintptr_t> T get_RewardParent() {
		return ((T (*)(RelicGetAward*))(Il2CppBase() + 0x42C5ADC))(this);
	}
	template <typename T = bool> T CheckBombGiftFactor() {
		return ((T (*)(RelicGetAward*))(Il2CppBase() + 0x42C5BD0))(this);
	}
	template <typename T = void> T OnBoxDestroy() {
		return ((T (*)(RelicGetAward*))(Il2CppBase() + 0x42C5CE4))(this);
	}
	template <typename T = void> T InstantiateWeapon() {
		return ((T (*)(RelicGetAward*))(Il2CppBase() + 0x42C6894))(this);
	}
	template <typename T = uintptr_t> T InstantiateEnemies() {
		return ((T (*)(RelicGetAward*))(Il2CppBase() + 0x42C67E0))(this);
	}
	template <typename T = void> T InstantiatePot() {
		return ((T (*)(RelicGetAward*))(Il2CppBase() + 0x42C6584))(this);
	}
	template <typename T = void> T InstantiateCoin() {
		return ((T (*)(RelicGetAward*))(Il2CppBase() + 0x42C5EB8))(this);
	}

};

}
