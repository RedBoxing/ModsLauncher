#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletParabola
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletParabola"));
	}

	template <typename T = float> T& gravity() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& y_speed() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& _y_speed() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& _origin_speed() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& relative_offset() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& img() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppString*> T& explode_fun_name() {
		return *(T*)((uintptr_t)this + 0x120);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BulletParabola*))(Il2CppBase() + 0x238A15C))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletParabola*))(Il2CppBase() + 0x238A1F8))(this);
	}
	template <typename T = void> T SetTargetPosition(Il2CppVector3 target) {
		return ((T (*)(BulletParabola*, Il2CppVector3))(Il2CppBase() + 0x238A268))(this, target);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BulletParabola*))(Il2CppBase() + 0x238A43C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(BulletParabola*))(Il2CppBase() + 0x238A6B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(BulletParabola*))(Il2CppBase() + 0x238A6B8))(this);
	}

};

}
