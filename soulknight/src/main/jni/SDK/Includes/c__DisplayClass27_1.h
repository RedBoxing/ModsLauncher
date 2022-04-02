#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass271
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass27_1"));
	}

	template <typename T = Il2CppString*> T& id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T ShowQuquestDialogb__1() {
		return ((T (*)(cDisplayClass271*))(Il2CppBase() + 0x1E6F94C))(this);
	}
	template <typename T = void> T ShowQuquestDialogb__2() {
		return ((T (*)(cDisplayClass271*))(Il2CppBase() + 0x1E6FBA0))(this);
	}

};

}
