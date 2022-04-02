#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAITombStone01
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAITombStone01"));
	}

	template <typename T = bool> T& has_lifetime() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = float> T& lifetime() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = float> T& spawn_time() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = int32_t> T& spawn_max() {
		return *(T*)((uintptr_t)this + 0x244);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& spawn_enemy_list() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& dust_particle() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& all_spawn_enemy_dic() {
		return *(T*)((uintptr_t)this + 0x258);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAITombStone01*))(Il2CppBase() + 0x1FDEBA8))(this);
	}
	template <typename T = void> T SetUpAttribution() {
		return ((T (*)(EnemyAITombStone01*))(Il2CppBase() + 0x1FDED68))(this);
	}
	template <typename T = void> T StartTempEnemyAI() {
		return ((T (*)(EnemyAITombStone01*))(Il2CppBase() + 0x1FDEDCC))(this);
	}
	template <typename T = void> T Dead() {
		return ((T (*)(EnemyAITombStone01*))(Il2CppBase() + 0x1FDEF74))(this);
	}
	template <typename T = void> T Dead_1(uintptr_t source_object, bool sync) {
		return ((T (*)(EnemyAITombStone01*, uintptr_t, bool))(Il2CppBase() + 0x1FDEFF4))(this, source_object, sync);
	}
	template <typename T = void> T ShowDeadAnimation() {
		return ((T (*)(EnemyAITombStone01*))(Il2CppBase() + 0x1FDF0B8))(this);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(EnemyAITombStone01*, float, bool))(Il2CppBase() + 0x1FDF1D4))(this, duration, isFreeze);
	}
	template <typename T = void> T SpawnEnemyWithEffect() {
		return ((T (*)(EnemyAITombStone01*))(Il2CppBase() + 0x1FDEE80))(this);
	}
	template <typename T = void> T UpdateEnemyDic() {
		return ((T (*)(EnemyAITombStone01*))(Il2CppBase() + 0x1FDF258))(this);
	}
	template <typename T = void> T SpawnEnemy() {
		return ((T (*)(EnemyAITombStone01*))(Il2CppBase() + 0x1FDF5A4))(this);
	}
	template <typename T = void> T PlayDustParticle() {
		return ((T (*)(EnemyAITombStone01*))(Il2CppBase() + 0x1FDF124))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUpAttribution() {
		return ((T (*)(EnemyAITombStone01*))(Il2CppBase() + 0x1FDF8D4))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartTempEnemyAI() {
		return ((T (*)(EnemyAITombStone01*))(Il2CppBase() + 0x1FDF8DC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dead(uintptr_t P0, bool P1) {
		return ((T (*)(EnemyAITombStone01*, uintptr_t, bool))(Il2CppBase() + 0x1FDF8E4))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ShowDeadAnimation() {
		return ((T (*)(EnemyAITombStone01*))(Il2CppBase() + 0x1FDF8F0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(EnemyAITombStone01*, float, bool))(Il2CppBase() + 0x1FDF8F8))(this, P0, P1);
	}

};

}
