#pragma once
#include "Il2Cpp/Il2Cpp.h"

class InterruptableCharacterSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InterruptableCharacterSkill"));
	}

	template <typename T = int32_t> T& skillIndex() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& characterScriptType() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
