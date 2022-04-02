#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass1930
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass193_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& eater() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppVector3> T EatenByb__0() {
		return ((T (*)(cDisplayClass1930*))(Il2CppBase() + 0x2232C5C))(this);
	}
	template <typename T = void> T EatenByb__1(Il2CppVector3 value) {
		return ((T (*)(cDisplayClass1930*, Il2CppVector3))(Il2CppBase() + 0x2232D70))(this, value);
	}
	template <typename T = void> T EatenByb__2() {
		return ((T (*)(cDisplayClass1930*))(Il2CppBase() + 0x2232EA0))(this);
	}

};

}
