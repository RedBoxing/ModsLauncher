#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EmPetExt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmPetExt"));
	}


	template <typename T = bool> static T isHidePet(uintptr_t pet) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22ADCB4))(0, pet);
	}

};

}
