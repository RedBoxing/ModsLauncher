#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayHit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayHit"));
	}

	template <typename T = uintptr_t> T& hitEffect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& delayTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& startClip() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& hitClip() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& sourceObject() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DelayHit*))(Il2CppBase() + 0x42E99D8))(this);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(DelayHit*))(Il2CppBase() + 0x42E9A34))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t source) {
		return ((T (*)(DelayHit*, uintptr_t))(Il2CppBase() + 0x42E9A94))(this, source);
	}
	template <typename T = void> T UpdateAttribute(uintptr_t source, uintptr_t target, int32_t damage) {
		return ((T (*)(DelayHit*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x42E9B08))(this, source, target, damage);
	}
	template <typename T = void> T MakeDamage() {
		return ((T (*)(DelayHit*))(Il2CppBase() + 0x42E9BE4))(this);
	}

};

}
