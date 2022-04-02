#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass242
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass24_2"));
	}

	template <typename T = uintptr_t> T& bInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& pos() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& dInfo() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& tempAtk() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& scale() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& 9__5() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Attackb__5() {
		return ((T (*)(cDisplayClass242*))(Il2CppBase() + 0x2010880))(this);
	}

};

}
