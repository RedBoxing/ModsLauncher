#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BoxPlaced
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BoxPlaced"));
	}

	template <typename T = uintptr_t> T& sourceObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T SetSourceObject(uintptr_t source) {
		return ((T (*)(BoxPlaced*, uintptr_t))(Il2CppBase() + 0x20A3184))(this, source);
	}
	template <typename T = uintptr_t> T DetectingContact() {
		return ((T (*)(BoxPlaced*))(Il2CppBase() + 0x20A3474))(this);
	}

};

}
