#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAiAlienParent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAiAlienParent"));
	}

	template <typename T = uintptr_t> T& alien1_obj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& alien2_obj() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& angry() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& alien1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& alien2_list() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& alien_effect_list() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& call_alien() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = bool> T get_IsEndAtk() {
		return ((T (*)(EnemyAiAlienParent*))(Il2CppBase() + 0x1FE24A0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EnemyAiAlienParent*))(Il2CppBase() + 0x1FE2600))(this);
	}
	template <typename T = void> static T AddAlien1(uintptr_t alien) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1FE271C))(0, alien);
	}
	template <typename T = void> static T AddAlien2(uintptr_t alien) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1FE27C8))(0, alien);
	}
	template <typename T = void> T CallAlienTeam() {
		return ((T (*)(EnemyAiAlienParent*))(Il2CppBase() + 0x1FE2894))(this);
	}
	template <typename T = uintptr_t> T CallAlien() {
		return ((T (*)(EnemyAiAlienParent*))(Il2CppBase() + 0x1FE2668))(this);
	}
	template <typename T = uintptr_t> T CreateAlien(uintptr_t proto, Il2CppVector2 pos) {
		return ((T (*)(EnemyAiAlienParent*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x1FE2F5C))(this, proto, pos);
	}
	template <typename T = void> T CallBackAlienTeam() {
		return ((T (*)(EnemyAiAlienParent*))(Il2CppBase() + 0x1FE2918))(this);
	}
	template <typename T = void> T AlienShoot() {
		return ((T (*)(EnemyAiAlienParent*))(Il2CppBase() + 0x1FE3230))(this);
	}

};

}
