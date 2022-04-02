#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpecializedParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpecializedParam"));
	}

	template <typename T = float> T& damageFactor() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& sizeFactor() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& setEmitDistance() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& emitDistance() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& emitRadius() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
