#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.EnemyTest {

class Boss14Checker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.EnemyTest", "Boss14Checker"));
	}


	template <typename T = uintptr_t> T WaitHurtable() {
		return ((T (*)(Boss14Checker*))(Il2CppBase() + 0x26EF97C))(this);
	}
	template <typename T = uintptr_t> T DizzyStateBefore() {
		return ((T (*)(Boss14Checker*))(Il2CppBase() + 0x26EFA5C))(this);
	}
	template <typename T = uintptr_t> T AngryState() {
		return ((T (*)(Boss14Checker*))(Il2CppBase() + 0x26EFB3C))(this);
	}
	template <typename T = uintptr_t> T CheckAtk3() {
		return ((T (*)(Boss14Checker*))(Il2CppBase() + 0x26EFC1C))(this);
	}
	template <typename T = uintptr_t> T n__0() {
		return ((T (*)(Boss14Checker*))(Il2CppBase() + 0x26EFCFC))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_WaitHurtable() {
		return ((T (*)(Boss14Checker*))(Il2CppBase() + 0x26EFD00))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_DizzyStateBefore() {
		return ((T (*)(Boss14Checker*))(Il2CppBase() + 0x26EFD04))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_AngryState() {
		return ((T (*)(Boss14Checker*))(Il2CppBase() + 0x26EFDBC))(this);
	}

};

}
