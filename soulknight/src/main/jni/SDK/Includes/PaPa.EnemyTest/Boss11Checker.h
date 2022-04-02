#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.EnemyTest {

class Boss11Checker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.EnemyTest", "Boss11Checker"));
	}


	template <typename T = uintptr_t> T WaitHurtable() {
		return ((T (*)(Boss11Checker*))(Il2CppBase() + 0x26EDDF0))(this);
	}
	template <typename T = uintptr_t> T n__0() {
		return ((T (*)(Boss11Checker*))(Il2CppBase() + 0x26EDED0))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_WaitHurtable() {
		return ((T (*)(Boss11Checker*))(Il2CppBase() + 0x26EDED4))(this);
	}

};

}
