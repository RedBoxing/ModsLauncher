#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponEatGift
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponEatGift"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& weaponWeights() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& getSelfRate() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& maxGetSelfTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& finalSelfWeaponName() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& isGetSelf() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& getSelfCount() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T Start() {
		return ((T (*)(WeaponEatGift*))(Il2CppBase() + 0x44991FC))(this);
	}
	template <typename T = void> T MakeEffect(uintptr_t controller) {
		return ((T (*)(WeaponEatGift*, uintptr_t))(Il2CppBase() + 0x44992C4))(this, controller);
	}
	template <typename T = Il2CppString*> T GetWeaponName() {
		return ((T (*)(WeaponEatGift*))(Il2CppBase() + 0x44995B0))(this);
	}

};

}
