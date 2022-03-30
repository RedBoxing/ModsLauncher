#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyDummy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyDummy"));
	}

	template <typename T = int32_t> static T& dummyIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyDummy*))(Il2CppBase() + 0x1FE8B14))(this);
	}
	template <typename T = void> T SetUpAttribution() {
		return ((T (*)(EnemyDummy*))(Il2CppBase() + 0x1FE8CB4))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyDummy*))(Il2CppBase() + 0x1FE8D6C))(this);
	}
	template <typename T = void> T Dead(uintptr_t source_object, bool sync) {
		return ((T (*)(EnemyDummy*, uintptr_t, bool))(Il2CppBase() + 0x1FE8DC8))(this, source_object, sync);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(EnemyDummy*, float, bool))(Il2CppBase() + 0x1FE8F90))(this, duration, isFreeze);
	}
	template <typename T = void> T iFixBaseProxy_SetUpAttribution() {
		return ((T (*)(EnemyDummy*))(Il2CppBase() + 0x1FE907C))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyDummy*))(Il2CppBase() + 0x1FE9084))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dead(uintptr_t P0, bool P1) {
		return ((T (*)(EnemyDummy*, uintptr_t, bool))(Il2CppBase() + 0x1FE908C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(EnemyDummy*, float, bool))(Il2CppBase() + 0x1FE9098))(this, P0, P1);
	}

};

}
