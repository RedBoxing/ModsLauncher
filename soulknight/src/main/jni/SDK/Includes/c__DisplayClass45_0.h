#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass450
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass45_0"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T LoadUsersb__0(Il2CppArray<uintptr_t>* nativeUsers) {
		return ((T (*)(cDisplayClass450*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3591540))(this, nativeUsers);
	}

};

}
