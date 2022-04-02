#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DecoratorSortingPivot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DecoratorSortingPivot"));
	}

	template <typename T = Il2CppVector3> T& pivot() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppVector3> T get_PivotWorldPosition() {
		return ((T (*)(DecoratorSortingPivot*))(Il2CppBase() + 0x42E2CF8))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(DecoratorSortingPivot*))(Il2CppBase() + 0x42E2DA0))(this);
	}

};

}
