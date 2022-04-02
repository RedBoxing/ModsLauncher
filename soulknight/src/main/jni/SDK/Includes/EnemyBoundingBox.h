#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyBoundingBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyBoundingBox"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& boundingBoxes() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(EnemyBoundingBox*))(Il2CppBase() + 0x1FE5E48))(this);
	}

};

}
