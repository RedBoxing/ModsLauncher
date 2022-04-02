#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass430
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass43_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& gravity() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T SetGravityForPopupsb__0() {
		return ((T (*)(cDisplayClass430*))(Il2CppBase() + 0x3591328))(this);
	}

};

}
