#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EmitHookSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmitHookSkill"));
	}

	template <typename T = uintptr_t> T& _owner() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _skillControl() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& onStart() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& onEnd() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& nextControllerTargetIndex() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& _target() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _aimObject() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _aimLineObject() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _rotate() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& _rotateOriAngle() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _threadRenderer() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _hookCollider() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _hook() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppVector3> T& _threadOriOffset() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _cachedResult() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppVector3> T& _emitDirection() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppVector3> T& _currentHookSpeed() {
		return *(T*)((uintptr_t)this + 0xC4);
	}

	template <typename T = void> T ReleaseSkill() {
		return ((T (*)(EmitHookSkill*))(Il2CppBase() + 0x1B97D08))(this);
	}
	template <typename T = void> T CleanUp(uintptr_t e) {
		return ((T (*)(EmitHookSkill*, uintptr_t))(Il2CppBase() + 0x1B97E48))(this, e);
	}
	template <typename T = Il2CppVector3> T _GetNextHookSpeed(Il2CppVector3 currentSpeed) {
		return ((T (*)(EmitHookSkill*, Il2CppVector3))(Il2CppBase() + 0x1B981E8))(this, currentSpeed);
	}
	template <typename T = void> T Update() {
		return ((T (*)(EmitHookSkill*))(Il2CppBase() + 0x1B98370))(this);
	}
	template <typename T = void> T OnSkillAnimEvent(int32_t eventNumber) {
		return ((T (*)(EmitHookSkill*, int32_t))(Il2CppBase() + 0x1B9A4D4))(this, eventNumber);
	}
	template <typename T = void> T ResetHitTargetState() {
		return ((T (*)(EmitHookSkill*))(Il2CppBase() + 0x1B98054))(this);
	}
	template <typename T = void> T OnSkillEnd() {
		return ((T (*)(EmitHookSkill*))(Il2CppBase() + 0x1B9A230))(this);
	}
	template <typename T = void> T Updateb__23_0() {
		return ((T (*)(EmitHookSkill*))(Il2CppBase() + 0x1B9AA50))(this);
	}
	template <typename T = void> T Updateb__23_1() {
		return ((T (*)(EmitHookSkill*))(Il2CppBase() + 0x1B9AA5C))(this);
	}
	template <typename T = void> T Updateb__23_2() {
		return ((T (*)(EmitHookSkill*))(Il2CppBase() + 0x1B9AC50))(this);
	}

};

}
