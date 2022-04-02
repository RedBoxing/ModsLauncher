#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FixAngle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FixAngle"));
	}

	template <typename T = bool> T& compareZ() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& angle() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& compareY() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& angleY() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isGlobal() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Update() {
		return ((T (*)(FixAngle*))(Il2CppBase() + 0x450F574))(this);
	}

};

}
