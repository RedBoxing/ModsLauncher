#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass480
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass48_0"));
	}

	template <typename T = uintptr_t> T& trans() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Callback() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T HideAnimb__0() {
		return ((T (*)(cDisplayClass480*))(Il2CppBase() + 0x45BCF68))(this);
	}

};

}
