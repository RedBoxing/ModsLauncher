#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BulletPattern {

class MultipleBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BulletPattern", "MultipleBullet"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& bulletCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& angleBetween() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& positionTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnAttack(uintptr_t controller) {
		return ((T (*)(MultipleBullet*, uintptr_t))(Il2CppBase() + 0x238C36C))(this, controller);
	}

};

}
