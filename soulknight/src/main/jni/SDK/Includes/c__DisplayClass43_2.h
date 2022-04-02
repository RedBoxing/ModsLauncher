#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass432
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass43_2"));
	}

	template <typename T = uintptr_t> T& temp_obj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& bulletGenPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& CS$8__locals2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CreateTentacleb__1() {
		return ((T (*)(cDisplayClass432*))(Il2CppBase() + 0x436CA68))(this);
	}
	template <typename T = void> T CreateTentacleb__2() {
		return ((T (*)(cDisplayClass432*))(Il2CppBase() + 0x436CAD4))(this);
	}

};

}
