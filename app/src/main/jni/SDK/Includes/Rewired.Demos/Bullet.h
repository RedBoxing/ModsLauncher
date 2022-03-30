#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos {

class Bullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos", "Bullet"));
	}

	template <typename T = float> T& lifeTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& die() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& deathTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(Bullet*))(Il2CppBase() + 0x2055A04))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Bullet*))(Il2CppBase() + 0x2055A88))(this);
	}

};

}
