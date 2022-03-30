#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.EnemyTest {

class Boss07Checker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.EnemyTest", "Boss07Checker"));
	}


	template <typename T = uintptr_t> T AngryState() {
		return ((T (*)(Boss07Checker*))(Il2CppBase() + 0x26EC13C))(this);
	}
	template <typename T = uintptr_t> T MoveState() {
		return ((T (*)(Boss07Checker*))(Il2CppBase() + 0x26EC21C))(this);
	}
	template <typename T = uintptr_t> T PauseState(Il2CppVector3 init_boss_position, float dizzy_time, float check_time_scale) {
		return ((T (*)(Boss07Checker*, Il2CppVector3, float, float))(Il2CppBase() + 0x26EC2FC))(this, init_boss_position, dizzy_time, check_time_scale);
	}
	template <typename T = uintptr_t> T n__0() {
		return ((T (*)(Boss07Checker*))(Il2CppBase() + 0x26EC454))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_AngryState() {
		return ((T (*)(Boss07Checker*))(Il2CppBase() + 0x26EC458))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_MoveState() {
		return ((T (*)(Boss07Checker*))(Il2CppBase() + 0x26EC45C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_PauseState(Il2CppVector3 P0, float P1, float P2) {
		return ((T (*)(Boss07Checker*, Il2CppVector3, float, float))(Il2CppBase() + 0x26EC514))(this, P0, P1, P2);
	}

};

}
