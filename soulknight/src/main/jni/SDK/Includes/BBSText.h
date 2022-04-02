#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BBSText
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BBSText"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(BBSText*))(Il2CppBase() + 0x4188008))(this);
	}

};

}
