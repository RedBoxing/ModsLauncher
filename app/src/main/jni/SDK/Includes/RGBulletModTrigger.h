#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBulletModTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBulletModTrigger"));
	}

	template <typename T = Il2CppString*> T& buffMark() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& _mark() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGBulletModTrigger*, uintptr_t))(Il2CppBase() + 0x19D1E1C))(this, other);
	}
	template <typename T = bool> T IsLargable(Il2CppString* mark) {
		return ((T (*)(RGBulletModTrigger*, Il2CppString*))(Il2CppBase() + 0x19D274C))(this, mark);
	}
	template <typename T = void> T Modify(uintptr_t damageTrigger) {
		return ((T (*)(RGBulletModTrigger*, uintptr_t))(Il2CppBase() + 0x19D2354))(this, damageTrigger);
	}
	template <typename T = void> T Modify_1(uintptr_t hammer) {
		return ((T (*)(RGBulletModTrigger*, uintptr_t))(Il2CppBase() + 0x19D254C))(this, hammer);
	}
	template <typename T = Il2CppString*> T get_mark() {
		return ((T (*)(RGBulletModTrigger*))(Il2CppBase() + 0x19D27C0))(this);
	}
	template <typename T = void> T OnTransformParentChanged() {
		return ((T (*)(RGBulletModTrigger*))(Il2CppBase() + 0x19D2BB4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsLargable(Il2CppString* P0) {
		return ((T (*)(RGBulletModTrigger*, Il2CppString*))(Il2CppBase() + 0x19D2C54))(this, P0);
	}

};

}
