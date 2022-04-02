#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C10ThornMaterial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C10ThornMaterial"));
	}

	template <typename T = uintptr_t> T& nomalMaterial() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& master2Material() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Init(bool isMaster2) {
		return ((T (*)(C10ThornMaterial*, bool))(Il2CppBase() + 0x1F023E8))(this, isMaster2);
	}

};

}
