#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCommon.UI {

class PrefabAdapter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCommon.UI", "PrefabAdapter"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& view2Prefabs() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
