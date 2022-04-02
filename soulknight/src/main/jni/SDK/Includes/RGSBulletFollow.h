#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGSBulletFollow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSBulletFollow"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& child_rate() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = int32_t> T& child_bullet_damage() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& child_bullet_speed() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& add_parent_speed() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& child_destory_time() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& bulletCreator() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& interval() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& delay_time() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = bool> T& has_limit() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = int32_t> T& limit_time() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = int32_t> T& _limit_time() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = bool> T& has_target() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = int32_t> T& angle_speed() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = float> T& move_angle() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = bool> T& tracking() {
		return *(T*)((uintptr_t)this + 0x15C);
	}

	template <typename T = void> T OnDisable() {
		return ((T (*)(RGSBulletFollow*))(Il2CppBase() + 0x1C1FBB0))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGSBulletFollow*))(Il2CppBase() + 0x1C1FC10))(this);
	}
	template <typename T = uintptr_t> T CreateBullet() {
		return ((T (*)(RGSBulletFollow*))(Il2CppBase() + 0x1C1FCCC))(this);
	}
	template <typename T = void> T CreateBulletMover() {
		return ((T (*)(RGSBulletFollow*))(Il2CppBase() + 0x1C1FDAC))(this);
	}
	template <typename T = void> T UpdateAttribute(uintptr_t source_object, int32_t damage, float speed, bool can_through, int32_t repel, int32_t camp) {
		return ((T (*)(RGSBulletFollow*, uintptr_t, int32_t, float, bool, int32_t, int32_t))(Il2CppBase() + 0x1C1FF84))(this, source_object, damage, speed, can_through, repel, camp);
	}
	template <typename T = void> T StopBullet() {
		return ((T (*)(RGSBulletFollow*))(Il2CppBase() + 0x1C20130))(this);
	}
	template <typename T = void> T SetAwakeTrue() {
		return ((T (*)(RGSBulletFollow*))(Il2CppBase() + 0x1C201A0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(RGSBulletFollow*))(Il2CppBase() + 0x1C20280))(this);
	}
	template <typename T = void> T iFixBaseProxy_CreateBulletMover() {
		return ((T (*)(RGSBulletFollow*))(Il2CppBase() + 0x1C20288))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateAttribute(uintptr_t P0, int32_t P1, float P2, bool P3, int32_t P4, int32_t P5) {
		return ((T (*)(RGSBulletFollow*, uintptr_t, int32_t, float, bool, int32_t, int32_t))(Il2CppBase() + 0x1C20290))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T iFixBaseProxy_StopBullet() {
		return ((T (*)(RGSBulletFollow*))(Il2CppBase() + 0x1C2029C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAwakeTrue() {
		return ((T (*)(RGSBulletFollow*))(Il2CppBase() + 0x1C202A4))(this);
	}

};

}
