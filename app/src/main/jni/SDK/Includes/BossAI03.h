#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI03
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI03"));
	}

	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = uintptr_t> T& bullet02() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = uintptr_t> T& bullet03() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uintptr_t> T& bullet04() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = uintptr_t> T& bullet05() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& the_bullet() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = uintptr_t> T& h1() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& h2() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& point_1() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& point_2() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = int32_t> T& atk4_index() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& eye_root_tf() {
		return *(T*)((uintptr_t)this + 0x318);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B37708))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B37970))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B379E0))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI03*, int32_t))(Il2CppBase() + 0x1B37B4C))(this, index);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B383A4))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI03*, int32_t, uintptr_t))(Il2CppBase() + 0x1B38760))(this, damage, source_object);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B388DC))(this);
	}
	template <typename T = void> T StartAtk01() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B37C54))(this);
	}
	template <typename T = void> T InAtk01(int32_t value) {
		return ((T (*)(BossAI03*, int32_t))(Il2CppBase() + 0x1B3893C))(this, value);
	}
	template <typename T = void> T EndAtk01() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B38DBC))(this);
	}
	template <typename T = void> T StartAtk02() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B37D00))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B38F14))(this);
	}
	template <typename T = void> T EndAtk02() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B392C4))(this);
	}
	template <typename T = void> T StartAtk03() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B37F20))(this);
	}
	template <typename T = void> T InAtk03() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B39414))(this);
	}
	template <typename T = void> T Atk03BulletMove() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B39608))(this);
	}
	template <typename T = void> T EndAtk03() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B397C0))(this);
	}
	template <typename T = void> T StartAtk04() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B380A4))(this);
	}
	template <typename T = void> T InAtk04() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B39838))(this);
	}
	template <typename T = void> T EndAtk04() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B39D68))(this);
	}
	template <typename T = void> T StartAtk05() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B38210))(this);
	}
	template <typename T = void> T InAtk05() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B39DE0))(this);
	}
	template <typename T = void> T EndAtk05() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B3A17C))(this);
	}
	template <typename T = void> T OpenRedEye() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B3A1F4))(this);
	}
	template <typename T = void> T CloseRedEye() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B3A368))(this);
	}
	template <typename T = void> T ShowRedEye(bool show) {
		return ((T (*)(BossAI03*, bool))(Il2CppBase() + 0x1B3A258))(this, show);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B3A3D4))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B3A3DC))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI03*, int32_t))(Il2CppBase() + 0x1B3A3E4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B3A3EC))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI03*, int32_t, uintptr_t))(Il2CppBase() + 0x1B3A3F4))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(BossAI03*))(Il2CppBase() + 0x1B3A3FC))(this);
	}

};

}
