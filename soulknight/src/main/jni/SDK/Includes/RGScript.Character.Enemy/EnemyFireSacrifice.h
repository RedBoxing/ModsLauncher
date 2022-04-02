#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Character.Enemy {

class EnemyFireSacrifice
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Character.Enemy", "EnemyFireSacrifice"));
	}


	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyFireSacrifice*))(Il2CppBase() + 0x1C2E6E4))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyFireSacrifice*))(Il2CppBase() + 0x1C2E75C))(this);
	}
	template <typename T = void> T ShootEnd() {
		return ((T (*)(EnemyFireSacrifice*))(Il2CppBase() + 0x1C2E878))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyFireSacrifice*))(Il2CppBase() + 0x1C2E8F0))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyFireSacrifice*))(Il2CppBase() + 0x1C2E8F8))(this);
	}

};

}
