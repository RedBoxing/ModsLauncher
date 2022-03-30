#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayedButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayedButton"));
	}

	template <typename T = float> T& timeWindow() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _isHold() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& keyUpTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& onKeyDown() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& onKeyUp() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T get_isHold() {
		return ((T (*)(DelayedButton*))(Il2CppBase() + 0x42EA154))(this);
	}
	template <typename T = void> T KeyDown() {
		return ((T (*)(DelayedButton*))(Il2CppBase() + 0x42EA1F4))(this);
	}
	template <typename T = void> T KeyUp() {
		return ((T (*)(DelayedButton*))(Il2CppBase() + 0x42EA278))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DelayedButton*))(Il2CppBase() + 0x42EA2E0))(this);
	}

};

}
