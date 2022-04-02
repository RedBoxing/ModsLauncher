#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletSurround
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletSurround"));
	}


	template <typename T = uintptr_t> T get_source() {
		return ((T (*)(BulletSurround*))(Il2CppBase() + 0x2392C88))(this);
	}
	template <typename T = void> T Setup(uintptr_t parent, Il2CppVector3 offset, float angle, float radius) {
		return ((T (*)(BulletSurround*, uintptr_t, Il2CppVector3, float, float))(Il2CppBase() + 0x2392CFC))(this, parent, offset, angle, radius);
	}
	template <typename T = void> T Setup_1(float angleSpeed, float radiusSpeed, float targetRadius) {
		return ((T (*)(BulletSurround*, float, float, float))(Il2CppBase() + 0x2392E5C))(this, angleSpeed, radiusSpeed, targetRadius);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletSurround*))(Il2CppBase() + 0x2392F78))(this);
	}
	template <typename T = void> T CreateBulletMover() {
		return ((T (*)(BulletSurround*))(Il2CppBase() + 0x2393060))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(BulletSurround*))(Il2CppBase() + 0x2393234))(this);
	}
	template <typename T = void> T iFixBaseProxy_CreateBulletMover() {
		return ((T (*)(BulletSurround*))(Il2CppBase() + 0x239323C))(this);
	}

};

}
