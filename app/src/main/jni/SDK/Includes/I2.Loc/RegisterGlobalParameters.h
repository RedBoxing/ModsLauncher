#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class RegisterGlobalParameters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "RegisterGlobalParameters"));
	}


	template <typename T = void> T OnEnable() {
		return ((T (*)(RegisterGlobalParameters*))(Il2CppBase() + 0x45F092C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RegisterGlobalParameters*))(Il2CppBase() + 0x45F0A68))(this);
	}
	template <typename T = Il2CppString*> T GetParameterValue(Il2CppString* ParamName) {
		return ((T (*)(RegisterGlobalParameters*, Il2CppString*))(Il2CppBase() + 0x45F0B34))(this, ParamName);
	}

};

}
