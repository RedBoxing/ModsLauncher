#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass320
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass32_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& account() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Regb__0(uintptr_t regErrCode) {
		return ((T (*)(cDisplayClass320*, uintptr_t))(Il2CppBase() + 0x431EBCC))(this, regErrCode);
	}
	template <typename T = void> T Regb__1(uintptr_t exp) {
		return ((T (*)(cDisplayClass320*, uintptr_t))(Il2CppBase() + 0x431EFD0))(this, exp);
	}

};

}
