#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos {

class CustomControllersTiltDemo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos", "CustomControllersTiltDemo"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& player() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CustomControllersTiltDemo*))(Il2CppBase() + 0x2063EAC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CustomControllersTiltDemo*))(Il2CppBase() + 0x2064068))(this);
	}
	template <typename T = void> T OnInputUpdate() {
		return ((T (*)(CustomControllersTiltDemo*))(Il2CppBase() + 0x206427C))(this);
	}

};

}
