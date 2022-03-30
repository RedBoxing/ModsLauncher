#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TradPlus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TradPlus"));
	}

	template <typename T = Il2CppString*> static T& _sdkName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T get_SdkName() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E489AC))(0);
	}

};

}
