#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIBtnInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIBtnInterface"));
	}


	template <typename T = void> T BtnClick1() {
		return ((T (*)(UIBtnInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T BtnClick2() {
		return ((T (*)(UIBtnInterface*))(Il2CppBase() + 0x0))(this);
	}

};

}
