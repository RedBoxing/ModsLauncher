#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MapManagerMultiRoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapManagerMultiRoom"));
	}


	template <typename T = uintptr_t> static T get_Inst() {
		return ((T (*)(void *))(Il2CppBase() + 0x41E3FC4))(0);
	}

};

}
