#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FunnelWeaponContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FunnelWeaponContainer"));
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
	template <typename T = bool> T& weaponChanged() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& parent_point() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppVector3> T& target_point() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppVector3> T& offset() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = bool> T& this_turn() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& attackable() {
		return *(T*)((uintptr_t)this + 0x131);
	}
	template <typename T = bool> T& find_parent() {
		return *(T*)((uintptr_t)this + 0x132);
	}
	template <typename T = void*> T& isOwnerActive() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = float> T& atkRange() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& effect() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& scout_time() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = float> T& atk_cd() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& sourceObject() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& c13_ctrl() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = float> T& followTimer() {
		return *(T*)((uintptr_t)this + 0x168);
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

	template <typename T = bool> T IsAwake() {
		return ((T (*)(FunnelWeaponContainer*))(Il2CppBase() + 0x4425C80))(this);
	}
	template <typename T = bool> T get_has_target() {
		return ((T (*)(FunnelWeaponContainer*))(Il2CppBase() + 0x4425CE0))(this);
	}
	template <typename T = void> T set_has_target(bool value) {
		return ((T (*)(FunnelWeaponContainer*, bool))(Il2CppBase() + 0x4425D90))(this, value);
	}
	template <typename T = float> T get_minDistance() {
		return ((T (*)(FunnelWeaponContainer*))(Il2CppBase() + 0x4425C18))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t sourceObject) {
		return ((T (*)(FunnelWeaponContainer*, uintptr_t))(Il2CppBase() + 0x4425E00))(this, sourceObject);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(FunnelWeaponContainer*))(Il2CppBase() + 0x4425EBC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(FunnelWeaponContainer*))(Il2CppBase() + 0x44253DC))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(FunnelWeaponContainer*))(Il2CppBase() + 0x4425F1C))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(FunnelWeaponContainer*))(Il2CppBase() + 0x4426BDC))(this);
	}
	template <typename T = void> T CalculateTargetPoint(int32_t tryCount, float offsetRange) {
		return ((T (*)(FunnelWeaponContainer*, int32_t, float))(Il2CppBase() + 0x4427228))(this, tryCount, offsetRange);
	}
	template <typename T = void> T EnableAttack() {
		return ((T (*)(FunnelWeaponContainer*))(Il2CppBase() + 0x44274F4))(this);
	}
	template <typename T = void> T StopRunning() {
		return ((T (*)(FunnelWeaponContainer*))(Il2CppBase() + 0x4427558))(this);
	}
	template <typename T = void> T StartRunning(bool showEffect) {
		return ((T (*)(FunnelWeaponContainer*, bool))(Il2CppBase() + 0x4427828))(this, showEffect);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(FunnelWeaponContainer*))(Il2CppBase() + 0x44266F0))(this);
	}
	template <typename T = uintptr_t> T FindTarget() {
		return ((T (*)(FunnelWeaponContainer*))(Il2CppBase() + 0x4427B68))(this);
	}
	template <typename T = void> T GetToTarget() {
		return ((T (*)(FunnelWeaponContainer*))(Il2CppBase() + 0x4427080))(this);
	}
	template <typename T = void> T set_weapon(uintptr_t value) {
		return ((T (*)(FunnelWeaponContainer*, uintptr_t))(Il2CppBase() + 0x4428024))(this, value);
	}
	template <typename T = uintptr_t> T get_weapon() {
		return ((T (*)(FunnelWeaponContainer*))(Il2CppBase() + 0x442530C))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(FunnelWeaponContainer*))(Il2CppBase() + 0x4427ED4))(this);
	}
	template <typename T = void> T OnWeaponSet(uintptr_t weapon, bool isSet) {
		return ((T (*)(FunnelWeaponContainer*, uintptr_t, bool))(Il2CppBase() + 0x442802C))(this, weapon, isSet);
	}
	template <typename T = uintptr_t> T DropWeapon() {
		return ((T (*)(FunnelWeaponContainer*))(Il2CppBase() + 0x4428150))(this);
	}
	template <typename T = void> T SetWeapon(uintptr_t weapon) {
		return ((T (*)(FunnelWeaponContainer*, uintptr_t))(Il2CppBase() + 0x442590C))(this, weapon);
	}
	template <typename T = void> T BackHome(uintptr_t home, uintptr_t onBackHome) {
		return ((T (*)(FunnelWeaponContainer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x44282E0))(this, home, onBackHome);
	}
	template <typename T = uintptr_t> T BackingHome(uintptr_t onBackHome) {
		return ((T (*)(FunnelWeaponContainer*, uintptr_t))(Il2CppBase() + 0x4428374))(this, onBackHome);
	}
	template <typename T = void> T ChangeAtk(float value, uintptr_t changeType) {
		return ((T (*)(FunnelWeaponContainer*, float, uintptr_t))(Il2CppBase() + 0x4428480))(this, value, changeType);
	}
	template <typename T = bool> T iFixBaseProxy_get_has_target() {
		return ((T (*)(FunnelWeaponContainer*))(Il2CppBase() + 0x44285A0))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_has_target(bool P0) {
		return ((T (*)(FunnelWeaponContainer*, bool))(Il2CppBase() + 0x44285A8))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_FindTarget() {
		return ((T (*)(FunnelWeaponContainer*))(Il2CppBase() + 0x44285B4))(this);
	}

};

}
