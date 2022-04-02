#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace HiddenLevelBuff {

class FactorModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HiddenLevelBuff", "FactorModel"));
	}

	template <typename T = uintptr_t> T& factor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& nameKey() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& descKey() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
