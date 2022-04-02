#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffChangeScale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffChangeScale"));
	}

	template <typename T = float> T& changeAmount() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& animDuration() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& _controller() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BuffChangeScale*))(Il2CppBase() + 0x20A4CF8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BuffChangeScale*))(Il2CppBase() + 0x20A4E94))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BuffChangeScale*))(Il2CppBase() + 0x20A4F90))(this);
	}

};

}
