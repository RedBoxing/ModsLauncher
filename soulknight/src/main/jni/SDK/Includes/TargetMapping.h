#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TargetMapping
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetMapping"));
	}

	template <typename T = uintptr_t> T& controllerMap() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& actionElementMapId() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
