#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass90
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass9_0"));
	}

	template <typename T = Il2CppString*> T& msg() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T wb__0() {
		return ((T (*)(cDisplayClass90*))(Il2CppBase() + 0x460F7FC))(this);
	}

};

}
