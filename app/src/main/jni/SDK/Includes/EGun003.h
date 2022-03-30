#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EGun003
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EGun003"));
	}

	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& size() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& time_interval() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EGun003*))(Il2CppBase() + 0x22A3C28))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EGun003*))(Il2CppBase() + 0x22A3D84))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(EGun003*))(Il2CppBase() + 0x22A3E6C))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(EGun003*))(Il2CppBase() + 0x22A3FAC))(this);
	}

};

}
