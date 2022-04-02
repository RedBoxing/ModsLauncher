#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PartInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PartInfo"));
	}

	template <typename T = uintptr_t> T& part() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& components() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
