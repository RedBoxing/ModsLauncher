#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IceFreezeEffectGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IceFreezeEffectGenerator"));
	}


	template <typename T = void> T AddCameraEffect() {
		return ((T (*)(IceFreezeEffectGenerator*))(Il2CppBase() + 0x19C05F8))(this);
	}

};

}
