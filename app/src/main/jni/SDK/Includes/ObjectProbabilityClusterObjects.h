#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectProbabilityClusterObjects
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectProbabilityClusterObjects"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& clusters() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T GetGameObject(uintptr_t random) {
		return ((T (*)(ObjectProbabilityClusterObjects*, uintptr_t))(Il2CppBase() + 0x1DBCD54))(this, random);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetGameObject(uintptr_t P0) {
		return ((T (*)(ObjectProbabilityClusterObjects*, uintptr_t))(Il2CppBase() + 0x1DBCDD8))(this, P0);
	}

};

}
