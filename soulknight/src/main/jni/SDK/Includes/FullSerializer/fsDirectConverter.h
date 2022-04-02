#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsDirectConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsDirectConverter"));
	}


	template <typename T = uintptr_t> T get_ModelType() {
		return ((T (*)(fsDirectConverter*))(Il2CppBase() + 0x0))(this);
	}

};

}
