#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponInterface"));
	}


	template <typename T = void> T Attack() {
		return ((T (*)(WeaponInterface*))(Il2CppBase() + 0x0))(this);
	}

};

}
