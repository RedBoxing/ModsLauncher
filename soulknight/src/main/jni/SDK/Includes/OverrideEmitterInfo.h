#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OverrideEmitterInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OverrideEmitterInfo"));
	}

	template <typename T = uintptr_t> T& bulletConfig() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& emitter() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& overrideEmitDistance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& emitDistance() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& emitRadius() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
