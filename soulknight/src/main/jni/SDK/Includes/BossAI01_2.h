#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI012
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI01_2"));
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
	template <typename T = uintptr_t> T& h2() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = uintptr_t> T& point_1() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& point_2() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = int32_t> T& select_atk_type() {
		return *(T*)((uintptr_t)this + 0x300);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B32374))(this);
	}
	template <typename T = void> T Atk1() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B325A8))(this);
	}
	template <typename T = void> T Atk2() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B32680))(this);
	}
	template <typename T = void> T Atk3() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B326E4))(this);
	}
	template <typename T = void> T Atk4() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B32748))(this);
	}
	template <typename T = void> T Atk5() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B327AC))(this);
	}
	template <typename T = void> T SelectAtkType(int32_t type) {
		return ((T (*)(BossAI012*, int32_t))(Il2CppBase() + 0x1B3260C))(this, type);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B32810))(this);
	}
	template <typename T = void> T HandLockTarget() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B32880))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B32938))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B32C3C))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI012*, int32_t, uintptr_t))(Il2CppBase() + 0x1B33000))(this, damage, source_object);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B3317C))(this);
	}
	template <typename T = void> T CreateBullet01() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B331DC))(this);
	}
	template <typename T = void> T EndAtk01() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B3364C))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B33794))(this);
	}
	template <typename T = void> T InAtk03() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B3411C))(this);
	}
	template <typename T = void> T EndAtk03() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B3453C))(this);
	}
	template <typename T = void> T InAtk04(int32_t hand_idx) {
		return ((T (*)(BossAI012*, int32_t))(Il2CppBase() + 0x1B34708))(this, hand_idx);
	}
	template <typename T = void> T EndAtk04() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B34AD4))(this);
	}
	template <typename T = void> T InAtk05() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B34C98))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B35024))(this);
	}
	template <typename T = void> T iFixBaseProxy_HandLockTarget() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B3502C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B35034))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI012*))(Il2CppBase() + 0x1B3503C))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI012*, int32_t, uintptr_t))(Il2CppBase() + 0x1B35044))(this, P0, P1);
	}

};

}
