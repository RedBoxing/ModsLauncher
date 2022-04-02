#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletGasBuff3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletGasBuff3"));
	}

	template <typename T = uintptr_t> T& buff1Prefab() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& infect_radius() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppVector3> T& checkCenter() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_list() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& ps() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& body() {
		return *(T*)((uintptr_t)this + 0xF0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BulletGasBuff3*))(Il2CppBase() + 0x237904C))(this);
	}
	template <typename T = uintptr_t> T CountDown() {
		return ((T (*)(BulletGasBuff3*))(Il2CppBase() + 0x2379270))(this);
	}
	template <typename T = void> T CheckAndInfectEnemies() {
		return ((T (*)(BulletGasBuff3*))(Il2CppBase() + 0x2379350))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BulletGasBuff3*))(Il2CppBase() + 0x23798B0))(this);
	}

};

}
