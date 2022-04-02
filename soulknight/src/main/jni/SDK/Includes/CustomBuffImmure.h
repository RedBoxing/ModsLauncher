#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CustomBuffImmure
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomBuffImmure"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& immureBuff() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& immureBuffSet() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CustomBuffImmure*))(Il2CppBase() + 0x427E60C))(this);
	}

};

}
