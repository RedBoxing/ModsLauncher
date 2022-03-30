#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PrefabPoolAnimEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabPoolAnimEffect"));
	}

	template <typename T = Il2CppString*> T& playTriggerName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& lifeTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isAlive() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& animatorCache() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(PrefabPoolAnimEffect*))(Il2CppBase() + 0x43A4C48))(this);
	}
	template <typename T = uintptr_t> T Restore() {
		return ((T (*)(PrefabPoolAnimEffect*))(Il2CppBase() + 0x43A4D20))(this);
	}

};

}
