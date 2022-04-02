#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass60
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass6_0"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CreateWithInvitationScreenb__0(uintptr_t status, uintptr_t match) {
		return ((T (*)(cDisplayClass60*, uintptr_t, uintptr_t))(Il2CppBase() + 0x283A600))(this, status, match);
	}

};

}
