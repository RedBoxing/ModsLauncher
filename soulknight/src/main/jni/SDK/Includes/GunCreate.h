#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunCreate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunCreate"));
	}

	template <typename T = float> T& cd() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& activeSprite() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& inactiveSprite() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& setParent() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& createDistance() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = bool> T& setBulletInfo() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = bool> T& createInGunPoint() {
		return *(T*)((uintptr_t)this + 0x1B9);
	}
	template <typename T = uintptr_t> T& effect() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = float> T& effectDuration() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& _weaponStateListener() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunCreate*))(Il2CppBase() + 0x248F504))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunCreate*))(Il2CppBase() + 0x248F5A8))(this);
	}
	template <typename T = void> T ShowEffect() {
		return ((T (*)(GunCreate*))(Il2CppBase() + 0x248FD30))(this);
	}
	template <typename T = void> T HideEffect() {
		return ((T (*)(GunCreate*))(Il2CppBase() + 0x248FED0))(this);
	}
	template <typename T = void> T OnCreate(uintptr_t go) {
		return ((T (*)(GunCreate*, uintptr_t))(Il2CppBase() + 0x248FF48))(this, go);
	}
	template <typename T = void> T TurnActivate() {
		return ((T (*)(GunCreate*))(Il2CppBase() + 0x2490080))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunCreate*))(Il2CppBase() + 0x24901BC))(this);
	}

};

}
