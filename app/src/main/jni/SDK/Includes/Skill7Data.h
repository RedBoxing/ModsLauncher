#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Skill7Data
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Skill7Data"));
	}

	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& interval() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& skillDuration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& repeatSpeedUp() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& prefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
