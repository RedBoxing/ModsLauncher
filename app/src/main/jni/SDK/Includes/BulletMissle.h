#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletMissle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletMissle"));
	}

	template <typename T = float> T& verticleSpeed() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& launchTime() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& verticleAcceleration() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& _verticleSpeed() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& _horizontalSpeed() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = bool> T& missleLauch() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& updateVelocity() {
		return *(T*)((uintptr_t)this + 0x119);
	}

	template <typename T = void> T UpdateAttribute(uintptr_t source_object, int32_t damage, float the_speed, bool can_through, int32_t repel, int32_t camp) {
		return ((T (*)(BulletMissle*, uintptr_t, int32_t, float, bool, int32_t, int32_t))(Il2CppBase() + 0x2385C08))(this, source_object, damage, the_speed, can_through, repel, camp);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(BulletMissle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2385CEC))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T SetMissleSpeed(float verticleSpeed, float launchTime) {
		return ((T (*)(BulletMissle*, float, float))(Il2CppBase() + 0x2385DEC))(this, verticleSpeed, launchTime);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletMissle*))(Il2CppBase() + 0x2385E80))(this);
	}
	template <typename T = uintptr_t> T AdjustingSpeed() {
		return ((T (*)(BulletMissle*))(Il2CppBase() + 0x2386190))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateAttribute(uintptr_t P0, int32_t P1, float P2, bool P3, int32_t P4, int32_t P5) {
		return ((T (*)(BulletMissle*, uintptr_t, int32_t, float, bool, int32_t, int32_t))(Il2CppBase() + 0x2386280))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BulletMissle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x238628C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(BulletMissle*))(Il2CppBase() + 0x23862E4))(this);
	}

};

}
