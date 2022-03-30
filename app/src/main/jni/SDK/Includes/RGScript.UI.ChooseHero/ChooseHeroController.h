#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.ChooseHero {

class ChooseHeroController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.ChooseHero", "ChooseHeroController"));
	}


	template <typename T = void> T MockShow(uintptr_t heroID) {
		return ((T (*)(ChooseHeroController*, uintptr_t))(Il2CppBase() + 0x44E91A4))(this, heroID);
	}

};

}
