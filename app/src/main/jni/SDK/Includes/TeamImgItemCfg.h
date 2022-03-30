#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TeamImgItemCfg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TeamImgItemCfg"));
	}

	template <typename T = uintptr_t> T& normalColor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& bg() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& kickBg() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
