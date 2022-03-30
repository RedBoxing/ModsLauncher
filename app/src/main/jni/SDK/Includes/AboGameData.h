#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AboGameData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AboGameData"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, int32_t>*>*> T& skinLock() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& currentSkinDatas() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uintptr_t, bool>*> T& heroUnlock() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& heroLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& heroSkill() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, bool>*>*> T& heroSkillUnlock() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppDictionary<uintptr_t, bool>*> T& petUnlock() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& roomObjectLevel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& usedSecretKeys() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& promotions2RewardVersion() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& unlockRoomDecorate() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& certificates() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& currentRoomDecorate() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& itemData() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& gems() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& lastGems() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& varGems() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& rebornCard() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& hasTutorial() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& firstInRoom() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& roomLevel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& fishChip() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& gameVersion() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& lastPlayTime() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& totalIndex() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& totalGameTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& generalSeed() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& tutorialEndTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& checkUnlockWorkShopTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = uintptr_t> static T CreateFromPlayerPref() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A01800))(0);
	}
	template <typename T = void> T CoverPlayerPref() {
		return ((T (*)(AboGameData*))(Il2CppBase() + 0x1A02CDC))(this);
	}
	template <typename T = void> T RefreshUI() {
		return ((T (*)(AboGameData*))(Il2CppBase() + 0x1A052EC))(this);
	}
	template <typename T = int32_t> T GetProgressScope() {
		return ((T (*)(AboGameData*))(Il2CppBase() + 0x1A054F8))(this);
	}
	template <typename T = void> T Merge(uintptr_t other) {
		return ((T (*)(AboGameData*, uintptr_t))(Il2CppBase() + 0x1A06180))(this, other);
	}
	template <typename T = void> T CoverPlayerPrefSafely() {
		return ((T (*)(AboGameData*))(Il2CppBase() + 0x1A0761C))(this);
	}

};

}
