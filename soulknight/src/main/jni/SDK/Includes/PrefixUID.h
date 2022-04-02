#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PrefixUID
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefixUID"));
	}


	template <typename T = Il2CppString*> static T get_uid() {
		return ((T (*)(void *))(Il2CppBase() + 0x439E53C))(0);
	}

};

}
