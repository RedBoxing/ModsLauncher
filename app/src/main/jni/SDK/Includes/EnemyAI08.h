#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI08
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI08"));
	}

	template <typename T = bool> T& need_tap() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = int32_t> T& chest_level() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x240);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22B7F38))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22B80F4))(this);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22B8274))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22B82D0))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22B8694))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22B8770))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t game_state) {
		return ((T (*)(EnemyAI08*, int32_t))(Il2CppBase() + 0x22B8B10))(this, game_state);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22B8B80))(this);
	}
	template <typename T = void> T Reborn() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22B9014))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(EnemyAI08*, uintptr_t))(Il2CppBase() + 0x22B90C4))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(EnemyAI08*, uintptr_t))(Il2CppBase() + 0x22B92DC))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(EnemyAI08*, uintptr_t))(Il2CppBase() + 0x22B94A4))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(EnemyAI08*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x22B98E0))(this, controller, ext_info);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22B9BCC))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22B9C2C))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22B9CBC))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22B9D1C))(this);
	}
	template <typename T = void> T GetWeapon() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22B8CCC))(this);
	}
	template <typename T = void> T DisAppear() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22B9D90))(this);
	}
	template <typename T = void> T GenNetId() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22BA0EC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22BA274))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22BA27C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22BA284))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22BA28C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnGameStateChange(int32_t P0) {
		return ((T (*)(EnemyAI08*, int32_t))(Il2CppBase() + 0x22BA294))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22BA29C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Reborn() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22BA2A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_GenNetId() {
		return ((T (*)(EnemyAI08*))(Il2CppBase() + 0x22BA2AC))(this);
	}

};

}
