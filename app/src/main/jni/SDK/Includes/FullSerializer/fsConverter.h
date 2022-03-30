#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsConverter"));
	}


	template <typename T = bool> T CanProcess(uintptr_t type) {
		return ((T (*)(fsConverter*, uintptr_t))(Il2CppBase() + 0x0))(this, type);
	}

};

}
