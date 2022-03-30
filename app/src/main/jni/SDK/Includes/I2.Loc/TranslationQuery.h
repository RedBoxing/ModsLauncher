#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class TranslationQuery
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "TranslationQuery"));
	}

	template <typename T = Il2CppString*> T& OrigText() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& LanguageCode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TargetLanguagesCode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Results() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Tags() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
