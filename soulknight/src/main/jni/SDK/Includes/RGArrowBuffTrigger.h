#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGArrowBuffTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGArrowBuffTrigger"));
	}

	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGArrowBuffTrigger*))(Il2CppBase() + 0x1BAA450))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGArrowBuffTrigger*))(Il2CppBase() + 0x1BAA4B0))(this);
	}
	template <typename T = void> T DestroyBullet(uintptr_t other) {
		return ((T (*)(RGArrowBuffTrigger*, uintptr_t))(Il2CppBase() + 0x1BAA5C0))(this, other);
	}
	template <typename T = void> T iFixBaseProxy_DestroyBullet(uintptr_t P0) {
		return ((T (*)(RGArrowBuffTrigger*, uintptr_t))(Il2CppBase() + 0x1BAAB68))(this, P0);
	}

};

}
