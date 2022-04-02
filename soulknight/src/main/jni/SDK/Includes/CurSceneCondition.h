#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CurSceneCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurSceneCondition"));
	}

	template <typename T = Il2CppString*> T& targetScene() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(CurSceneCondition*))(Il2CppBase() + 0x41F61D4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(CurSceneCondition*))(Il2CppBase() + 0x41F6258))(this);
	}

};

}
