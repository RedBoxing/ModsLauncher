#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FunnelWeaponCurveContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FunnelWeaponCurveContainer"));
	}

	template <typename T = uintptr_t> T& rigibody2d() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& weaponContainer() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& parent_point() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppVector3> T& target_point() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& fire_point() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& this_turn() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = bool> T& find_parent() {
		return *(T*)((uintptr_t)this + 0x129);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& flySpeed() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& atkRange() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& effect() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& scout_time() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = float> T& atk_cd() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = bool> T& can_attack() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& sourceObject() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& c13_ctrl() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& targetWay() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = int32_t> T& wayIndex() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = float> T& followTimer() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_list() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = float> T& focusTime() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& home() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = int32_t> T& maxPointCount() {
		return *(T*)((uintptr_t)this + 0x190);
	}

	template <typename T = bool> T IsAwake() {
		return ((T (*)(FunnelWeaponCurveContainer*))(Il2CppBase() + 0x442888C))(this);
	}
	template <typename T = bool> T get_has_target() {
		return ((T (*)(FunnelWeaponCurveContainer*))(Il2CppBase() + 0x44288EC))(this);
	}
	template <typename T = void> T set_has_target(bool value) {
		return ((T (*)(FunnelWeaponCurveContainer*, bool))(Il2CppBase() + 0x442899C))(this, value);
	}
	template <typename T = uintptr_t> T get_childWeapon() {
		return ((T (*)(FunnelWeaponCurveContainer*))(Il2CppBase() + 0x4428A0C))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t sourceObject) {
		return ((T (*)(FunnelWeaponCurveContainer*, uintptr_t))(Il2CppBase() + 0x4428A9C))(this, sourceObject);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(FunnelWeaponCurveContainer*))(Il2CppBase() + 0x4428B58))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(FunnelWeaponCurveContainer*))(Il2CppBase() + 0x4428BB8))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(FunnelWeaponCurveContainer*))(Il2CppBase() + 0x4428F74))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(FunnelWeaponCurveContainer*))(Il2CppBase() + 0x442A2C0))(this);
	}
	template <typename T = void> T EnableAttack() {
		return ((T (*)(FunnelWeaponCurveContainer*))(Il2CppBase() + 0x442A990))(this);
	}
	template <typename T = void> T StopRunning() {
		return ((T (*)(FunnelWeaponCurveContainer*))(Il2CppBase() + 0x442A9F4))(this);
	}
	template <typename T = void> T StartRunning(bool showEffect) {
		return ((T (*)(FunnelWeaponCurveContainer*, bool))(Il2CppBase() + 0x442AC90))(this, showEffect);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(FunnelWeaponCurveContainer*))(Il2CppBase() + 0x4429E74))(this);
	}
	template <typename T = void> T FindTarget() {
		return ((T (*)(FunnelWeaponCurveContainer*))(Il2CppBase() + 0x442A5D0))(this);
	}
	template <typename T = void> T GetToTarget() {
		return ((T (*)(FunnelWeaponCurveContainer*))(Il2CppBase() + 0x442A500))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(FunnelWeaponCurveContainer*))(Il2CppBase() + 0x442B3D0))(this);
	}
	template <typename T = void> T SetWeapon(uintptr_t weapon) {
		return ((T (*)(FunnelWeaponCurveContainer*, uintptr_t))(Il2CppBase() + 0x4428D8C))(this, weapon);
	}
	template <typename T = void> T BackHome(uintptr_t home, uintptr_t onBackHome) {
		return ((T (*)(FunnelWeaponCurveContainer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x442B520))(this, home, onBackHome);
	}
	template <typename T = uintptr_t> T BackingHome(uintptr_t onBackHome) {
		return ((T (*)(FunnelWeaponCurveContainer*, uintptr_t))(Il2CppBase() + 0x442B5BC))(this, onBackHome);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetTargetBezier(uintptr_t target) {
		return ((T (*)(FunnelWeaponCurveContainer*, uintptr_t))(Il2CppBase() + 0x442AF78))(this, target);
	}
	template <typename T = Il2CppVector2> T CalculateCubicBezierPoint2(float t, Il2CppVector2 p0, Il2CppVector2 p1, Il2CppVector2 p2, Il2CppVector2 p3) {
		return ((T (*)(FunnelWeaponCurveContainer*, float, Il2CppVector2, Il2CppVector2, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x442B6C8))(this, t, p0, p1, p2, p3);
	}
	template <typename T = bool> T iFixBaseProxy_get_has_target() {
		return ((T (*)(FunnelWeaponCurveContainer*))(Il2CppBase() + 0x442B95C))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_has_target(bool P0) {
		return ((T (*)(FunnelWeaponCurveContainer*, bool))(Il2CppBase() + 0x442B964))(this, P0);
	}

};

}
