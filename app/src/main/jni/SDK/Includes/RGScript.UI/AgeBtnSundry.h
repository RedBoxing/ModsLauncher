#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI {

class AgeBtnSundry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI", "AgeBtnSundry"));
	}


	template <typename T = void> static T InitAgeBtn(uintptr_t AgeBtn) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44E8EF0))(0, AgeBtn);
	}
	template <typename T = void> static T ClickAgeBtn() {
		return ((T (*)(void *))(Il2CppBase() + 0x44E9080))(0);
	}

};

}
