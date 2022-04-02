#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass40
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass4_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& coll() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& 9__0() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T FetchListb__0(uintptr_t rsp) {
		return ((T (*)(cDisplayClass40*, uintptr_t))(Il2CppBase() + 0x2AFBE58))(this, rsp);
	}

};

}
