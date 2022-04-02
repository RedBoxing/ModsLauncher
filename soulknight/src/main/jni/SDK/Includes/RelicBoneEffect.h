#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicBoneEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicBoneEffect"));
	}

	template <typename T = Il2CppVector2> T& targetRange() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& idleDurationRange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& moveDurationRange() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& angularSpeedRange() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& fadeDuration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& hitFadeDuration() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& moveCurve() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& gravity() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& radius() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& obstacleMask() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& _destroyDuration() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& _currentState() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& _initPosition() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppVector3> T& _targetPosition() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector3> T& _currentPosition() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& _currentYVelocity() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& _currentHeight() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& _currentAngularSpeed() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _timeCounter() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppVector3> T& _hitPoint() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& _isHit() {
		return *(T*)((uintptr_t)this + 0xB4);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(RelicBoneEffect*))(Il2CppBase() + 0x42B3748))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RelicBoneEffect*))(Il2CppBase() + 0x42B3AB0))(this);
	}
	template <typename T = void> T MoveUpdate() {
		return ((T (*)(RelicBoneEffect*))(Il2CppBase() + 0x42B3B6C))(this);
	}
	template <typename T = void> T IdleUpdate() {
		return ((T (*)(RelicBoneEffect*))(Il2CppBase() + 0x42B3FAC))(this);
	}
	template <typename T = void> T FadeUpdate() {
		return ((T (*)(RelicBoneEffect*))(Il2CppBase() + 0x42B4060))(this);
	}
	template <typename T = void> T FadeShrinkUpdate() {
		return ((T (*)(RelicBoneEffect*))(Il2CppBase() + 0x42B4234))(this);
	}
	template <typename T = void> T StopMove() {
		return ((T (*)(RelicBoneEffect*))(Il2CppBase() + 0x42B44B4))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(RelicBoneEffect*))(Il2CppBase() + 0x42B4550))(this);
	}

};

}
