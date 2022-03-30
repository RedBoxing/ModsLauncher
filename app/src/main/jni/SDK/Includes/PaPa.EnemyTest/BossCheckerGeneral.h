#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.EnemyTest {

class BossCheckerGeneral
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.EnemyTest", "BossCheckerGeneral"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& attack_before_angry() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& attack_after_angry() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _boss() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _boss_ai() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _boss_animator() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _mock_player() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _hp_bar() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& boss_id() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = uintptr_t> T get_boss() {
		return ((T (*)(BossCheckerGeneral*))(Il2CppBase() + 0x26EECF0))(this);
	}
	template <typename T = uintptr_t> T get_boss_ai() {
		return ((T (*)(BossCheckerGeneral*))(Il2CppBase() + 0x26EEE18))(this);
	}
	template <typename T = uintptr_t> T get_mock_player() {
		return ((T (*)(BossCheckerGeneral*))(Il2CppBase() + 0x26F1DA0))(this);
	}
	template <typename T = uintptr_t> T get_boss_animator() {
		return ((T (*)(BossCheckerGeneral*))(Il2CppBase() + 0x26EEF10))(this);
	}
	template <typename T = uintptr_t> T get_hp_bar() {
		return ((T (*)(BossCheckerGeneral*))(Il2CppBase() + 0x26F1E78))(this);
	}
	template <typename T = void> T BeforeRoomStart() {
		return ((T (*)(BossCheckerGeneral*))(Il2CppBase() + 0x26EF344))(this);
	}
	template <typename T = void> T InitCheck() {
		return ((T (*)(BossCheckerGeneral*))(Il2CppBase() + 0x26E9FB8))(this);
	}
	template <typename T = uintptr_t> T DizzyStateBefore() {
		return ((T (*)(BossCheckerGeneral*))(Il2CppBase() + 0x26EFD08))(this);
	}
	template <typename T = uintptr_t> T DizzyStateAfter() {
		return ((T (*)(BossCheckerGeneral*))(Il2CppBase() + 0x26F1F9C))(this);
	}
	template <typename T = uintptr_t> T Damage10() {
		return ((T (*)(BossCheckerGeneral*))(Il2CppBase() + 0x26F207C))(this);
	}
	template <typename T = uintptr_t> T AngryState() {
		return ((T (*)(BossCheckerGeneral*))(Il2CppBase() + 0x26EA424))(this);
	}
	template <typename T = uintptr_t> T BossDead() {
		return ((T (*)(BossCheckerGeneral*))(Il2CppBase() + 0x26F2188))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, Il2CppString* error) {
		return ((T (*)(BossCheckerGeneral*, int32_t, Il2CppString*))(Il2CppBase() + 0x26EF00C))(this, damage, error);
	}
	template <typename T = uintptr_t> T WaitHurtable() {
		return ((T (*)(BossCheckerGeneral*))(Il2CppBase() + 0x26EAB80))(this);
	}
	template <typename T = uintptr_t> T GetHurtCheck(int32_t damage, Il2CppString* error) {
		return ((T (*)(BossCheckerGeneral*, int32_t, Il2CppString*))(Il2CppBase() + 0x26E9A1C))(this, damage, error);
	}
	template <typename T = uintptr_t> T WaitMoveForward() {
		return ((T (*)(BossCheckerGeneral*))(Il2CppBase() + 0x26F22C0))(this);
	}
	template <typename T = uintptr_t> T MoveState() {
		return ((T (*)(BossCheckerGeneral*))(Il2CppBase() + 0x26EC460))(this);
	}
	template <typename T = uintptr_t> T PauseState(Il2CppVector3 init_boss_position, float pause_time, float check_time_scale) {
		return ((T (*)(BossCheckerGeneral*, Il2CppVector3, float, float))(Il2CppBase() + 0x26EC518))(this, init_boss_position, pause_time, check_time_scale);
	}
	template <typename T = uintptr_t> T DizzyState() {
		return ((T (*)(BossCheckerGeneral*))(Il2CppBase() + 0x26EEC38))(this);
	}
	template <typename T = uintptr_t> T CheckSkill(Il2CppArray<uintptr_t>* attack_list) {
		return ((T (*)(BossCheckerGeneral*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x26F2424))(this, attack_list);
	}
	template <typename T = void> T PositionEqual(Il2CppVector3 expected, Il2CppVector3 fact, Il2CppString* error) {
		return ((T (*)(BossCheckerGeneral*, Il2CppVector3, Il2CppVector3, Il2CppString*))(Il2CppBase() + 0x26ED91C))(this, expected, fact, error);
	}

};

}
