#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NotReadyHide
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotReadyHide"));
	}


	template <typename T = void> T OnShow() {
		return ((T (*)(NotReadyHide*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnHide() {
		return ((T (*)(NotReadyHide*))(Il2CppBase() + 0x0))(this);
	}

};

}
