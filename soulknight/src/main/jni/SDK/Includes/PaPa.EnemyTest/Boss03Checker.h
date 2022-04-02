#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.EnemyTest {

class Boss03Checker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.EnemyTest", "Boss03Checker"));
	}


	template <typename T = uintptr_t> T GetHurtCheck(int32_t damage, Il2CppString* error) {
		return ((T (*)(Boss03Checker*, int32_t, Il2CppString*))(Il2CppBase() + 0x26E98F0))(this, damage, error);
	}
	template <typename T = uintptr_t> T n__0(int32_t damage, Il2CppString* error) {
		return ((T (*)(Boss03Checker*, int32_t, Il2CppString*))(Il2CppBase() + 0x26E9A18))(this, damage, error);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHurtCheck(int32_t P0, Il2CppString* P1) {
		return ((T (*)(Boss03Checker*, int32_t, Il2CppString*))(Il2CppBase() + 0x26E9B18))(this, P0, P1);
	}

};

}
