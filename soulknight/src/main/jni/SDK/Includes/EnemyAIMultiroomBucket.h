#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAIMultiroomBucket
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAIMultiroomBucket"));
	}

	template <typename T = int32_t> T& firePoint_max() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = int32_t> T& firePoint() {
		return *(T*)((uintptr_t)this + 0x24C);
	}
	template <typename T = int32_t> static T& Fire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(EnemyAIMultiroomBucket*, int32_t, uintptr_t))(Il2CppBase() + 0x2A301BC))(this, damage, source_object);
	}
	template <typename T = void> T SyncGetHurt(int32_t damage) {
		return ((T (*)(EnemyAIMultiroomBucket*, int32_t))(Il2CppBase() + 0x2A303D0))(this, damage);
	}
	template <typename T = void> T ChangeFirePoint() {
		return ((T (*)(EnemyAIMultiroomBucket*))(Il2CppBase() + 0x2A30274))(this);
	}
	template <typename T = void> T Extinguish() {
		return ((T (*)(EnemyAIMultiroomBucket*))(Il2CppBase() + 0x2A30450))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(EnemyAIMultiroomBucket*, int32_t, uintptr_t))(Il2CppBase() + 0x2A3058C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SyncGetHurt(int32_t P0) {
		return ((T (*)(EnemyAIMultiroomBucket*, int32_t))(Il2CppBase() + 0x2A30590))(this, P0);
	}

};

}
