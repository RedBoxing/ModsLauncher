#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGNotReadySimpleHide
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGNotReadySimpleHide"));
	}


	template <typename T = void> T OnShow() {
		return ((T (*)(RGNotReadySimpleHide*))(Il2CppBase() + 0x1B7BAD8))(this);
	}
	template <typename T = void> T OnHide() {
		return ((T (*)(RGNotReadySimpleHide*))(Il2CppBase() + 0x1B7BB58))(this);
	}

};

}
