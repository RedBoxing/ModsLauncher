#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Bullet02
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Bullet02"));
	}

	template <typename T = float> T& interval() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& delay_time() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& has_limit() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = int32_t> T& limit_time() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int32_t> T& _limit_time() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& has_target() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = int32_t> T& angle_speed() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = bool> T& tracking() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& trail() {
		return *(T*)((uintptr_t)this + 0x130);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(Bullet02*))(Il2CppBase() + 0x45A4548))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Bullet02*))(Il2CppBase() + 0x45A45EC))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(Bullet02*))(Il2CppBase() + 0x45A4658))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Bullet02*))(Il2CppBase() + 0x45A4748))(this);
	}
	template <typename T = void> T CreateBulletMover() {
		return ((T (*)(Bullet02*))(Il2CppBase() + 0x45A47B4))(this);
	}
	template <typename T = void> T SetAwakeTrue() {
		return ((T (*)(Bullet02*))(Il2CppBase() + 0x45A4988))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(Bullet02*))(Il2CppBase() + 0x45A4BDC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(Bullet02*))(Il2CppBase() + 0x45A4BE4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(Bullet02*))(Il2CppBase() + 0x45A4BEC))(this);
	}
	template <typename T = void> T iFixBaseProxy_CreateBulletMover() {
		return ((T (*)(Bullet02*))(Il2CppBase() + 0x45A4BF4))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAwakeTrue() {
		return ((T (*)(Bullet02*))(Il2CppBase() + 0x45A4BFC))(this);
	}

};

}
