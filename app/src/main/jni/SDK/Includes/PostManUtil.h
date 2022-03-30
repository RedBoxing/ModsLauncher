#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PostManUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PostManUtil"));
	}


	template <typename T = uintptr_t> static T GetValidReward() {
		return ((T (*)(void *))(Il2CppBase() + 0x43A170C))(0);
	}
	template <typename T = uintptr_t> static T GetFirstTimeReward() {
		return ((T (*)(void *))(Il2CppBase() + 0x43A1764))(0);
	}

};

}
