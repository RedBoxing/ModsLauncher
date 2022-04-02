#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace DG.Tweening {

class DOTweenAnimationExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "DG.Tweening", "DOTweenAnimationExtensions"));
	}


	template <typename T = bool> static T IsSameOrSubclassOf(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, t);
	}

};

}
