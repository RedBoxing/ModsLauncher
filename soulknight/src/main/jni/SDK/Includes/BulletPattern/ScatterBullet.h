#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BulletPattern {

class ScatterBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BulletPattern", "ScatterBullet"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& bulletCount() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& initAngleOffset() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& deviation() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T OnAttack(uintptr_t controller) {
		return ((T (*)(ScatterBullet*, uintptr_t))(Il2CppBase() + 0x238C6C4))(this, controller);
	}

};

}
