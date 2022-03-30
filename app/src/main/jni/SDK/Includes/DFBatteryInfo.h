#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DFBatteryInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DFBatteryInfo"));
	}

	template <typename T = Il2CppString*> T& batteryName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& weaponName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& weaponLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& position() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& hp() {
		return *(T*)((uintptr_t)this + 0x2C);
	}


};

}
