#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsOption
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsOption"));
	}


	template <typename T = void*> static T Just(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, value);
	}

};

}
