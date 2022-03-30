#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShowRandomChild
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowRandomChild"));
	}

	template <typename T = bool> T& showInAwake() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ShowRandomChild*))(Il2CppBase() + 0x182EABC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ShowRandomChild*))(Il2CppBase() + 0x182EC94))(this);
	}
	template <typename T = void> T ShowRandom() {
		return ((T (*)(ShowRandomChild*))(Il2CppBase() + 0x182EB30))(this);
	}

};

}
