#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChallengeInfoRow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChallengeInfoRow"));
	}

	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& battleFactor() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& difficulty() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& weight() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
