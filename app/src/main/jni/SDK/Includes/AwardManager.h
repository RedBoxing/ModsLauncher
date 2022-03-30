#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AwardManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AwardManager"));
	}


	template <typename T = Il2CppList<uintptr_t>*> static T GetRewardables(uintptr_t giftPackage) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4186D50))(0, giftPackage);
	}

};

}
