#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MapResloader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapResloader"));
	}


	template <typename T = void> T StartLoadingRes() {
		return ((T (*)(MapResloader*))(Il2CppBase() + 0x0))(this);
	}

};

}
