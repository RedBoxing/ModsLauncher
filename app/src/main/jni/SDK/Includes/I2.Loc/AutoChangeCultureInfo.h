#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class AutoChangeCultureInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "AutoChangeCultureInfo"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(AutoChangeCultureInfo*))(Il2CppBase() + 0x420FEA0))(this);
	}

};

}
