#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGDontDestroy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGDontDestroy"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(RGDontDestroy*))(Il2CppBase() + 0x2219D50))(this);
	}

};

}
