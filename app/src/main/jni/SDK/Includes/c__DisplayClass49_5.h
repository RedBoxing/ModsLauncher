#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass495
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass49_5"));
	}

	template <typename T = Il2CppVector3> T& pos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& scale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& CS$8__locals5() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Attackb__5() {
		return ((T (*)(cDisplayClass495*))(Il2CppBase() + 0x201564C))(this);
	}

};

}
