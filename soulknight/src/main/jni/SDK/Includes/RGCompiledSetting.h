#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGCompiledSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGCompiledSetting"));
	}

	template <typename T = bool> static T& show_weapon_introduce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& show_QRcode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}


};

}
