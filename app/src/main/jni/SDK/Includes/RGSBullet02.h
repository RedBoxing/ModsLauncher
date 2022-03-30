#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGSBullet02
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSBullet02"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = int32_t> T& child_bullet_damage() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& child_bullet_speed() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& useChildDamage() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& this_parent() {
		return *(T*)((uintptr_t)this + 0x121);
	}
	template <typename T = void*> T& onBulletCreate() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& createdBulletList() {
		return *(T*)((uintptr_t)this + 0x130);
	}

	template <typename T = void> T add_onBulletCreate(void* value) {
		return ((T (*)(RGSBullet02*, void*))(Il2CppBase() + 0x1C1E9B4))(this, value);
	}
	template <typename T = void> T remove_onBulletCreate(void* value) {
		return ((T (*)(RGSBullet02*, void*))(Il2CppBase() + 0x1C1EAA4))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGSBullet02*))(Il2CppBase() + 0x1C1EB94))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(RGSBullet02*))(Il2CppBase() + 0x1C1ED74))(this);
	}
	template <typename T = void> T UpdateAttribute(uintptr_t the_source_object, int32_t damage, float speed, bool can_through, int32_t repel, int32_t camp) {
		return ((T (*)(RGSBullet02*, uintptr_t, int32_t, float, bool, int32_t, int32_t))(Il2CppBase() + 0x1C1F450))(this, the_source_object, damage, speed, can_through, repel, camp);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(RGSBullet02*))(Il2CppBase() + 0x1C1F7D4))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateAttribute(uintptr_t P0, int32_t P1, float P2, bool P3, int32_t P4, int32_t P5) {
		return ((T (*)(RGSBullet02*, uintptr_t, int32_t, float, bool, int32_t, int32_t))(Il2CppBase() + 0x1C1F7DC))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
