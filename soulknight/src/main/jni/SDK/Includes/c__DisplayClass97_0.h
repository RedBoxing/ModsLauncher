#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass970
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass97_0"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T GetComponentLevelsb__1(uintptr_t o) {
		return ((T (*)(cDisplayClass970*, uintptr_t))(Il2CppBase() + 0x1CA7B24))(this, o);
	}
	template <typename T = bool> T GetComponentLevelsb__0(uintptr_t o) {
		return ((T (*)(cDisplayClass970*, uintptr_t))(Il2CppBase() + 0x1CA7B78))(this, o);
	}

};

}
