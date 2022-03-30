#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIBtnStart
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIBtnStart"));
	}


	template <typename T = void> T Update() {
		return ((T (*)(UIBtnStart*))(Il2CppBase() + 0x41A0234))(this);
	}
	template <typename T = void> T OnBtnClick() {
		return ((T (*)(UIBtnStart*))(Il2CppBase() + 0x41A02B0))(this);
	}

};

}
