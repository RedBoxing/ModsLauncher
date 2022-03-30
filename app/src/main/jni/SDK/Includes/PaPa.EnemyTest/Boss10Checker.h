#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.EnemyTest {

class Boss10Checker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.EnemyTest", "Boss10Checker"));
	}

	template <typename T = float> T& atk_3_time() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = uintptr_t> T WaitHurtable() {
		return ((T (*)(Boss10Checker*))(Il2CppBase() + 0x26ED190))(this);
	}
	template <typename T = uintptr_t> T CheckAtk3() {
		return ((T (*)(Boss10Checker*))(Il2CppBase() + 0x26ED270))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_WaitHurtable() {
		return ((T (*)(Boss10Checker*))(Il2CppBase() + 0x26ED350))(this);
	}

};

}
