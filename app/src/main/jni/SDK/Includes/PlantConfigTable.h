#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlantConfigTable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlantConfigTable"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& plants() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _config() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_config() {
		return ((T (*)(void *))(Il2CppBase() + 0x4396428))(0);
	}
	template <typename T = uintptr_t> T GetPlant(Il2CppString* plantName) {
		return ((T (*)(PlantConfigTable*, Il2CppString*))(Il2CppBase() + 0x439651C))(this, plantName);
	}
	template <typename T = uintptr_t> T GetPlantWithLevel(int32_t level) {
		return ((T (*)(PlantConfigTable*, int32_t))(Il2CppBase() + 0x43966A4))(this, level);
	}

};

}
