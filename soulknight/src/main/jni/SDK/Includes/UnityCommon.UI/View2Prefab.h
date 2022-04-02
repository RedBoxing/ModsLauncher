#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCommon.UI {

class View2Prefab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCommon.UI", "View2Prefab"));
	}

	template <typename T = Il2CppString*> T& ViewName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Prefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
