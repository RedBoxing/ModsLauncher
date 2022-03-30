#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectShaker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectShaker"));
	}

	template <typename T = Il2CppVector2> T& XRange() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& YRange() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& TargetTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& DurationCounter() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& PeriodCounter() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& IsShaking() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& ShakeCount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& CurrentShakeCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& ShakeFromPosition() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& ShakeTargetPosition() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& ShakeInitPosition() {
		return *(T*)((uintptr_t)this + 0x64);
	}

	template <typename T = Il2CppVector2> T get_XRange() {
		return ((T (*)(ObjectShaker*))(Il2CppBase() + 0x1DC0810))(this);
	}
	template <typename T = Il2CppVector2> T get_YRange() {
		return ((T (*)(ObjectShaker*))(Il2CppBase() + 0x1DC0818))(this);
	}
	template <typename T = float> T get_Duration() {
		return ((T (*)(ObjectShaker*))(Il2CppBase() + 0x1DC0820))(this);
	}
	template <typename T = uintptr_t> T get_TargetTransform() {
		return ((T (*)(ObjectShaker*))(Il2CppBase() + 0x1DC0828))(this);
	}
	template <typename T = uintptr_t> T get_DurationCounter() {
		return ((T (*)(ObjectShaker*))(Il2CppBase() + 0x1DC0830))(this);
	}
	template <typename T = uintptr_t> T get_PeriodCounter() {
		return ((T (*)(ObjectShaker*))(Il2CppBase() + 0x1DC0838))(this);
	}
	template <typename T = bool> T get_IsShaking() {
		return ((T (*)(ObjectShaker*))(Il2CppBase() + 0x1DC0840))(this);
	}
	template <typename T = void> T set_IsShaking(bool value) {
		return ((T (*)(ObjectShaker*, bool))(Il2CppBase() + 0x1DC0848))(this, value);
	}
	template <typename T = int32_t> T get_ShakeCount() {
		return ((T (*)(ObjectShaker*))(Il2CppBase() + 0x1DC0854))(this);
	}
	template <typename T = int32_t> T get_CurrentShakeCount() {
		return ((T (*)(ObjectShaker*))(Il2CppBase() + 0x1DC085C))(this);
	}
	template <typename T = void> T set_CurrentShakeCount(int32_t value) {
		return ((T (*)(ObjectShaker*, int32_t))(Il2CppBase() + 0x1DC0864))(this, value);
	}
	template <typename T = Il2CppVector3> T get_ShakeFromPosition() {
		return ((T (*)(ObjectShaker*))(Il2CppBase() + 0x1DC086C))(this);
	}
	template <typename T = void> T set_ShakeFromPosition(Il2CppVector3 value) {
		return ((T (*)(ObjectShaker*, Il2CppVector3))(Il2CppBase() + 0x1DC0878))(this, value);
	}
	template <typename T = Il2CppVector3> T get_ShakeTargetPosition() {
		return ((T (*)(ObjectShaker*))(Il2CppBase() + 0x1DC0884))(this);
	}
	template <typename T = void> T set_ShakeTargetPosition(Il2CppVector3 value) {
		return ((T (*)(ObjectShaker*, Il2CppVector3))(Il2CppBase() + 0x1DC0890))(this, value);
	}
	template <typename T = Il2CppVector3> T get_ShakeInitPosition() {
		return ((T (*)(ObjectShaker*))(Il2CppBase() + 0x1DC089C))(this);
	}
	template <typename T = void> T set_ShakeInitPosition(Il2CppVector3 value) {
		return ((T (*)(ObjectShaker*, Il2CppVector3))(Il2CppBase() + 0x1DC08A8))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ObjectShaker*))(Il2CppBase() + 0x1DC0994))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ObjectShaker*))(Il2CppBase() + 0x1DC0CE4))(this);
	}
	template <typename T = void> T UpdatePosition() {
		return ((T (*)(ObjectShaker*))(Il2CppBase() + 0x1DC0DFC))(this);
	}
	template <typename T = void> T SetShakeTarget() {
		return ((T (*)(ObjectShaker*))(Il2CppBase() + 0x1DC0B4C))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(ObjectShaker*))(Il2CppBase() + 0x1DC0AA8))(this);
	}

};

}
