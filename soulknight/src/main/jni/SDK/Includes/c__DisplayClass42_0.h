#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass420
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass42_0"));
	}

	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T ApplyLocalizationParamsb__0(Il2CppString* p) {
		return ((T (*)(cDisplayClass420*, Il2CppString*))(Il2CppBase() + 0x45E1640))(this, p);
	}

};

}
