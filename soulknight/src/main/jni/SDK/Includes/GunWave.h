#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunWave
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunWave"));
	}

	template <typename T = bool> T& has_trail() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = bool> T& isDule() {
		return *(T*)((uintptr_t)this + 0x19D);
	}
	template <typename T = float> T& angleSpeed() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& deltaAngle() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = float> T& _angle() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunWave*))(Il2CppBase() + 0x1A22A70))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunWave*))(Il2CppBase() + 0x1A22AD0))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunWave*))(Il2CppBase() + 0x1A22C2C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunWave*))(Il2CppBase() + 0x1A22F60))(this);
	}
	template <typename T = void> T CalculateAngle() {
		return ((T (*)(GunWave*))(Il2CppBase() + 0x1A22FC0))(this);
	}
	template <typename T = void> T CreateBullet(float angle) {
		return ((T (*)(GunWave*, float))(Il2CppBase() + 0x1A22D9C))(this, angle);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunWave*))(Il2CppBase() + 0x1A23098))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunWave*))(Il2CppBase() + 0x1A230A0))(this);
	}

};

}
