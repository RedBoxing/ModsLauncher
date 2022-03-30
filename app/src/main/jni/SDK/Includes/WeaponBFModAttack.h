#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponBFModAttack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponBFModAttack"));
	}

	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& modFactor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& attack() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _hasSet() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponBFModAttack*))(Il2CppBase() + 0x436864C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(WeaponBFModAttack*))(Il2CppBase() + 0x4368730))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(WeaponBFModAttack*))(Il2CppBase() + 0x4368814))(this);
	}
	template <typename T = void> T OnBattleFactorSet(uintptr_t eventBase) {
		return ((T (*)(WeaponBFModAttack*, uintptr_t))(Il2CppBase() + 0x4368C18))(this, eventBase);
	}
	template <typename T = void> T AddExtraAttack() {
		return ((T (*)(WeaponBFModAttack*))(Il2CppBase() + 0x43688C0))(this);
	}
	template <typename T = void> T RemoveExtraAttack() {
		return ((T (*)(WeaponBFModAttack*))(Il2CppBase() + 0x4368A74))(this);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(WeaponBFModAttack*))(Il2CppBase() + 0x4368D28))(this);
	}

};

}
