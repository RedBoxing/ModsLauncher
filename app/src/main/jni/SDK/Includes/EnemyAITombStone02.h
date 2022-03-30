#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAITombStone02
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAITombStone02"));
	}

	template <typename T = bool> T& has_lifetime() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = float> T& lifetime() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = uintptr_t> T& shock_bullet() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& buff_obj() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& the_buff_obj() {
		return *(T*)((uintptr_t)this + 0x250);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAITombStone02*))(Il2CppBase() + 0x1FDF904))(this);
	}
	template <typename T = void> T OnAtk01() {
		return ((T (*)(EnemyAITombStone02*))(Il2CppBase() + 0x1FDFA68))(this);
	}
	template <typename T = void> T StartTempEnemyAI() {
		return ((T (*)(EnemyAITombStone02*))(Il2CppBase() + 0x1FDFCF0))(this);
	}
	template <typename T = void> T Dead() {
		return ((T (*)(EnemyAITombStone02*))(Il2CppBase() + 0x1FDFDA8))(this);
	}
	template <typename T = void> T Dead_1(uintptr_t source_object, bool sync) {
		return ((T (*)(EnemyAITombStone02*, uintptr_t, bool))(Il2CppBase() + 0x1FDFE28))(this, source_object, sync);
	}
	template <typename T = void> T CreateBuff() {
		return ((T (*)(EnemyAITombStone02*))(Il2CppBase() + 0x1FDFF70))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAITombStone02*))(Il2CppBase() + 0x1FE01DC))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartTempEnemyAI() {
		return ((T (*)(EnemyAITombStone02*))(Il2CppBase() + 0x1FE02B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dead(uintptr_t P0, bool P1) {
		return ((T (*)(EnemyAITombStone02*, uintptr_t, bool))(Il2CppBase() + 0x1FE02B8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAITombStone02*))(Il2CppBase() + 0x1FE02C4))(this);
	}

};

}
