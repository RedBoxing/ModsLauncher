#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Weapon {

class ThunderBow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Weapon", "ThunderBow"));
	}


	template <typename T = void> T OnBulletHit(uintptr_t attacker, uintptr_t target, bool isCritic) {
		return ((T (*)(ThunderBow*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x43D3428))(this, attacker, target, isCritic);
	}

};

}
