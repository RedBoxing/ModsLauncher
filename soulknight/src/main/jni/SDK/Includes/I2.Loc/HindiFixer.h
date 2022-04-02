#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class HindiFixer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "HindiFixer"));
	}


	template <typename T = Il2CppString*> static T Fix(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x421E864))(0, text);
	}

};

}
