#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Util.TAUtil {

class BehaviourPathStatistics
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Util.TAUtil", "BehaviourPathStatistics"));
	}


	template <typename T = void> static T TrackBehaviour(uintptr_t behaviour) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44031E0))(0, behaviour);
	}
	template <typename T = void> static T TrackBehaviour_1(uintptr_t behaviour, Il2CppString* key, Il2CppString* val) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x440330C))(0, behaviour, key, val);
	}
	template <typename T = void> static T TrackBehaviour_2(uintptr_t behaviour, Il2CppDictionary<Il2CppString*, uintptr_t>* param) {
		return ((T (*)(void *, uintptr_t, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x440345C))(0, behaviour, param);
	}

};

}
