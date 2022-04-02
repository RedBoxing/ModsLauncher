#pragma once
#include "Il2Cpp/Il2Cpp.h"

class VampireSkill0SkinData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VampireSkill_0_SkinData"));
	}

	template <typename T = uintptr_t> T& batPrefab() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& batParticle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& localPos() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
