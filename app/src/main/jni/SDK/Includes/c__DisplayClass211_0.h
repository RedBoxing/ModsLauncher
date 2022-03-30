#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass2110
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass211_0"));
	}

	template <typename T = uintptr_t> T& rigidBody() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T DropItemb__0() {
		return ((T (*)(cDisplayClass2110*))(Il2CppBase() + 0x2232F2C))(this);
	}

};

}
