#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass1820
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass182_0"));
	}

	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& addDamage() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T OnEnemyDamageProcessb__0(int32_t current, void* callback) {
		return ((T (*)(cDisplayClass1820*, int32_t, void*))(Il2CppBase() + 0x2232BD8))(this, current, callback);
	}

};

}
