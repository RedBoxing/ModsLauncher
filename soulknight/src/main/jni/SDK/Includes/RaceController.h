#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RaceController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RaceController"));
	}

	template <typename T = float> T& theFriction() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = float> T& force() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}
	template <typename T = float> T& forceFriction() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = float> T& power() {
		return *(T*)((uintptr_t)this + 0x2FC);
	}
	template <typename T = float> T& angleForce() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = float> T& maxIntertial() {
		return *(T*)((uintptr_t)this + 0x304);
	}
	template <typename T = bool> T& isDashing() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = float> T& speedUp() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = bool> T& isSpeedUp() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& car() {
		return *(T*)((uintptr_t)this + 0x318);
	}

	template <typename T = float> T get_speedLimit() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44D8AD8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44D8B40))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44D8BA4))(this);
	}
	template <typename T = void> T SetUpChar() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44D8C24))(this);
	}
	template <typename T = void> T StartUp() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44D8E34))(this);
	}
	template <typename T = void> T SetUpVehicle() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44D8F1C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44D8F78))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44D8FFC))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44D929C))(this);
	}
	template <typename T = void> T RoleMove(uintptr_t m) {
		return ((T (*)(RaceController*, uintptr_t))(Il2CppBase() + 0x44D9308))(this, m);
	}
	template <typename T = void> T SetVelocity() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44D94D0))(this);
	}
	template <typename T = void> T HandleMoveInput() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44D9680))(this);
	}
	template <typename T = void> T HandleAngle(float angleForce, Il2CppVector2 dir) {
		return ((T (*)(RaceController*, float, Il2CppVector2))(Il2CppBase() + 0x44D98C4))(this, angleForce, dir);
	}
	template <typename T = void> T HandleSpeed(float maxForce, float power, Il2CppVector2 dir) {
		return ((T (*)(RaceController*, float, float, Il2CppVector2))(Il2CppBase() + 0x44D9A7C))(this, maxForce, power, dir);
	}
	template <typename T = void> T HandleFriction() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44D9C88))(this);
	}
	template <typename T = void> T AddForce(Il2CppVector2 dir, float force, float angleForce) {
		return ((T (*)(RaceController*, Il2CppVector2, float, float))(Il2CppBase() + 0x44D9DA0))(this, dir, force, angleForce);
	}
	template <typename T = void> T SlowDown(float slowdownSpeed) {
		return ((T (*)(RaceController*, float))(Il2CppBase() + 0x44D9FE8))(this, slowdownSpeed);
	}
	template <typename T = void> T LateUpdateMaxSpeed() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44D905C))(this);
	}
	template <typename T = void> T SpeedUp(float speed, float duration) {
		return ((T (*)(RaceController*, float, float))(Il2CppBase() + 0x44DA184))(this, speed, duration);
	}
	template <typename T = void> T SpeedUpEnd() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44DA36C))(this);
	}
	template <typename T = void> T SetCameraFocus() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44DA3D0))(this);
	}
	template <typename T = void> T DeadChild() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44DA42C))(this);
	}
	template <typename T = void> T DoReborn(bool uiReborn) {
		return ((T (*)(RaceController*, bool))(Il2CppBase() + 0x44DA548))(this, uiReborn);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44DA680))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44DA794))(this);
	}
	template <typename T = void> T AutoLock() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44DA7F0))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUpChar() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44DAE30))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleMove(uintptr_t P0) {
		return ((T (*)(RaceController*, uintptr_t))(Il2CppBase() + 0x44DAE38))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetVelocity() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44DAE40))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetCameraFocus() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44DAE48))(this);
	}
	template <typename T = void> T iFixBaseProxy_DeadChild() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44DAE50))(this);
	}
	template <typename T = void> T iFixBaseProxy_DoReborn(bool P0) {
		return ((T (*)(RaceController*, bool))(Il2CppBase() + 0x44DAE58))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44DAE64))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44DAE6C))(this);
	}
	template <typename T = void> T iFixBaseProxy_AutoLock() {
		return ((T (*)(RaceController*))(Il2CppBase() + 0x44DAE74))(this);
	}

};

}
