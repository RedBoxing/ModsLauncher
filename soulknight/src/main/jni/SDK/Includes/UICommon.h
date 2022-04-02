#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UICommon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UICommon"));
	}


	template <typename T = float> static T WindowCloseDelay() {
		return ((T (*)(void *))(Il2CppBase() + 0x432F678))(0);
	}

};

}
