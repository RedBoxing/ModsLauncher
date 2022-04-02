#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkinSkillCfg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkinSkillCfg"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x58);
	}


};

}
