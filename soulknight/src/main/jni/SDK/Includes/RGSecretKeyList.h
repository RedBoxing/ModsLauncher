#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGSecretKeyList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSecretKeyList"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& secretkey_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T EnterSecretKey(Il2CppString* key, uintptr_t* oldResult) {
		return ((T (*)(RGSecretKeyList*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x43D3858))(this, key, oldResult);
	}

};

}
