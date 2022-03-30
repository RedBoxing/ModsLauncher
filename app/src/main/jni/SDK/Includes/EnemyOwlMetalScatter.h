#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyOwlMetalScatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyOwlMetalScatter"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& scatters() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& force() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& height() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T Play(uintptr_t obj) {
		return ((T (*)(EnemyOwlMetalScatter*, uintptr_t))(Il2CppBase() + 0x1FEE564))(this, obj);
	}

};

}
