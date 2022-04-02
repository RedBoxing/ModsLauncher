#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunUFO
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunUFO"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& bullets() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& master_laser_add() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = int32_t> T& _total() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(GunUFO*))(Il2CppBase() + 0x1A215D0))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunUFO*))(Il2CppBase() + 0x1A216B8))(this);
	}
	template <typename T = void> T CreateBullet(int32_t i) {
		return ((T (*)(GunUFO*, int32_t))(Il2CppBase() + 0x1A217E0))(this, i);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunUFO*))(Il2CppBase() + 0x1A21978))(this);
	}
	template <typename T = uintptr_t> T GetBulletInfo(int32_t i) {
		return ((T (*)(GunUFO*, int32_t))(Il2CppBase() + 0x1A21C30))(this, i);
	}
	template <typename T = uintptr_t> T GetDamageInfo(int32_t i) {
		return ((T (*)(GunUFO*, int32_t))(Il2CppBase() + 0x1A21DA4))(this, i);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunUFO*))(Il2CppBase() + 0x1A21FC0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunUFO*))(Il2CppBase() + 0x1A21FC8))(this);
	}

};

}
