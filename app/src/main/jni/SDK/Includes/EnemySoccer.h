#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemySoccer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemySoccer"));
	}


	template <typename T = void> T Awake() {
		return ((T (*)(EnemySoccer*))(Il2CppBase() + 0x1FEEF40))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(EnemySoccer*, int32_t, uintptr_t))(Il2CppBase() + 0x1FEF0A4))(this, damage, source_object);
	}
	template <typename T = bool> T GetForce(Il2CppVector2 direction, float forceValue, float limit, bool ignoreDizzy) {
		return ((T (*)(EnemySoccer*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x1FEF318))(this, direction, forceValue, limit, ignoreDizzy);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemySoccer*))(Il2CppBase() + 0x1FEF49C))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemySoccer*))(Il2CppBase() + 0x1FEF65C))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemySoccer*))(Il2CppBase() + 0x1FEF6C0))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemySoccer*))(Il2CppBase() + 0x1FEF724))(this);
	}
	template <typename T = uintptr_t> T SendingPosition() {
		return ((T (*)(EnemySoccer*))(Il2CppBase() + 0x1FEF788))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(EnemySoccer*, int32_t, uintptr_t))(Il2CppBase() + 0x1FEF8D0))(this, P0, P1);
	}
	template <typename T = bool> T iFixBaseProxy_GetForce(Il2CppVector2 P0, float P1, float P2, bool P3) {
		return ((T (*)(EnemySoccer*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x1FEF8D8))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemySoccer*))(Il2CppBase() + 0x1FEF8E4))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemySoccer*))(Il2CppBase() + 0x1FEF8EC))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemySoccer*))(Il2CppBase() + 0x1FEF8F4))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemySoccer*))(Il2CppBase() + 0x1FEF8FC))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_SendingPosition() {
		return ((T (*)(EnemySoccer*))(Il2CppBase() + 0x1FEF904))(this);
	}

};

}
