#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAIGhost
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAIGhost"));
	}

	template <typename T = bool> T& need_tap() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uintptr_t> T& show_clip() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& intensive_particle() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = bool> T& attacked() {
		return *(T*)((uintptr_t)this + 0x250);
	}

	template <typename T = bool> T get_fade() {
		return ((T (*)(EnemyAIGhost*))(Il2CppBase() + 0x2A2B634))(this);
	}
	template <typename T = void> T set_fade(bool value) {
		return ((T (*)(EnemyAIGhost*, bool))(Il2CppBase() + 0x2A2B6D8))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAIGhost*))(Il2CppBase() + 0x2A2B7AC))(this);
	}
	template <typename T = void> T ProcessEnemyTag() {
		return ((T (*)(EnemyAIGhost*))(Il2CppBase() + 0x2A2B9C4))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAIGhost*))(Il2CppBase() + 0x2A2BA20))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAIGhost*))(Il2CppBase() + 0x2A2BD80))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAIGhost*))(Il2CppBase() + 0x2A2C1CC))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(EnemyAIGhost*))(Il2CppBase() + 0x2A2C30C))(this);
	}
	template <typename T = void> T Fade() {
		return ((T (*)(EnemyAIGhost*))(Il2CppBase() + 0x2A2C3E8))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAIGhost*))(Il2CppBase() + 0x2A2C44C))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAIGhost*))(Il2CppBase() + 0x2A2C7F0))(this);
	}
	template <typename T = void> T IntAtkIn() {
		return ((T (*)(EnemyAIGhost*))(Il2CppBase() + 0x2A2C980))(this);
	}
	template <typename T = void> T InAtkOut() {
		return ((T (*)(EnemyAIGhost*))(Il2CppBase() + 0x2A2CB14))(this);
	}
	template <typename T = void> T iFixBaseProxy_ProcessEnemyTag() {
		return ((T (*)(EnemyAIGhost*))(Il2CppBase() + 0x2A2CCD8))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAIGhost*))(Il2CppBase() + 0x2A2CCE0))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAIGhost*))(Il2CppBase() + 0x2A2CCE8))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAIGhost*))(Il2CppBase() + 0x2A2CCF0))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAIGhost*))(Il2CppBase() + 0x2A2CCF8))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAIGhost*))(Il2CppBase() + 0x2A2CD00))(this);
	}

};

}
