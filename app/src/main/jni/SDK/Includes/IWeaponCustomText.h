#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IWeaponCustomText
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWeaponCustomText"));
	}


	template <typename T = Il2CppString*> T get_damage() {
		return ((T (*)(IWeaponCustomText*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_consume() {
		return ((T (*)(IWeaponCustomText*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_critical() {
		return ((T (*)(IWeaponCustomText*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_deviation() {
		return ((T (*)(IWeaponCustomText*))(Il2CppBase() + 0x0))(this);
	}

};

}
