#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DeadBodyController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeadBodyController"));
	}

	template <typename T = uintptr_t> T& enemy() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = uintptr_t> T& _skillStateUpdate() {
		return *(T*)((uintptr_t)this + 0x260);
	}

	template <typename T = bool> T get_isBoss() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DC1C4))(this);
	}
	template <typename T = uintptr_t> static T CreateController(uintptr_t enemy, uintptr_t master, int32_t camp) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x42DC238))(0, enemy, master, camp);
	}
	template <typename T = void> T StartControll() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DC98C))(this);
	}
	template <typename T = void> T Setup(uintptr_t enemy) {
		return ((T (*)(DeadBodyController*, uintptr_t))(Il2CppBase() + 0x42DC62C))(this, enemy);
	}
	template <typename T = void> T Reborn() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DC3F8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DCAA0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DCDF4))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DCEEC))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DD114))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DD1D4))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DD298))(this);
	}
	template <typename T = float> T GetShootTime() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DD394))(this);
	}
	template <typename T = void> T Dead() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DD460))(this);
	}
	template <typename T = void> T ResetIsMelee() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DCD70))(this);
	}
	template <typename T = void> T UpdateInfo() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DD678))(this);
	}
	template <typename T = void> T SetInfo(uintptr_t info) {
		return ((T (*)(DeadBodyController*, uintptr_t))(Il2CppBase() + 0x42DD8C0))(this, info);
	}
	template <typename T = uintptr_t> T GetWeaponInfo() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DDA90))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t game_state) {
		return ((T (*)(DeadBodyController*, int32_t))(Il2CppBase() + 0x42DDB08))(this, game_state);
	}
	template <typename T = void> T SetLifeTime(int32_t lifeTime) {
		return ((T (*)(DeadBodyController*, int32_t))(Il2CppBase() + 0x42DDE04))(this, lifeTime);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DDEE0))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DDEE8))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DDEF0))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DDEF8))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DDF00))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dead() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DDF08))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DDF10))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetInfo(uintptr_t P0) {
		return ((T (*)(DeadBodyController*, uintptr_t))(Il2CppBase() + 0x42DDF18))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetWeaponInfo() {
		return ((T (*)(DeadBodyController*))(Il2CppBase() + 0x42DDF20))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnGameStateChange(int32_t P0) {
		return ((T (*)(DeadBodyController*, int32_t))(Il2CppBase() + 0x42DDF28))(this, P0);
	}

};

}
