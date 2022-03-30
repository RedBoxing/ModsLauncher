#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DarkKnifeExtra
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DarkKnifeExtra"));
	}

	template <typename T = uintptr_t> T& petPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& petPrefab2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& smokeEffect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& probability() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _bullet() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& summonCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DarkKnifeExtra*))(Il2CppBase() + 0x42D6BEC))(this);
	}
	template <typename T = void> T ExplodeEnemyBorn() {
		return ((T (*)(DarkKnifeExtra*))(Il2CppBase() + 0x42D6CD8))(this);
	}
	template <typename T = void> static T NpcDeadOrDestroyAlive(uintptr_t npc) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42D7134))(0, npc);
	}

};

}
