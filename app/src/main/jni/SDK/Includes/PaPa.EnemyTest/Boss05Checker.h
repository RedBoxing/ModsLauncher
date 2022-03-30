#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.EnemyTest {

class Boss05Checker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.EnemyTest", "Boss05Checker"));
	}

	template <typename T = uintptr_t> T& body_renderer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& invisible_time() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T InitCheck() {
		return ((T (*)(Boss05Checker*))(Il2CppBase() + 0x26EA758))(this);
	}
	template <typename T = uintptr_t> T AngryState() {
		return ((T (*)(Boss05Checker*))(Il2CppBase() + 0x26EA84C))(this);
	}
	template <typename T = uintptr_t> T WaitHurtable() {
		return ((T (*)(Boss05Checker*))(Il2CppBase() + 0x26EA92C))(this);
	}
	template <typename T = bool> T IsInvisible() {
		return ((T (*)(Boss05Checker*))(Il2CppBase() + 0x26EAA0C))(this);
	}
	template <typename T = uintptr_t> T CheckInvisible() {
		return ((T (*)(Boss05Checker*))(Il2CppBase() + 0x26EAA90))(this);
	}
	template <typename T = uintptr_t> T n__0() {
		return ((T (*)(Boss05Checker*))(Il2CppBase() + 0x26EAB70))(this);
	}
	template <typename T = void> T iFixBaseProxy_InitCheck() {
		return ((T (*)(Boss05Checker*))(Il2CppBase() + 0x26EAB74))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_AngryState() {
		return ((T (*)(Boss05Checker*))(Il2CppBase() + 0x26EAB78))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_WaitHurtable() {
		return ((T (*)(Boss05Checker*))(Il2CppBase() + 0x26EAB7C))(this);
	}

};

}
