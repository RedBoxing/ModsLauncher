#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass181
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass18_1"));
	}

	template <typename T = uintptr_t> T& targetObj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& atkAimPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Emitb__1() {
		return ((T (*)(cDisplayClass181*))(Il2CppBase() + 0x44841A8))(this);
	}

};

}
