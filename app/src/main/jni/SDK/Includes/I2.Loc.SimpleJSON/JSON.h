#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc.SimpleJSON {

class JSON
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc.SimpleJSON", "JSON"));
	}


	template <typename T = uintptr_t> static T Parse(Il2CppString* aJSON) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45F1B10))(0, aJSON);
	}

};

}
