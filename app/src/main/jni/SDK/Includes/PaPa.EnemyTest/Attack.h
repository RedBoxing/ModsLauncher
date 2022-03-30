#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.EnemyTest {

class Attack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.EnemyTest", "Attack"));
	}

	template <typename T = uintptr_t> T& skill_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& atk_call_back() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Attack*))(Il2CppBase() + 0x26E95E4))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(Attack*))(Il2CppBase() + 0x26E9644))(this);
	}

};

}
