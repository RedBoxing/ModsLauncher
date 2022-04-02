#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.EnemyTest {

class Boss15Checker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.EnemyTest", "Boss15Checker"));
	}


	template <typename T = void> T set_fade(bool value) {
		return ((T (*)(Boss15Checker*, bool))(Il2CppBase() + 0x26F0AC0))(this, value);
	}
	template <typename T = bool> T get_fade() {
		return ((T (*)(Boss15Checker*))(Il2CppBase() + 0x26F0BA8))(this);
	}
	template <typename T = uintptr_t> T WaitHurtable() {
		return ((T (*)(Boss15Checker*))(Il2CppBase() + 0x26F0CE0))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_WaitHurtable() {
		return ((T (*)(Boss15Checker*))(Il2CppBase() + 0x26F0DC0))(this);
	}

};

}
