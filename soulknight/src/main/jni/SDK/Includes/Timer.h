#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Timer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Timer"));
	}

	template <typename T = bool> T& _started() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& end() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T get_started() {
		return ((T (*)(Timer*))(Il2CppBase() + 0x1BE5784))(this);
	}
	template <typename T = bool> T get_finished() {
		return ((T (*)(Timer*))(Il2CppBase() + 0x1BE57E4))(this);
	}
	template <typename T = float> T get_remaining() {
		return ((T (*)(Timer*))(Il2CppBase() + 0x1BE5870))(this);
	}
	template <typename T = void> T Start(float length) {
		return ((T (*)(Timer*, float))(Il2CppBase() + 0x1BE58F8))(this, length);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(Timer*))(Il2CppBase() + 0x1BE5980))(this);
	}

};

}
