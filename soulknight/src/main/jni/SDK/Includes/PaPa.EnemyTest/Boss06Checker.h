#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.EnemyTest {

class Boss06Checker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.EnemyTest", "Boss06Checker"));
	}

	template <typename T = int32_t> T& boss_child_count() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& body_renderer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& circle_renderer() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& angry_body_sprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& angry_circle_sprite() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& angry_child_sprite1() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& angry_child_sprite2() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T InitCheck() {
		return ((T (*)(Boss06Checker*))(Il2CppBase() + 0x26EB4A0))(this);
	}
	template <typename T = uintptr_t> T AngryState() {
		return ((T (*)(Boss06Checker*))(Il2CppBase() + 0x26EB700))(this);
	}
	template <typename T = uintptr_t> T WaitHurtable() {
		return ((T (*)(Boss06Checker*))(Il2CppBase() + 0x26EB7E0))(this);
	}
	template <typename T = uintptr_t> T n__0() {
		return ((T (*)(Boss06Checker*))(Il2CppBase() + 0x26EB8C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_InitCheck() {
		return ((T (*)(Boss06Checker*))(Il2CppBase() + 0x26EB8C4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_AngryState() {
		return ((T (*)(Boss06Checker*))(Il2CppBase() + 0x26EB8C8))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_WaitHurtable() {
		return ((T (*)(Boss06Checker*))(Il2CppBase() + 0x26EB8CC))(this);
	}

};

}
