#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass640
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass64_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& skin_material() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CreateSkinItemb__0(bool isToggle) {
		return ((T (*)(cDisplayClass640*, bool))(Il2CppBase() + 0x4578B88))(this, isToggle);
	}

};

}
