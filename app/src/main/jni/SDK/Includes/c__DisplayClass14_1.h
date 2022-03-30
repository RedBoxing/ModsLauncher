#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass141
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass14_1"));
	}

	template <typename T = uintptr_t> T& newRoom() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T AcceptInvitationb__0(uintptr_t response) {
		return ((T (*)(cDisplayClass141*, uintptr_t))(Il2CppBase() + 0x2829950))(this, response);
	}

};

}
