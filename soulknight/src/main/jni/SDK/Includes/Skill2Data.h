#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Skill2Data
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Skill2Data"));
	}

	template <typename T = uintptr_t> T& sound() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& bulletConfig() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& emitTimes() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& emitDistance() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& interval() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
