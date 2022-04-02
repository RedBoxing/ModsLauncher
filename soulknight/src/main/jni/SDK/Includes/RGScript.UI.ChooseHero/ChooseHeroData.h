#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.ChooseHero {

class ChooseHeroData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.ChooseHero", "ChooseHeroData"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& unlocked() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& skinIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& maxLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& price() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& attributes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skillsUnlocked() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skillsPrice() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& skillIndex() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& trialTicketNum() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& buffAndWeaponButtonState() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& isShowUpgradeButton() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SkinDataList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& skinCellIndex() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& skillDemoEnabled() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& confirmButtonState() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& purchaseState() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& hideType() {
		return *(T*)((uintptr_t)this + 0x60);
	}


};

}
