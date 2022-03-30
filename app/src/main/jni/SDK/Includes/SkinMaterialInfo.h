#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkinMaterialInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkinMaterialInfo"));
	}

	template <typename T = Il2CppString*> T& material() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
