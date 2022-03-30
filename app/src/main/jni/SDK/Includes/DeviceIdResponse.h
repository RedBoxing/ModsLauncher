#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DeviceIdResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeviceIdResponse"));
	}

	template <typename T = bool> T& ok() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
