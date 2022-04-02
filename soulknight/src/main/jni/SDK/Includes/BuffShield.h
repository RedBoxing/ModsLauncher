#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffShield
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffShield"));
	}

	template <typename T = uintptr_t> T& ctrl() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T SetController(uintptr_t ctrl) {
		return ((T (*)(BuffShield*, uintptr_t))(Il2CppBase() + 0x459F9E8))(this, ctrl);
	}
	template <typename T = void> T EndBuff() {
		return ((T (*)(BuffShield*))(Il2CppBase() + 0x459FC64))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BuffShield*, uintptr_t))(Il2CppBase() + 0x459FE08))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BuffShield*))(Il2CppBase() + 0x459FF7C))(this);
	}

};

}
