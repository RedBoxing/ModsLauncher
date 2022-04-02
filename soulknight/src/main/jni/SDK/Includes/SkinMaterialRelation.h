#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkinMaterialRelation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkinMaterialRelation"));
	}

	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& skin_idx() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& material_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
