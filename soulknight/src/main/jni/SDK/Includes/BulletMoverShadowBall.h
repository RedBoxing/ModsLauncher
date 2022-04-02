#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletMoverShadowBall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletMoverShadowBall"));
	}

	template <typename T = bool> T& isLight() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = Il2CppString*> T& buffName() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& isSurround() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = uintptr_t> T Setup(float detectInterval, bool isLight, Il2CppString* buffName) {
		return ((T (*)(BulletMoverShadowBall*, float, bool, Il2CppString*))(Il2CppBase() + 0x2388998))(this, detectInterval, isLight, buffName);
	}
	template <typename T = void> T MoveFixedUpdate() {
		return ((T (*)(BulletMoverShadowBall*))(Il2CppBase() + 0x2388A40))(this);
	}
	template <typename T = void> T FindHealableTarget() {
		return ((T (*)(BulletMoverShadowBall*))(Il2CppBase() + 0x2388B08))(this);
	}
	template <typename T = void> T FindTarget() {
		return ((T (*)(BulletMoverShadowBall*))(Il2CppBase() + 0x238938C))(this);
	}
	template <typename T = void> T CheckTarget() {
		return ((T (*)(BulletMoverShadowBall*))(Il2CppBase() + 0x23894F8))(this);
	}
	template <typename T = void> T iFixBaseProxy_MoveFixedUpdate() {
		return ((T (*)(BulletMoverShadowBall*))(Il2CppBase() + 0x238957C))(this);
	}
	template <typename T = void> T iFixBaseProxy_FindTarget() {
		return ((T (*)(BulletMoverShadowBall*))(Il2CppBase() + 0x2389580))(this);
	}

};

}
