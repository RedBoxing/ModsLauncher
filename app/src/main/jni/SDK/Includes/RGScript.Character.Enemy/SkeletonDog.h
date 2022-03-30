#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Character.Enemy {

class SkeletonDog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Character.Enemy", "SkeletonDog"));
	}

	template <typename T = float> T& atkRange() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = uintptr_t> T& _gunPoint() {
		return *(T*)((uintptr_t)this + 0x258);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SkeletonDog*))(Il2CppBase() + 0x1C2E900))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(SkeletonDog*))(Il2CppBase() + 0x1C2EA98))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(SkeletonDog*))(Il2CppBase() + 0x1C2EECC))(this);
	}
	template <typename T = void> T OnAtk() {
		return ((T (*)(SkeletonDog*))(Il2CppBase() + 0x1C2F27C))(this);
	}
	template <typename T = void> T Dead(uintptr_t sourceObject, bool sync) {
		return ((T (*)(SkeletonDog*, uintptr_t, bool))(Il2CppBase() + 0x1C2F4C0))(this, sourceObject, sync);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(SkeletonDog*))(Il2CppBase() + 0x1C2F5C4))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(SkeletonDog*))(Il2CppBase() + 0x1C2F5CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dead(uintptr_t P0, bool P1) {
		return ((T (*)(SkeletonDog*, uintptr_t, bool))(Il2CppBase() + 0x1C2F5D4))(this, P0, P1);
	}

};

}
