#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass103
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass10_3"));
	}

	template <typename T = uintptr_t> T& helper() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals3() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CreateWithInvitationScreenb__1() {
		return ((T (*)(cDisplayClass103*))(Il2CppBase() + 0x2828B40))(this);
	}

};

}
