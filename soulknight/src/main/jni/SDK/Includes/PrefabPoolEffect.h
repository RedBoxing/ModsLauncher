#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PrefabPoolEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabPoolEffect"));
	}

	template <typename T = float> T& lifeTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isAlive() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(PrefabPoolEffect*))(Il2CppBase() + 0x43A501C))(this);
	}
	template <typename T = uintptr_t> T Restore() {
		return ((T (*)(PrefabPoolEffect*))(Il2CppBase() + 0x43A5094))(this);
	}

};

}
