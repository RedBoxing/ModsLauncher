#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Reward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Reward"));
	}

	template <typename T = Il2CppString*> T& Label() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Amount() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Reward*))(Il2CppBase() + 0x15004F0))(this);
	}
	template <typename T = bool> T IsValid() {
		return ((T (*)(Reward*))(Il2CppBase() + 0x15004F8))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(Reward*))(Il2CppBase() + 0x1500500))(this);
	}

};

}
