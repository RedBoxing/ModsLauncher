#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAISelfAttack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAISelfAttack"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& attackCallBacks() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = bool> T& atk1Only() {
		return *(T*)((uintptr_t)this + 0x240);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAISelfAttack*))(Il2CppBase() + 0x1FD594C))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAISelfAttack*))(Il2CppBase() + 0x1FD5B08))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAISelfAttack*))(Il2CppBase() + 0x1FD5F64))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAISelfAttack*))(Il2CppBase() + 0x1FD60D0))(this);
	}
	template <typename T = void> T Atk(int32_t index) {
		return ((T (*)(EnemyAISelfAttack*, int32_t))(Il2CppBase() + 0x1FD6450))(this, index);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAISelfAttack*))(Il2CppBase() + 0x1FD65E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAISelfAttack*))(Il2CppBase() + 0x1FD65E8))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAISelfAttack*))(Il2CppBase() + 0x1FD65F0))(this);
	}

};

}
