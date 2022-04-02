#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace CustomFactor {

class CustomFactorConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CustomFactor", "CustomFactorConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& numberSprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& customFactors() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
