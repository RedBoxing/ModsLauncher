#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HireDialogBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HireDialogBox"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(HireDialogBox*))(Il2CppBase() + 0x1A3883C))(this);
	}

};

}
