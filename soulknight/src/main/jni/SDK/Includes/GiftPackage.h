#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GiftPackage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GiftPackage"));
	}

	template <typename T = uintptr_t> T& packageType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& GiftName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& RewardGem() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& HasRebornCard() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsLockPlant1() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& IsLockPlant2() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = bool> T& IsLockPlant3() {
		return *(T*)((uintptr_t)this + 0x27);
	}
	template <typename T = bool> T& IsLockPlant4() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ExperienceTicket() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& HeroUnLock() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& HeroSkinUnLock() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& HeroLevelUnLock() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& HeroSkillUnLock() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppArray<uintptr_t>*>*> T& HeroSkillsUnLock() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PetUnLock() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Pickables() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& AwardWeaponList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<int32_t>*> T& MultiRoomSkinUnLock() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = uintptr_t> static T CreateGiftPackage() {
		return ((T (*)(void *))(Il2CppBase() + 0x443AF74))(0);
	}
	template <typename T = uintptr_t> static T CreateFullGiftPackage() {
		return ((T (*)(void *))(Il2CppBase() + 0x443B008))(0);
	}
	template <typename T = void> T AddHeroSkin(uintptr_t hero, int32_t idx) {
		return ((T (*)(GiftPackage*, uintptr_t, int32_t))(Il2CppBase() + 0x443B09C))(this, hero, idx);
	}
	template <typename T = void> T ForeachHeroSkinUnLock(void* call) {
		return ((T (*)(GiftPackage*, void*))(Il2CppBase() + 0x4433C40))(this, call);
	}
	template <typename T = void> T ClearData() {
		return ((T (*)(GiftPackage*))(Il2CppBase() + 0x443B224))(this);
	}

};

}
