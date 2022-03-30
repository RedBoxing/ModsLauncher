#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyCreator"));
	}

	template <typename T = uintptr_t> T& defaultTarget() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& direction() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isCreating() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T StartCreateEnemy(uintptr_t enemyProto, int32_t totalCount, float interval) {
		return ((T (*)(EnemyCreator*, uintptr_t, int32_t, float))(Il2CppBase() + 0x1FE6088))(this, enemyProto, totalCount, interval);
	}
	template <typename T = uintptr_t> T CreatingEnemies(uintptr_t enemyProto, int32_t totalCount, float interval) {
		return ((T (*)(EnemyCreator*, uintptr_t, int32_t, float))(Il2CppBase() + 0x1FE6150))(this, enemyProto, totalCount, interval);
	}
	template <typename T = void> T StartCreateEnemy_1(Il2CppList<uintptr_t>* enemies, float interval) {
		return ((T (*)(EnemyCreator*, Il2CppList<uintptr_t>*, float))(Il2CppBase() + 0x1FE62A0))(this, enemies, interval);
	}
	template <typename T = uintptr_t> T CreatingEnemies_1(Il2CppList<uintptr_t>* enemies, float interval) {
		return ((T (*)(EnemyCreator*, Il2CppList<uintptr_t>*, float))(Il2CppBase() + 0x1FE635C))(this, enemies, interval);
	}
	template <typename T = void> T OnEnemyCreate(uintptr_t enemy) {
		return ((T (*)(EnemyCreator*, uintptr_t))(Il2CppBase() + 0x1FE6490))(this, enemy);
	}

};

}
