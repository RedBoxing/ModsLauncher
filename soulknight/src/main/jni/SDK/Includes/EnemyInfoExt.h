#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyInfoExt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyInfoExt"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> static T& EnemyConditions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ConditionFirstRoundOnly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& _validEnemyInfoBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T GetRandomEnemyInfoWithCondition(Il2CppArray<uintptr_t>* infos, uintptr_t random, uintptr_t state) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1FEB1CC))(0, infos, random, state);
	}
	template <typename T = bool> static T CanGenerate(uintptr_t enemyInfo, uintptr_t state) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1FEDAF4))(0, enemyInfo, state);
	}

};

}
