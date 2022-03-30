#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SBColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SBColor"));
	}

	template <typename T = unsigned char> T& r() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = unsigned char> T& g() {
		return *(T*)((uintptr_t)this + 0x1);
	}
	template <typename T = unsigned char> T& b() {
		return *(T*)((uintptr_t)this + 0x2);
	}


};

}
