#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowEggTips
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowEggTips"));
	}


	template <typename T = void> T OnClick_Close() {
		return ((T (*)(UIWindowEggTips*))(Il2CppBase() + 0x4595EFC))(this);
	}
	template <typename T = void> T OnClick_Confirm() {
		return ((T (*)(UIWindowEggTips*))(Il2CppBase() + 0x4595FB8))(this);
	}

};

}
