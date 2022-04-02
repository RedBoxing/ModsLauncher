#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletExplodeArrow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletExplodeArrow"));
	}

	template <typename T = uintptr_t> T& explode_gameObject() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& explodeSize() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& animSpeed() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& OnExplode() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x120);
	}

	template <typename T = void> T add_OnExplode(uintptr_t value) {
		return ((T (*)(BulletExplodeArrow*, uintptr_t))(Il2CppBase() + 0x45AE854))(this, value);
	}
	template <typename T = void> T remove_OnExplode(uintptr_t value) {
		return ((T (*)(BulletExplodeArrow*, uintptr_t))(Il2CppBase() + 0x45AE944))(this, value);
	}
	template <typename T = uintptr_t> T get_animator() {
		return ((T (*)(BulletExplodeArrow*))(Il2CppBase() + 0x45AEA34))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletExplodeArrow*))(Il2CppBase() + 0x45AEB0C))(this);
	}
	template <typename T = void> T Explode() {
		return ((T (*)(BulletExplodeArrow*))(Il2CppBase() + 0x45AEBF4))(this);
	}
	template <typename T = void> T TouchBody() {
		return ((T (*)(BulletExplodeArrow*))(Il2CppBase() + 0x45AEFBC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(BulletExplodeArrow*))(Il2CppBase() + 0x45AF074))(this);
	}

};

}
