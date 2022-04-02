#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EmptyChestListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmptyChestListener"));
	}

	template <typename T = uintptr_t> T& sfx() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& effectPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& effectTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& effectPositionOffset() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnEmptyChestOpen() {
		return ((T (*)(EmptyChestListener*))(Il2CppBase() + 0x22B03E0))(this);
	}

};

}
