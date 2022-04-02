#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletCurse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletCurse"));
	}

	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& can_hit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& is_end() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& damage_radius() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& hit_player() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& hit_enemy() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = int32_t> T& duration() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& hit_invert() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_list() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BulletCurse*))(Il2CppBase() + 0x45ACBBC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BulletCurse*))(Il2CppBase() + 0x45ACDC4))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletCurse*))(Il2CppBase() + 0x45AD0A4))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BulletCurse*, uintptr_t))(Il2CppBase() + 0x45ACEBC))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BulletCurse*))(Il2CppBase() + 0x45AD268))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BulletCurse*))(Il2CppBase() + 0x45AD2C8))(this);
	}
	template <typename T = void> T TurnCanHit() {
		return ((T (*)(BulletCurse*))(Il2CppBase() + 0x45AD100))(this);
	}
	template <typename T = void> T GasEnd() {
		return ((T (*)(BulletCurse*))(Il2CppBase() + 0x45ADB5C))(this);
	}
	template <typename T = void> T DestroySelf(float totalTime) {
		return ((T (*)(BulletCurse*, float))(Il2CppBase() + 0x45AD1A0))(this, totalTime);
	}
	template <typename T = uintptr_t> T Destroying(float totalTime) {
		return ((T (*)(BulletCurse*, float))(Il2CppBase() + 0x45ADCC0))(this, totalTime);
	}
	template <typename T = uintptr_t> T AddBuff(uintptr_t target) {
		return ((T (*)(BulletCurse*, uintptr_t))(Il2CppBase() + 0x45AD854))(this, target);
	}

};

}
