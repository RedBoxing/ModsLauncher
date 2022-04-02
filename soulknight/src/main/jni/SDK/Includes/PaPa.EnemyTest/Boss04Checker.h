#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.EnemyTest {

class Boss04Checker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.EnemyTest", "Boss04Checker"));
	}

	template <typename T = uintptr_t> T& weapon_renderer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& body_renderer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& angry_weapon() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& angry_body() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T InitCheck() {
		return ((T (*)(Boss04Checker*))(Il2CppBase() + 0x26E9DD0))(this);
	}
	template <typename T = uintptr_t> T AngryState() {
		return ((T (*)(Boss04Checker*))(Il2CppBase() + 0x26EA340))(this);
	}
	template <typename T = uintptr_t> T n__0() {
		return ((T (*)(Boss04Checker*))(Il2CppBase() + 0x26EA420))(this);
	}
	template <typename T = void> T iFixBaseProxy_InitCheck() {
		return ((T (*)(Boss04Checker*))(Il2CppBase() + 0x26EA4D8))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_AngryState() {
		return ((T (*)(Boss04Checker*))(Il2CppBase() + 0x26EA4DC))(this);
	}

};

}
