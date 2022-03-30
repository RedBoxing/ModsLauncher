#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlantInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlantInfo"));
	}

	template <typename T = Il2CppString*> T& plantName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& watered() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& fertilized() {
		return *(T*)((uintptr_t)this + 0x1D);
	}


};

}
