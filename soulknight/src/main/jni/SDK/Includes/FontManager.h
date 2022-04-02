#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FontManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FontManager"));
	}

	template <typename T = uintptr_t> T& number() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& pixelBold() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& iranYekanBold() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
