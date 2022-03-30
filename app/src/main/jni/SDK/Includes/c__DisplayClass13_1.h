#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass131
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass13_1"));
	}

	template <typename T = uintptr_t> T& invitation() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& 9__2() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T AcceptFromInboxb__2(uintptr_t acceptResponse) {
		return ((T (*)(cDisplayClass131*, uintptr_t))(Il2CppBase() + 0x2829514))(this, acceptResponse);
	}

};

}
