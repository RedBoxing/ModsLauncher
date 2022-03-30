#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Weapon {

class IWeaponBulletCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Weapon", "IWeaponBulletCreator"));
	}


	template <typename T = void> T CreateBullet() {
		return ((T (*)(IWeaponBulletCreator*))(Il2CppBase() + 0x0))(this);
	}

};

}
