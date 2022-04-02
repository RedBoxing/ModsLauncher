#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletMoverRoundabout
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletMoverRoundabout"));
	}

	template <typename T = float> T& bulletSpeed() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = void> T Setup(float speed, uintptr_t target) {
		return ((T (*)(BulletMoverRoundabout*, float, uintptr_t))(Il2CppBase() + 0x2387EF8))(this, speed, target);
	}
	template <typename T = void> T MoveFixedUpdate() {
		return ((T (*)(BulletMoverRoundabout*))(Il2CppBase() + 0x2388044))(this);
	}
	template <typename T = void> T FindTarget() {
		return ((T (*)(BulletMoverRoundabout*))(Il2CppBase() + 0x23887F4))(this);
	}
	template <typename T = void> T iFixBaseProxy_MoveFixedUpdate() {
		return ((T (*)(BulletMoverRoundabout*))(Il2CppBase() + 0x2388990))(this);
	}
	template <typename T = void> T iFixBaseProxy_FindTarget() {
		return ((T (*)(BulletMoverRoundabout*))(Il2CppBase() + 0x2388994))(this);
	}

};

}
