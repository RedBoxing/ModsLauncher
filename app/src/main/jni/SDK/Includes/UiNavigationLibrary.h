#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UiNavigationLibrary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UiNavigationLibrary"));
	}


	template <typename T = void> static T CalculateNavigation(Il2CppList<uintptr_t>* selectables, float maxAngle, bool includeUnActive, uintptr_t priority) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, float, bool, uintptr_t))(Il2CppBase() + 0x46292A0))(0, selectables, maxAngle, includeUnActive, priority);
	}
	template <typename T = void> static T CalculateNavigation_1(Il2CppList<uintptr_t>* gameObjects, float maxAngle, bool includeUnActive, uintptr_t priority) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, float, bool, uintptr_t))(Il2CppBase() + 0x462AF08))(0, gameObjects, maxAngle, includeUnActive, priority);
	}
	template <typename T = void> static T Calculate(Il2CppList<uintptr_t>* selectables, float maxAngle, bool includeUnActive, uintptr_t priority) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, float, bool, uintptr_t))(Il2CppBase() + 0x46295E0))(0, selectables, maxAngle, includeUnActive, priority);
	}

};

}
