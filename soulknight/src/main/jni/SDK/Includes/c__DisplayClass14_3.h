#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass143
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass14_3"));
	}

	template <typename T = uintptr_t> T& helper() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals3() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T AcceptInvitationb__1() {
		return ((T (*)(cDisplayClass143*))(Il2CppBase() + 0x282A2F8))(this);
	}

};

}
