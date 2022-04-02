#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI06Child
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI06Child"));
	}

	template <typename T = uintptr_t> T& rigibody2d() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& gun_point() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& parent_point() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& target_point() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& free_move() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& get_target() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = bool> T& has_target() {
		return *(T*)((uintptr_t)this + 0x46);
	}
	template <typename T = bool> T& lock_target() {
		return *(T*)((uintptr_t)this + 0x47);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& aim() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& bullet02() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& bullet03() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& the_aim() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& in_atk1() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& in_atk3() {
		return *(T*)((uintptr_t)this + 0x81);
	}
	template <typename T = uintptr_t> T& atk_clip1() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& atk_clip2() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& detect_list() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& laser_facing() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI06Child*))(Il2CppBase() + 0x2E9BEE4))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BossAI06Child*))(Il2CppBase() + 0x2E9BFC8))(this);
	}
	template <typename T = void> T SetAngrySprite(uintptr_t value) {
		return ((T (*)(BossAI06Child*, uintptr_t))(Il2CppBase() + 0x2E9BD04))(this, value);
	}
	template <typename T = void> T SetParentPoint(uintptr_t value, uintptr_t value2) {
		return ((T (*)(BossAI06Child*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2E98574))(this, value, value2);
	}
	template <typename T = void> T SetFreeMove() {
		return ((T (*)(BossAI06Child*))(Il2CppBase() + 0x2E9AA20))(this);
	}
	template <typename T = void> T GetNextPoint() {
		return ((T (*)(BossAI06Child*))(Il2CppBase() + 0x2E9C9D0))(this);
	}
	template <typename T = void> T BackToParent() {
		return ((T (*)(BossAI06Child*))(Il2CppBase() + 0x2E9AC2C))(this);
	}
	template <typename T = void> T GetToTarget() {
		return ((T (*)(BossAI06Child*))(Il2CppBase() + 0x2E9C27C))(this);
	}
	template <typename T = void> T FindTarget() {
		return ((T (*)(BossAI06Child*))(Il2CppBase() + 0x2E9C6D0))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI06Child*))(Il2CppBase() + 0x2E9C47C))(this);
	}
	template <typename T = void> T Attack(int32_t value) {
		return ((T (*)(BossAI06Child*, int32_t))(Il2CppBase() + 0x2E9A7A4))(this, value);
	}
	template <typename T = void> T Atk1() {
		return ((T (*)(BossAI06Child*))(Il2CppBase() + 0x2E9CAFC))(this);
	}
	template <typename T = uintptr_t> T EndAtk1(int32_t facing, float delay) {
		return ((T (*)(BossAI06Child*, int32_t, float))(Il2CppBase() + 0x2E9D4F4))(this, facing, delay);
	}
	template <typename T = void> T Atk02() {
		return ((T (*)(BossAI06Child*))(Il2CppBase() + 0x2E9CDD8))(this);
	}
	template <typename T = void> T Atk03() {
		return ((T (*)(BossAI06Child*))(Il2CppBase() + 0x2E9D2A4))(this);
	}
	template <typename T = uintptr_t> T InAtk03() {
		return ((T (*)(BossAI06Child*))(Il2CppBase() + 0x2E9D628))(this);
	}
	template <typename T = void> T EndAtk03() {
		return ((T (*)(BossAI06Child*))(Il2CppBase() + 0x2E9D708))(this);
	}

};

}
