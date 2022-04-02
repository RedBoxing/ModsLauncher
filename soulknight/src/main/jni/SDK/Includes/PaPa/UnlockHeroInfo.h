#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa {

class UnlockHeroInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa", "UnlockHeroInfo"));
	}

	template <typename T = int32_t> T& hero_index() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppList<int32_t>*> T& hero_skin() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
