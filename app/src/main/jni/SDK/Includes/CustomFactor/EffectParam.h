#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace CustomFactor {

class EffectParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CustomFactor", "EffectParam"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Value() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
