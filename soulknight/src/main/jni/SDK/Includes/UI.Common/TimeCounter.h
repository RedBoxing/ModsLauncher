#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UI.Common {

class TimeCounter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UI.Common", "TimeCounter"));
	}

	template <typename T = float> T& time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& counterCb() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& counter() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& showText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& useRealTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& end() {
		return *(T*)((uintptr_t)this + 0x39);
	}

	template <typename T = void> T Start() {
		return ((T (*)(TimeCounter*))(Il2CppBase() + 0x441A82C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TimeCounter*))(Il2CppBase() + 0x441A8D0))(this);
	}
	template <typename T = void> T Restart(float counterTime, uintptr_t Cb) {
		return ((T (*)(TimeCounter*, float, uintptr_t))(Il2CppBase() + 0x441AA18))(this, counterTime, Cb);
	}

};

}
