#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util.NewConfigs.Configs {

class AdConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util.NewConfigs.Configs", "AdConfig"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& Data() {
		return *(T*)((uintptr_t)this + 0x40);
	}


};

}
