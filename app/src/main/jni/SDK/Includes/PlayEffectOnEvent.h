#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlayEffectOnEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayEffectOnEvent"));
	}

	template <typename T = uintptr_t> T& prefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& effectDestroyDelay() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& attached() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Play(uintptr_t obj) {
		return ((T (*)(PlayEffectOnEvent*, uintptr_t))(Il2CppBase() + 0x4399880))(this, obj);
	}
	template <typename T = void> T _Play() {
		return ((T (*)(PlayEffectOnEvent*))(Il2CppBase() + 0x4399974))(this);
	}

};

}
