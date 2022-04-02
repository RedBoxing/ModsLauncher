#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IBulletPercentage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBulletPercentage"));
	}


	template <typename T = void> T SetPercentage(float percentage) {
		return ((T (*)(IBulletPercentage*, float))(Il2CppBase() + 0x0))(this, percentage);
	}

};

}
