#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShowWithCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowWithCondition"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& show_condi() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ShowWithCondition*))(Il2CppBase() + 0x182EE90))(this);
	}

};

}
