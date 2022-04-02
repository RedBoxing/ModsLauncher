#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffChangeSpeed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffChangeSpeed"));
	}

	template <typename T = float> T& changeValue() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BuffChangeSpeed*))(Il2CppBase() + 0x20A4F98))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BuffChangeSpeed*, uintptr_t))(Il2CppBase() + 0x20A50CC))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BuffChangeSpeed*))(Il2CppBase() + 0x20A53E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BuffChangeSpeed*))(Il2CppBase() + 0x20A5448))(this);
	}

};

}
