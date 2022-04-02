#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class ILocalizationParamsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "ILocalizationParamsManager"));
	}


	template <typename T = Il2CppString*> T GetParameterValue(Il2CppString* Param) {
		return ((T (*)(ILocalizationParamsManager*, Il2CppString*))(Il2CppBase() + 0x0))(this, Param);
	}

};

}
