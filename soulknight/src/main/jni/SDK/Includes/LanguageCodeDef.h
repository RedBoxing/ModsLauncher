#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LanguageCodeDef
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LanguageCodeDef"));
	}

	template <typename T = Il2CppString*> T& Code() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& GoogleCode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& HasJoinedWords() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& PluralRule() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
