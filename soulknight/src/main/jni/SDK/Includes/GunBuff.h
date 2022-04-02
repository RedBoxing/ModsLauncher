#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunBuff
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunBuff"));
	}


	template <typename T = bool> T get_addBuffDirectly() {
		return ((T (*)(GunBuff*))(Il2CppBase() + 0x25856E0))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunBuff*))(Il2CppBase() + 0x25857CC))(this);
	}

};

}
