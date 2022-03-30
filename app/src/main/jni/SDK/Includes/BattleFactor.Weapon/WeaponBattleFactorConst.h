#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BattleFactor.Weapon {

class WeaponBattleFactorConst
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleFactor.Weapon", "WeaponBattleFactorConst"));
	}

	template <typename T = Il2CppString*> static T& InstantiateEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& WeaponAddBattleFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& WeaponRemoveBattleFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
