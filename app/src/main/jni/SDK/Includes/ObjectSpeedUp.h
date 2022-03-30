#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectSpeedUp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectSpeedUp"));
	}

	template <typename T = float> T& speed_rate() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& speed_down() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_list() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectSpeedUp*))(Il2CppBase() + 0x1DC454C))(this);
	}
	template <typename T = void> T GetTrigger() {
		return ((T (*)(ObjectSpeedUp*))(Il2CppBase() + 0x1DC45AC))(this);
	}

};

}
