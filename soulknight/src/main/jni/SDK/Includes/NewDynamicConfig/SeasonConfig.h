#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace NewDynamicConfig {

class SeasonConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "NewDynamicConfig", "SeasonConfig"));
	}

	template <typename T = uintptr_t> T& Season() {
		return *(T*)((uintptr_t)this + 0x40);
	}


};

}
