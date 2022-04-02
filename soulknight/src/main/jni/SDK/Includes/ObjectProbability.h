#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectProbability
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectProbability"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& probability() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(ObjectProbability*))(Il2CppBase() + 0x1DBCC78))(this);
	}
	template <typename T = uintptr_t> T GetGameObject(uintptr_t random) {
		return ((T (*)(ObjectProbability*, uintptr_t))(Il2CppBase() + 0x1DBCCD8))(this, random);
	}

};

}
