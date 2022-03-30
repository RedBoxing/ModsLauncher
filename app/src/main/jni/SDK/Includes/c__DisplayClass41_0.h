#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass410
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass41_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& account() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T ClickVerifySMSCodeb__0(bool result) {
		return ((T (*)(cDisplayClass410*, bool))(Il2CppBase() + 0x43E7FE4))(this, result);
	}

};

}
