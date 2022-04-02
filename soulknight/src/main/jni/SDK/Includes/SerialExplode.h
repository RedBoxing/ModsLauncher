#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SerialExplode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SerialExplode"));
	}

	template <typename T = uintptr_t> T& nextExplode() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& damegeFactor() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x114);
	}

	template <typename T = void> T ExplodeStart() {
		return ((T (*)(SerialExplode*))(Il2CppBase() + 0x1822FF0))(this);
	}
	template <typename T = void> T NextExplode() {
		return ((T (*)(SerialExplode*))(Il2CppBase() + 0x1823094))(this);
	}
	template <typename T = void> T iFixBaseProxy_ExplodeStart() {
		return ((T (*)(SerialExplode*))(Il2CppBase() + 0x1823360))(this);
	}

};

}
