#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class SetLanguageDropdown
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "SetLanguageDropdown"));
	}


	template <typename T = void> T OnEnable() {
		return ((T (*)(SetLanguageDropdown*))(Il2CppBase() + 0x45F16A4))(this);
	}
	template <typename T = void> T OnValueChanged(int32_t index) {
		return ((T (*)(SetLanguageDropdown*, int32_t))(Il2CppBase() + 0x45F19B0))(this, index);
	}

};

}
