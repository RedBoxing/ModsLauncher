#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DisableOnAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DisableOnAndroid"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(DisableOnAndroid*))(Il2CppBase() + 0x42ED9D8))(this);
	}

};

}
