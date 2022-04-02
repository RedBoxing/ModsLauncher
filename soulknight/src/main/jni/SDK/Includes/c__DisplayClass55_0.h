#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass550
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass55_0"));
	}

	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& skinIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T SetRoleSkinIconsb__0() {
		return ((T (*)(cDisplayClass550*))(Il2CppBase() + 0x45BCFD4))(this);
	}

};

}
