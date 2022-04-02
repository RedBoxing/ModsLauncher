#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CameraShakerWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraShakerWrapper"));
	}


	template <typename T = void> T CameraShake(int32_t level) {
		return ((T (*)(CameraShakerWrapper*, int32_t))(Il2CppBase() + 0x186A208))(this, level);
	}

};

}
