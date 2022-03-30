#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponScene"));
	}

	template <typename T = float> T& attack_interval() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& attack_count() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& temp_weapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& weapon_list() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& temp_eventAdder() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& temp_index() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& weapon_name() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& create_bullet() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& after_create_bullet() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& after_attack() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& auto_switch_mode_text() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& weapon_name_input() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& can_attack() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& continue_atk_time() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& enemy_root_proto() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& the_enemy_root() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& auto_mode() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponScene*))(Il2CppBase() + 0x45FB844))(this);
	}
	template <typename T = uintptr_t> T CreatingSingleton() {
		return ((T (*)(WeaponScene*))(Il2CppBase() + 0x45FB93C))(this);
	}
	template <typename T = void> T InitNetControllers() {
		return ((T (*)(WeaponScene*))(Il2CppBase() + 0x45FB8E0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(WeaponScene*))(Il2CppBase() + 0x45FBA1C))(this);
	}
	template <typename T = void> T SwitchAutoMode() {
		return ((T (*)(WeaponScene*))(Il2CppBase() + 0x45FBDE0))(this);
	}
	template <typename T = void> T UpdateSwitchAutoModeText() {
		return ((T (*)(WeaponScene*))(Il2CppBase() + 0x45FBD04))(this);
	}
	template <typename T = void> T AutoSwitchNextWeapon() {
		return ((T (*)(WeaponScene*))(Il2CppBase() + 0x45FBEB4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WeaponScene*))(Il2CppBase() + 0x45FC330))(this);
	}
	template <typename T = void> T UpdateWeaponInfo() {
		return ((T (*)(WeaponScene*))(Il2CppBase() + 0x45FC3A8))(this);
	}
	template <typename T = void> T UpdateEventInfo() {
		return ((T (*)(WeaponScene*))(Il2CppBase() + 0x45FC4D8))(this);
	}
	template <typename T = void> T InputHandler() {
		return ((T (*)(WeaponScene*))(Il2CppBase() + 0x45FC6CC))(this);
	}
	template <typename T = void> T ProcessWeaponRot() {
		return ((T (*)(WeaponScene*))(Il2CppBase() + 0x45FC790))(this);
	}
	template <typename T = void> T InitWeaponInfo() {
		return ((T (*)(WeaponScene*))(Il2CppBase() + 0x45FCD48))(this);
	}
	template <typename T = void> T WeaponSwitch(int32_t temp_index) {
		return ((T (*)(WeaponScene*, int32_t))(Il2CppBase() + 0x45FCDA4))(this, temp_index);
	}
	template <typename T = void> T NextWeapon() {
		return ((T (*)(WeaponScene*))(Il2CppBase() + 0x45FBF78))(this);
	}
	template <typename T = void> T PreviousWeapon() {
		return ((T (*)(WeaponScene*))(Il2CppBase() + 0x45FC9B8))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(WeaponScene*))(Il2CppBase() + 0x45FC044))(this);
	}
	template <typename T = void> T ChangeTargetWeapon() {
		return ((T (*)(WeaponScene*))(Il2CppBase() + 0x45FD11C))(this);
	}
	template <typename T = uintptr_t> T WeaponAttack() {
		return ((T (*)(WeaponScene*))(Il2CppBase() + 0x45FD068))(this);
	}
	template <typename T = float> T GetAtkDurTime(uintptr_t weapon) {
		return ((T (*)(WeaponScene*, uintptr_t))(Il2CppBase() + 0x45FC130))(this, weapon);
	}
	template <typename T = void> T RefreshEnemies() {
		return ((T (*)(WeaponScene*))(Il2CppBase() + 0x45FCAB4))(this);
	}
	template <typename T = void> T LogFormat(Il2CppString* msg) {
		return ((T (*)(WeaponScene*, Il2CppString*))(Il2CppBase() + 0x45FD510))(this, msg);
	}

};

}
