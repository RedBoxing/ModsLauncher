#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGSBullet01
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSBullet01"));
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

	template <typename T = void> T OnDisable() {
		return ((T (*)(RGSBullet01*))(Il2CppBase() + 0x1C1DCE8))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGSBullet01*))(Il2CppBase() + 0x1C1DD48))(this);
	}
	template <typename T = uintptr_t> T CreateBullet() {
		return ((T (*)(RGSBullet01*))(Il2CppBase() + 0x1C1DDDC))(this);
	}
	template <typename T = uintptr_t> T CreateSubBullet() {
		return ((T (*)(RGSBullet01*))(Il2CppBase() + 0x1C1DEBC))(this);
	}
	template <typename T = void> T UpdateAttribute(uintptr_t source_object, int32_t damage, float speed, bool can_through, int32_t repel, int32_t camp) {
		return ((T (*)(RGSBullet01*, uintptr_t, int32_t, float, bool, int32_t, int32_t))(Il2CppBase() + 0x1C1DF9C))(this, source_object, damage, speed, can_through, repel, camp);
	}
	template <typename T = void> T StopBullet() {
		return ((T (*)(RGSBullet01*))(Il2CppBase() + 0x1C1E2F0))(this);
	}
	template <typename T = void> T SetAwakeTrue() {
		return ((T (*)(RGSBullet01*))(Il2CppBase() + 0x1C1E360))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(RGSBullet01*))(Il2CppBase() + 0x1C1E414))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateAttribute(uintptr_t P0, int32_t P1, float P2, bool P3, int32_t P4, int32_t P5) {
		return ((T (*)(RGSBullet01*, uintptr_t, int32_t, float, bool, int32_t, int32_t))(Il2CppBase() + 0x1C1E41C))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T iFixBaseProxy_StopBullet() {
		return ((T (*)(RGSBullet01*))(Il2CppBase() + 0x1C1E428))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAwakeTrue() {
		return ((T (*)(RGSBullet01*))(Il2CppBase() + 0x1C1E430))(this);
	}

};

}
