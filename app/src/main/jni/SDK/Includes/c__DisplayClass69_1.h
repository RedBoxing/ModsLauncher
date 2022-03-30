#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass691
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass69_1"));
	}

	template <typename T = int32_t> T& restoreVal() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T RestoreArmorb__1() {
		return ((T (*)(cDisplayClass691*))(Il2CppBase() + 0x1BF0EE4))(this);
	}

};

}
