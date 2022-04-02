#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Icon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Icon"));
	}

	template <typename T = uintptr_t> T& sprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& sceneIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& branchIndex() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
