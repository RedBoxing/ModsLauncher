#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectStingRace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectStingRace"));
	}

	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t collision) {
		return ((T (*)(ObjectStingRace*, uintptr_t))(Il2CppBase() + 0x1DC6168))(this, collision);
	}

};

}
