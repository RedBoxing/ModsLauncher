#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Skill5Data
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Skill5Data"));
	}

	template <typename T = uintptr_t> T& sound() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& sampleInterval() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& angleSpeed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& emitDistance() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
