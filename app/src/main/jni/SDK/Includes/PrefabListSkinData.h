#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PrefabListSkinData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabListSkinData"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& prefabList() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
