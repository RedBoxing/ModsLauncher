#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass260
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass26_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T DoFetchTokenb__0(uintptr_t tokenResult) {
		return ((T (*)(cDisplayClass260*, uintptr_t))(Il2CppBase() + 0x4441C64))(this, tokenResult);
	}

};

}
