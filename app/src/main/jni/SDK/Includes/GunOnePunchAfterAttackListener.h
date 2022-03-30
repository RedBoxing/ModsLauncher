#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunOnePunchAfterAttackListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunOnePunchAfterAttackListener"));
	}


	template <typename T = uintptr_t> T get_onePunch() {
		return ((T (*)(GunOnePunchAfterAttackListener*))(Il2CppBase() + 0x216ADCC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunOnePunchAfterAttackListener*))(Il2CppBase() + 0x216AE5C))(this);
	}
	template <typename T = void> T RemoveBulletSpliter() {
		return ((T (*)(GunOnePunchAfterAttackListener*))(Il2CppBase() + 0x216AF38))(this);
	}

};

}
