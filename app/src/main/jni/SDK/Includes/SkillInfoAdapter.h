#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkillInfoAdapter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillInfoAdapter"));
	}

	template <typename T = int32_t> T& price() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
