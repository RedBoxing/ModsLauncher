#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BundleDescItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BundleDescItemView"));
	}

	template <typename T = uintptr_t> T& itemObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& nameText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& countText() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
