#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Npc05DecoratorAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Npc05DecoratorAnimation"));
	}

	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& saturatorBase() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& saturatorPeriod() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& saturatorRange() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _instanceMaterial() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector2> T& _currentOffset() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& Saturator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(Npc05DecoratorAnimation*))(Il2CppBase() + 0x4527A80))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Npc05DecoratorAnimation*))(Il2CppBase() + 0x4527B28))(this);
	}

};

}
