#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletBlackHole
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletBlackHole"));
	}

	template <typename T = uintptr_t> T& explode_poly() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& time_interval() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& childTrigger() {
		return *(T*)((uintptr_t)this + 0x128);
	}

	template <typename T = void> T UpdateAttribute(uintptr_t source_object, int32_t damage, float the_speed, bool can_through, int32_t repel, int32_t camp) {
		return ((T (*)(BulletBlackHole*, uintptr_t, int32_t, float, bool, int32_t, int32_t))(Il2CppBase() + 0x45A8BB0))(this, source_object, damage, the_speed, can_through, repel, camp);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(BulletBlackHole*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45A8D58))(this, bulletInfo, damageInfo);
	}
	template <typename T = uintptr_t> T Poly() {
		return ((T (*)(BulletBlackHole*))(Il2CppBase() + 0x45A8CA4))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateAttribute(uintptr_t P0, int32_t P1, float P2, bool P3, int32_t P4, int32_t P5) {
		return ((T (*)(BulletBlackHole*, uintptr_t, int32_t, float, bool, int32_t, int32_t))(Il2CppBase() + 0x45A8EC8))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BulletBlackHole*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45A8ED4))(this, P0, P1);
	}

};

}
