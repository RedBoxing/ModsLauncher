#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BulletPattern {

class StraightThornBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BulletPattern", "StraightThornBullet"));
	}

	template <typename T = float> T& distance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& thornSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& thornCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& thorn() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& thornDelay() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _currentIndex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& _isReleasing() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _counter() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _releaseController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector2> T& _releaseDirection() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& _releasePosition() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T OnAttack(uintptr_t enemyController) {
		return ((T (*)(StraightThornBullet*, uintptr_t))(Il2CppBase() + 0x238D294))(this, enemyController);
	}
	template <typename T = void> T Update() {
		return ((T (*)(StraightThornBullet*))(Il2CppBase() + 0x238D4A8))(this);
	}
	template <typename T = void> T ReleaseThorn() {
		return ((T (*)(StraightThornBullet*))(Il2CppBase() + 0x238D588))(this);
	}

};

}
