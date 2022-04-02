#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass551
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass55_1"));
	}

	template <typename T = uintptr_t> T& content() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> T& EmailStrings() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T ShowEmailItemb__0(bool tog) {
		return ((T (*)(cDisplayClass551*, bool))(Il2CppBase() + 0x44AA584))(this, tog);
	}

};

}
