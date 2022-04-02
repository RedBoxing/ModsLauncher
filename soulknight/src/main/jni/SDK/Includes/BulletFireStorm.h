#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletFireStorm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletFireStorm"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& lightColors() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& trailColors() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> T& radiusDir() {
		return *(T*)((uintptr_t)this + 0x120);
	}

	template <typename T = uintptr_t> T get_source() {
		return ((T (*)(BulletFireStorm*))(Il2CppBase() + 0x45B1E4C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BulletFireStorm*))(Il2CppBase() + 0x45B1EC0))(this);
	}
	template <typename T = void> T Setup(uintptr_t parent, float angle, float radius) {
		return ((T (*)(BulletFireStorm*, uintptr_t, float, float))(Il2CppBase() + 0x45B20F4))(this, parent, angle, radius);
	}
	template <typename T = void> T Setup_1(float angleSpeed, float radiusSpeed, float targetRadius) {
		return ((T (*)(BulletFireStorm*, float, float, float))(Il2CppBase() + 0x45B223C))(this, angleSpeed, radiusSpeed, targetRadius);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletFireStorm*))(Il2CppBase() + 0x45B235C))(this);
	}
	template <typename T = uintptr_t> T Moving() {
		return ((T (*)(BulletFireStorm*))(Il2CppBase() + 0x45B246C))(this);
	}
	template <typename T = uintptr_t> T DetectingBack() {
		return ((T (*)(BulletFireStorm*))(Il2CppBase() + 0x45B254C))(this);
	}
	template <typename T = void> T CreateBulletMover() {
		return ((T (*)(BulletFireStorm*))(Il2CppBase() + 0x45B262C))(this);
	}
	template <typename T = void> T SetIndex(int32_t i) {
		return ((T (*)(BulletFireStorm*, int32_t))(Il2CppBase() + 0x45B27FC))(this, i);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BulletFireStorm*))(Il2CppBase() + 0x45B2B2C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(BulletFireStorm*))(Il2CppBase() + 0x45B2B34))(this);
	}
	template <typename T = void> T iFixBaseProxy_CreateBulletMover() {
		return ((T (*)(BulletFireStorm*))(Il2CppBase() + 0x45B2B3C))(this);
	}

};

}
