#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PrefabPoolObjectTrailCleaner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabPoolObjectTrailCleaner"));
	}

	template <typename T = bool> T& hasInited() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _trail() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_Trail() {
		return ((T (*)(PrefabPoolObjectTrailCleaner*))(Il2CppBase() + 0x43A5318))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(PrefabPoolObjectTrailCleaner*))(Il2CppBase() + 0x43A53C8))(this);
	}

};

}
