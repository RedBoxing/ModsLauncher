#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass380
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass38_0"));
	}

	template <typename T = uintptr_t> T& tempData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T SetPermissionb__0(bool _) {
		return ((T (*)(cDisplayClass380*, bool))(Il2CppBase() + 0x45C0C34))(this, _);
	}

};

}
