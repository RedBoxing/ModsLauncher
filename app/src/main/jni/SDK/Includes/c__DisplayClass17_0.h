#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass170
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass17_0"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& actionElementMapId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T RedrawUIb__0() {
		return ((T (*)(cDisplayClass170*))(Il2CppBase() + 0x2682E58))(this);
	}

};

}
