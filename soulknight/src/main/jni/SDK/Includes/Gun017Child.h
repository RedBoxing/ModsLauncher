#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun017Child
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun017Child"));
	}

	template <typename T = bool> T& awake() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& this_turn() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& laser() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = uintptr_t> T& onAttack() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& rigibody2d() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& gun_point() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& parent_point() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& target_point() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& sprite_renderer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& effect() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& atk_clip() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& atk() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& repel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& bullet_speed() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& critical() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& deviation() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& scout_time() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& find_parent() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& can_through() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& rg_random() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& followTimer() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_list() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& sourceObject() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& camp() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T add_onAttack(uintptr_t value) {
		return ((T (*)(Gun017Child*, uintptr_t))(Il2CppBase() + 0x2573C24))(this, value);
	}
	template <typename T = void> T remove_onAttack(uintptr_t value) {
		return ((T (*)(Gun017Child*, uintptr_t))(Il2CppBase() + 0x2573D10))(this, value);
	}
	template <typename T = bool> T get_has_target() {
		return ((T (*)(Gun017Child*))(Il2CppBase() + 0x2573DFC))(this);
	}
	template <typename T = bool> T IsAwake() {
		return ((T (*)(Gun017Child*))(Il2CppBase() + 0x2573020))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Gun017Child*))(Il2CppBase() + 0x2573EAC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Gun017Child*))(Il2CppBase() + 0x2573FE8))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(Gun017Child*))(Il2CppBase() + 0x257414C))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(Gun017Child*))(Il2CppBase() + 0x2574754))(this);
	}
	template <typename T = void> T StopRunning() {
		return ((T (*)(Gun017Child*))(Il2CppBase() + 0x2573374))(this);
	}
	template <typename T = void> T StartRunning() {
		return ((T (*)(Gun017Child*))(Il2CppBase() + 0x25737AC))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(Gun017Child*))(Il2CppBase() + 0x2574484))(this);
	}
	template <typename T = void> T FindTarget() {
		return ((T (*)(Gun017Child*))(Il2CppBase() + 0x2574A78))(this);
	}
	template <typename T = void> T GetToTarget() {
		return ((T (*)(Gun017Child*))(Il2CppBase() + 0x25749A0))(this);
	}
	template <typename T = void> T Attack1() {
		return ((T (*)(Gun017Child*))(Il2CppBase() + 0x2574DF4))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(Gun017Child*))(Il2CppBase() + 0x2574F5C))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t sourceObject) {
		return ((T (*)(Gun017Child*, uintptr_t))(Il2CppBase() + 0x2573AA8))(this, sourceObject);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(Gun017Child*))(Il2CppBase() + 0x257514C))(this);
	}
	template <typename T = uintptr_t> T GetBulletInfo() {
		return ((T (*)(Gun017Child*))(Il2CppBase() + 0x25751AC))(this);
	}
	template <typename T = uintptr_t> T GetDamageInfo() {
		return ((T (*)(Gun017Child*))(Il2CppBase() + 0x2575344))(this);
	}

};

}
