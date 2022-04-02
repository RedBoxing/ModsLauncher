#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun017
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun017"));
	}

	template <typename T = uintptr_t> T& fin_funnel() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun017*))(Il2CppBase() + 0x2572D38))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Gun017*))(Il2CppBase() + 0x2572D98))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun017*))(Il2CppBase() + 0x2572E78))(this);
	}
	template <typename T = void> T DropWeapon(int32_t target_layer) {
		return ((T (*)(Gun017*, int32_t))(Il2CppBase() + 0x2573080))(this, target_layer);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(Gun017*, uintptr_t))(Il2CppBase() + 0x2573110))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(Gun017*, uintptr_t, int32_t))(Il2CppBase() + 0x25731A0))(this, parent, target_layer);
	}
	template <typename T = void> T ShowSelf() {
		return ((T (*)(Gun017*))(Il2CppBase() + 0x257323C))(this);
	}
	template <typename T = void> T HideSelf() {
		return ((T (*)(Gun017*))(Il2CppBase() + 0x257362C))(this);
	}
	template <typename T = void> T ShowSelfManually() {
		return ((T (*)(Gun017*))(Il2CppBase() + 0x2573B1C))(this);
	}
	template <typename T = void> T HideSelfManually() {
		return ((T (*)(Gun017*))(Il2CppBase() + 0x2573B88))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun017*))(Il2CppBase() + 0x2573BFC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(Gun017*))(Il2CppBase() + 0x2573C04))(this);
	}
	template <typename T = void> T iFixBaseProxy_DropWeapon(int32_t P0) {
		return ((T (*)(Gun017*, int32_t))(Il2CppBase() + 0x2573C0C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(Gun017*, uintptr_t))(Il2CppBase() + 0x2573C14))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(Gun017*, uintptr_t, int32_t))(Il2CppBase() + 0x2573C1C))(this, P0, P1);
	}

};

}
