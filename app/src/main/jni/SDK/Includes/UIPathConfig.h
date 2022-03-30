#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIPathConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIPathConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& uiComponentModels() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T AssignReference(uintptr_t o, uintptr_t item) {
		return ((T (*)(UIPathConfig*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42348CC))(this, o, item);
	}

};

}
