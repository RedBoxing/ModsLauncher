#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IMaterialProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaterialProvider"));
	}


	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T GetMaterials() {
		return ((T (*)(IMaterialProvider*))(Il2CppBase() + 0x0))(this);
	}

};

}
