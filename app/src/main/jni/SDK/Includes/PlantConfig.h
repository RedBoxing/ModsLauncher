#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlantConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlantConfig"));
	}

	template <typename T = Il2CppString*> T& plantName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& value() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = Il2CppString*> T get_seedName() {
		return ((T (*)(PlantConfig*))(Il2CppBase() + 0x439638C))(this);
	}

};

}
