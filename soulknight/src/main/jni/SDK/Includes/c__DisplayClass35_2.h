#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass352
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass35_2"));
	}

	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& itemOriPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& trembleDuration() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& executed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& success() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = uintptr_t> T& CS$8__locals2() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnChoosePartb__7() {
		return ((T (*)(cDisplayClass352*))(Il2CppBase() + 0x4197634))(this);
	}
	template <typename T = void> T OnChoosePartb__8() {
		return ((T (*)(cDisplayClass352*))(Il2CppBase() + 0x419856C))(this);
	}

};

}
