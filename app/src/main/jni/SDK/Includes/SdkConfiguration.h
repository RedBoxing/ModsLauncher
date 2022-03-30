#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SdkConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SdkConfiguration"));
	}

	template <typename T = Il2CppString*> T& AppId() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
