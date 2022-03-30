#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PhantomCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PhantomCreator"));
	}

	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& interval() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& fadeSpeed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& endAlpha() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& sprite_color() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& syncScaleTf() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& _time() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& phantoms() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& fadePhantoms() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PhantomCreator*))(Il2CppBase() + 0x438E03C))(this);
	}
	template <typename T = void> T SetSpriteSource(uintptr_t source) {
		return ((T (*)(PhantomCreator*, uintptr_t))(Il2CppBase() + 0x438E218))(this, source);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(PhantomCreator*))(Il2CppBase() + 0x438E28C))(this);
	}
	template <typename T = void> T CreatePhantom() {
		return ((T (*)(PhantomCreator*))(Il2CppBase() + 0x438E5B4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(PhantomCreator*))(Il2CppBase() + 0x438EB08))(this);
	}

};

}
