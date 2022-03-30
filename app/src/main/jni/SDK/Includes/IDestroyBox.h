#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IDestroyBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDestroyBox"));
	}


	template <typename T = void> T DestroyBox() {
		return ((T (*)(IDestroyBox*))(Il2CppBase() + 0x0))(this);
	}

};

}
