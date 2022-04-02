#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Bullet01Ani
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Bullet01Ani"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& invert_time() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& fly_time() {
		return *(T*)((uintptr_t)this + 0x120);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(Bullet01Ani*))(Il2CppBase() + 0x45A42C4))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(Bullet01Ani*))(Il2CppBase() + 0x45A43A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(Bullet01Ani*))(Il2CppBase() + 0x45A4540))(this);
	}

};

}
