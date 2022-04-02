#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EffectUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EffectUtil"));
	}


	template <typename T = uintptr_t> static T ShowPrefabEffectLocPos(uintptr_t prefabEffect, uintptr_t parent, Il2CppVector3 locPos) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x22AD270))(0, prefabEffect, parent, locPos);
	}
	template <typename T = uintptr_t> static T ShowPrefabEffectWorldPos(uintptr_t prefabEffect, uintptr_t target, Il2CppVector3 offset) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x22AD474))(0, prefabEffect, target, offset);
	}

};

}
