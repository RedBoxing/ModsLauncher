#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoundaboutEffector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoundaboutEffector"));
	}

	template <typename T = int32_t> T& rotateAngle() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _angle() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& fixedUpDirection() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T Update() {
		return ((T (*)(RoundaboutEffector*))(Il2CppBase() + 0x18068C4))(this);
	}
	template <typename T = void> T TriggerWith(uintptr_t other, bool isCritic, bool canThrough) {
		return ((T (*)(RoundaboutEffector*, uintptr_t, bool, bool))(Il2CppBase() + 0x1806B04))(this, other, isCritic, canThrough);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RoundaboutEffector*, uintptr_t))(Il2CppBase() + 0x1806BB4))(this, other);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWith(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(RoundaboutEffector*, uintptr_t, bool, bool))(Il2CppBase() + 0x1806DF0))(this, P0, P1, P2);
	}

};

}
