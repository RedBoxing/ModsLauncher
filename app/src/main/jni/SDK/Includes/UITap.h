#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UITap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UITap"));
	}


	template <typename T = void> T BtnClick() {
		return ((T (*)(UITap*))(Il2CppBase() + 0x41C0E50))(this);
	}

};

}
