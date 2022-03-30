#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsReflectionUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsReflectionUtility"));
	}


	template <typename T = uintptr_t> static T GetInterface(uintptr_t type, uintptr_t interfaceType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D06968))(0, type, interfaceType);
	}

};

}
