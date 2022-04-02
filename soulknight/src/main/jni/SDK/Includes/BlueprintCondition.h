#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BlueprintCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintCondition"));
	}

	template <typename T = Il2CppString*> T& key() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(BlueprintCondition*))(Il2CppBase() + 0x1B2CDB8))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(BlueprintCondition*))(Il2CppBase() + 0x1B2CF04))(this);
	}

};

}
