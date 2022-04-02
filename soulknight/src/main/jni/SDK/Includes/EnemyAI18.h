#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI18
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI18"));
	}

	template <typename T = float> T& shoot_speed() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uintptr_t> T& dead_obj() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = float> T& hand_rot_speed() {
		return *(T*)((uintptr_t)this + 0x248);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A1F2FC))(this);
	}
	template <typename T = void> T StartEnemyAI() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A1F488))(this);
	}
	template <typename T = void> T SetUpAttribution() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A1F6D8))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A1F73C))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A1F798))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A1FC5C))(this);
	}
	template <typename T = void> T Atk() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A1FDE8))(this);
	}
	template <typename T = void> T StopShooting() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A1FE70))(this);
	}
	template <typename T = void> T StartShooting() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A1FD68))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A1FEF4))(this);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(EnemyAI18*, float, bool))(Il2CppBase() + 0x2A2001C))(this, duration, isFreeze);
	}
	template <typename T = void> T EndDizzy() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A20108))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A20188))(this);
	}
	template <typename T = void> T DeadEvent() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A202D4))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A204C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartEnemyAI() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A20638))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUpAttribution() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A20640))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A20648))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A20650))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A20658))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A20660))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(EnemyAI18*, float, bool))(Il2CppBase() + 0x2A20668))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_EndDizzy() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A20674))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A2067C))(this);
	}
	template <typename T = void> T iFixBaseProxy_EndCycle() {
		return ((T (*)(EnemyAI18*))(Il2CppBase() + 0x2A20684))(this);
	}

};

}
