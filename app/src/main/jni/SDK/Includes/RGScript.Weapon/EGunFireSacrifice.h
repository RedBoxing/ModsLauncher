#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Weapon {

class EGunFireSacrifice
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Weapon", "EGunFireSacrifice"));
	}

	template <typename T = int32_t> T& _attackCount() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _randomAngles() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _seedOffset() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EGunFireSacrifice*))(Il2CppBase() + 0x43CF848))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(EGunFireSacrifice*))(Il2CppBase() + 0x43CF9A4))(this);
	}
	template <typename T = void> T OnAtk() {
		return ((T (*)(EGunFireSacrifice*))(Il2CppBase() + 0x43CFA60))(this);
	}

};

}
