#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IllegalWordUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IllegalWordUtil"));
	}


	template <typename T = bool> static T NeedDetectIllegalWord() {
		return ((T (*)(void *))(Il2CppBase() + 0x19C4E58))(0);
	}

};

}
