#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsPropertyAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsPropertyAttribute"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Converter() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
