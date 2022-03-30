#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AbstractWIBulletModifyProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AbstractWIBulletModifyProcessor"));
	}


	template <typename T = Il2CppString*> T get_WeaponType() {
		return ((T (*)(AbstractWIBulletModifyProcessor*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T MakeEffect(uintptr_t bulletModify, uintptr_t weapon) {
		return ((T (*)(AbstractWIBulletModifyProcessor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, bulletModify, weapon);
	}
	template <typename T = void> T RemoveEffect(uintptr_t bulletModify, uintptr_t weapon) {
		return ((T (*)(AbstractWIBulletModifyProcessor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, bulletModify, weapon);
	}

};

}
