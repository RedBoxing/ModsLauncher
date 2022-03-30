#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAIStatueCrab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAIStatueCrab"));
	}

	template <typename T = float> T& atkDistance() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = int32_t> T& bullet_count() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = float> T& bullet_speed() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = bool> T& need_random_speed() {
		return *(T*)((uintptr_t)this + 0x24C);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = float> T& angle() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = uintptr_t> T& atk1_clip() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = float> T& shootTime() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = bool> T& canBeHurt() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = int32_t> static T& AnimRunId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AnimAtkId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& hasInit() {
		return *(T*)((uintptr_t)this + 0x265);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAIStatueCrab*))(Il2CppBase() + 0x1FD8540))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t sourceObject) {
		return ((T (*)(EnemyAIStatueCrab*, int32_t, uintptr_t))(Il2CppBase() + 0x1FD8674))(this, damage, sourceObject);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAIStatueCrab*))(Il2CppBase() + 0x1FD8B68))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAIStatueCrab*))(Il2CppBase() + 0x1FD8F04))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(EnemyAIStatueCrab*))(Il2CppBase() + 0x1FD9128))(this);
	}
	template <typename T = void> T OnAtk() {
		return ((T (*)(EnemyAIStatueCrab*))(Il2CppBase() + 0x1FD9194))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(EnemyAIStatueCrab*, int32_t, uintptr_t))(Il2CppBase() + 0x1FD9650))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAIStatueCrab*))(Il2CppBase() + 0x1FD9658))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAIStatueCrab*))(Il2CppBase() + 0x1FD9660))(this);
	}
	template <typename T = void> T iFixBaseProxy_EndCycle() {
		return ((T (*)(EnemyAIStatueCrab*))(Il2CppBase() + 0x1FD9668))(this);
	}

};

}
