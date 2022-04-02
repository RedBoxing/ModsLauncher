#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RandomWalkNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomWalkNode"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& neighbours() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T GetNextNode() {
		return ((T (*)(RandomWalkNode*))(Il2CppBase() + 0x44DDBC4))(this);
	}

};

}
