#pragma once
#include "Il2Cpp/Il2Cpp.h"

class JoystickInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JoystickInfo"));
	}

	template <typename T = uintptr_t> T& instanceGuid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& hardwareIdentifier() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
