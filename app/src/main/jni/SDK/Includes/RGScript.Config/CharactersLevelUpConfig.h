#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Config {

class CharactersLevelUpConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Config", "CharactersLevelUpConfig"));
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& Data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
