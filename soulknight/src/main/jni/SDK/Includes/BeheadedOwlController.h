#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BeheadedOwlController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BeheadedOwlController"));
	}

	template <typename T = uintptr_t> T& showClip() {
		return *(T*)((uintptr_t)this + 0x258);
	}

	template <typename T = void> T Scout() {
		return ((T (*)(BeheadedOwlController*))(Il2CppBase() + 0x1B236C8))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BeheadedOwlController*))(Il2CppBase() + 0x1B237E8))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BeheadedOwlController*))(Il2CppBase() + 0x1B23B7C))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage) {
		return ((T (*)(BeheadedOwlController*, int32_t))(Il2CppBase() + 0x1B24010))(this, damage);
	}
	template <typename T = void> T HideOwl() {
		return ((T (*)(BeheadedOwlController*))(Il2CppBase() + 0x1B24080))(this);
	}
	template <typename T = void> T ShowOwl() {
		return ((T (*)(BeheadedOwlController*))(Il2CppBase() + 0x1B240FC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(BeheadedOwlController*))(Il2CppBase() + 0x1B241EC))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BeheadedOwlController*))(Il2CppBase() + 0x1B241F4))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(BeheadedOwlController*))(Il2CppBase() + 0x1B241FC))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0) {
		return ((T (*)(BeheadedOwlController*, int32_t))(Il2CppBase() + 0x1B24204))(this, P0);
	}

};

}
