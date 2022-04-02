#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass20
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass2_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& index() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T PlayerIdAtIndexb__0(Il2CppArray<uintptr_t>* out_string, uintptr_t size) {
		return ((T (*)(cDisplayClass20*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AFCCDC))(this, out_string, size);
	}

};

}
