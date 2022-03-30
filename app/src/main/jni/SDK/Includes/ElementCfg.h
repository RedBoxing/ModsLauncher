#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ElementCfg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ElementCfg"));
	}

	template <typename T = uintptr_t> T& headTailSp() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& lineRendererTexture() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& lightColor() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
