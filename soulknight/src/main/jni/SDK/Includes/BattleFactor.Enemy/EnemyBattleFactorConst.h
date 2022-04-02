#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BattleFactor.Enemy {

class EnemyBattleFactorConst
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleFactor.Enemy", "EnemyBattleFactorConst"));
	}

	template <typename T = Il2CppString*> static T& EnemyDeadEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& EnemyHurtEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
