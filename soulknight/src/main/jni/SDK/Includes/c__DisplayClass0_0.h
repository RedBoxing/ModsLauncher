#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass00
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass0_0"));
	}

	template <typename T = uintptr_t> T& Toast() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& context() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& text() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T showAsToastb__0() {
		return ((T (*)(cDisplayClass00*))(Il2CppBase() + 0x454FF1C))(this);
	}

};

}
