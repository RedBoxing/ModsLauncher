#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DeviceIdArg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeviceIdArg"));
	}

	template <typename T = Il2CppString*> T& deviceId() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
