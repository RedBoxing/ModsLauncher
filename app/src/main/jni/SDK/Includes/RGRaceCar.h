#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGRaceCar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGRaceCar"));
	}

	template <typename T = float> T& force() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& angleForce() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& maxForce() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& consume() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& activate() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& the_bullet() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& direct() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& gun_point() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& frictionOffset() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGRaceCar*))(Il2CppBase() + 0x1C6FE00))(this);
	}
	template <typename T = void> T SetController(uintptr_t raceController) {
		return ((T (*)(RGRaceCar*, uintptr_t))(Il2CppBase() + 0x1C6FEFC))(this, raceController);
	}
	template <typename T = void> T SetAttack(bool value1) {
		return ((T (*)(RGRaceCar*, bool))(Il2CppBase() + 0x1C6FFD8))(this, value1);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(RGRaceCar*))(Il2CppBase() + 0x1C70280))(this);
	}
	template <typename T = void> T StartAttack() {
		return ((T (*)(RGRaceCar*))(Il2CppBase() + 0x1C7033C))(this);
	}
	template <typename T = void> T EndAttack() {
		return ((T (*)(RGRaceCar*))(Il2CppBase() + 0x1C70164))(this);
	}
	template <typename T = uintptr_t> T Dashing() {
		return ((T (*)(RGRaceCar*))(Il2CppBase() + 0x1C704FC))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(RGRaceCar*))(Il2CppBase() + 0x1C705DC))(this);
	}
	template <typename T = void> T ResetFiction() {
		return ((T (*)(RGRaceCar*))(Il2CppBase() + 0x1C7076C))(this);
	}
	template <typename T = void> T StartEngine() {
		return ((T (*)(RGRaceCar*))(Il2CppBase() + 0x1C6FF74))(this);
	}
	template <typename T = void> T StopEngine() {
		return ((T (*)(RGRaceCar*))(Il2CppBase() + 0x1C70810))(this);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(RGRaceCar*))(Il2CppBase() + 0x1C70890))(this);
	}

};

}
