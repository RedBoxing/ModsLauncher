#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BattleFactor {

class StaticBattleFactorChecker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleFactor", "StaticBattleFactorChecker"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& battleFactorCheckers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& hasInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T InitEventListen() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B1F77C))(0);
	}
	template <typename T = void> static T InitCheckers() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B1F090))(0);
	}
	template <typename T = void> static T ProcessEvent(uintptr_t battleData, Il2CppString* eventName, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(0, battleData, eventName, target);
	}
	template <typename T = void> static T ProcessEvent_1(uintptr_t battleFactor, Il2CppString* eventName, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(0, battleFactor, eventName, target);
	}
	template <typename T = bool> static T IsSupport(uintptr_t* checker) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x0))(0, checker);
	}

};

}
