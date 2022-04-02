#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAIAlien
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAIAlien"));
	}

	template <typename T = bool> T& need_tap() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = bool> T& is_captain() {
		return *(T*)((uintptr_t)this + 0x239);
	}
	template <typename T = uintptr_t> static T& captain_ai() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAIAlien*))(Il2CppBase() + 0x2A24790))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EnemyAIAlien*))(Il2CppBase() + 0x2A249E0))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAIAlien*))(Il2CppBase() + 0x2A24AF8))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAIAlien*))(Il2CppBase() + 0x2A24D3C))(this);
	}
	template <typename T = void> T Shoot() {
		return ((T (*)(EnemyAIAlien*))(Il2CppBase() + 0x2A24EC4))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAIAlien*))(Il2CppBase() + 0x2A24F94))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAIAlien*))(Il2CppBase() + 0x2A25080))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(EnemyAIAlien*))(Il2CppBase() + 0x2A25620))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAIAlien*))(Il2CppBase() + 0x2A25628))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAIAlien*))(Il2CppBase() + 0x2A25630))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAIAlien*))(Il2CppBase() + 0x2A25638))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAIAlien*))(Il2CppBase() + 0x2A25640))(this);
	}

};

}
