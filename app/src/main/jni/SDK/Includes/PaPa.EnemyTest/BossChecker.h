#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.EnemyTest {

class BossChecker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.EnemyTest", "BossChecker"));
	}

	template <typename T = Il2CppString*> T& boss_room_name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& idle_state_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& dead_state_name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& wait_after_dead() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& run_state_param() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_boss() {
		return ((T (*)(BossChecker*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_boss_ai() {
		return ((T (*)(BossChecker*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_mock_player() {
		return ((T (*)(BossChecker*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_boss_animator() {
		return ((T (*)(BossChecker*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_hp_bar() {
		return ((T (*)(BossChecker*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T BeforeRoomStart() {
		return ((T (*)(BossChecker*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T InitCheck() {
		return ((T (*)(BossChecker*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T DizzyStateBefore() {
		return ((T (*)(BossChecker*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T DizzyStateAfter() {
		return ((T (*)(BossChecker*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T AngryState() {
		return ((T (*)(BossChecker*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T Damage10() {
		return ((T (*)(BossChecker*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T BossDead() {
		return ((T (*)(BossChecker*))(Il2CppBase() + 0x0))(this);
	}

};

}
