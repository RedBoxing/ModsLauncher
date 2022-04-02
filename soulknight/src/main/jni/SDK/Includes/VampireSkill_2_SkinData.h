#pragma once
#include "Il2Cpp/Il2Cpp.h"

class VampireSkill2SkinData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VampireSkill_2_SkinData"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& particle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& blast() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
