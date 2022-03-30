#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.EnemyTest {

class Boss16Checker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.EnemyTest", "Boss16Checker"));
	}

	template <typename T = uintptr_t> T& horse() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _boss_ai() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& atk3_state_name() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = uintptr_t> T get_boss_ai() {
		return ((T (*)(Boss16Checker*))(Il2CppBase() + 0x26F0EF8))(this);
	}
	template <typename T = uintptr_t> T AngryState() {
		return ((T (*)(Boss16Checker*))(Il2CppBase() + 0x26F1094))(this);
	}
	template <typename T = uintptr_t> T GetHurse() {
		return ((T (*)(Boss16Checker*))(Il2CppBase() + 0x26F1174))(this);
	}
	template <typename T = uintptr_t> T WaitHurtable() {
		return ((T (*)(Boss16Checker*))(Il2CppBase() + 0x26F1254))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, Il2CppString* error) {
		return ((T (*)(Boss16Checker*, int32_t, Il2CppString*))(Il2CppBase() + 0x26F1334))(this, damage, error);
	}
	template <typename T = uintptr_t> T n__0() {
		return ((T (*)(Boss16Checker*))(Il2CppBase() + 0x26F190C))(this);
	}
	template <typename T = uintptr_t> T n__1() {
		return ((T (*)(Boss16Checker*))(Il2CppBase() + 0x26F1910))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_boss_ai() {
		return ((T (*)(Boss16Checker*))(Il2CppBase() + 0x26F1914))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_AngryState() {
		return ((T (*)(Boss16Checker*))(Il2CppBase() + 0x26F1918))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_WaitHurtable() {
		return ((T (*)(Boss16Checker*))(Il2CppBase() + 0x26F191C))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, Il2CppString* P1) {
		return ((T (*)(Boss16Checker*, int32_t, Il2CppString*))(Il2CppBase() + 0x26F1920))(this, P0, P1);
	}

};

}
