#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SharpLineDrawer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SharpLineDrawer"));
	}

	template <typename T = float> T& density() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& positions() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& lineRenderer() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T DrawLine() {
		return ((T (*)(SharpLineDrawer*))(Il2CppBase() + 0x182D088))(this);
	}

};

}
