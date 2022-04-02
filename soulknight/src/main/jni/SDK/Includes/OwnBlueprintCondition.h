#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OwnBlueprintCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OwnBlueprintCondition"));
	}

	template <typename T = Il2CppString*> T& key() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(OwnBlueprintCondition*))(Il2CppBase() + 0x26DC2D4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(OwnBlueprintCondition*))(Il2CppBase() + 0x26DC478))(this);
	}

};

}
