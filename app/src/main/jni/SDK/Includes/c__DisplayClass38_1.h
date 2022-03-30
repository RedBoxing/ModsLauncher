#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass381
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass38_1"));
	}

	template <typename T = void*> T& currentComponentNames() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T DisplayRefreshComponentListPanelb__3(uintptr_t other) {
		return ((T (*)(cDisplayClass381*, uintptr_t))(Il2CppBase() + 0x4199D14))(this, other);
	}

};

}
