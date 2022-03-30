#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Bullet02AngleLimit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Bullet02AngleLimit"));
	}

	template <typename T = float> T& angle_limit() {
		return *(T*)((uintptr_t)this + 0x138);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(Bullet02AngleLimit*))(Il2CppBase() + 0x45A4C04))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Bullet02AngleLimit*))(Il2CppBase() + 0x45A4EEC))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(Bullet02AngleLimit*))(Il2CppBase() + 0x45A4F58))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Bullet02AngleLimit*))(Il2CppBase() + 0x45A5054))(this);
	}
	template <typename T = void> T StopBullet() {
		return ((T (*)(Bullet02AngleLimit*))(Il2CppBase() + 0x45A50C0))(this);
	}
	template <typename T = void> T SetAwakeTrue() {
		return ((T (*)(Bullet02AngleLimit*))(Il2CppBase() + 0x45A5124))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(Bullet02AngleLimit*))(Il2CppBase() + 0x45A5378))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopBullet() {
		return ((T (*)(Bullet02AngleLimit*))(Il2CppBase() + 0x45A537C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAwakeTrue() {
		return ((T (*)(Bullet02AngleLimit*))(Il2CppBase() + 0x45A5384))(this);
	}

};

}
