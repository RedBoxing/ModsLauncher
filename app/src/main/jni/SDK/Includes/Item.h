#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Item
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Item"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& festivals() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
