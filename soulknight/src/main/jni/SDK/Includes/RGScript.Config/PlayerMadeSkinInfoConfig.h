#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Config {

class PlayerMadeSkinInfoConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Config", "PlayerMadeSkinInfoConfig"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& Data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
