#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ReinforcementControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReinforcementControl"));
	}

	template <typename T = uintptr_t> T& enemyMaker() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& bossAngry() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& reinforcementEnemy() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& reinforcementCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& reinforcementRefreshTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& horizontalBoat() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& verticalBoat() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<float>*> T& reinforcementGen() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& angryReinforcementAddCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& enemies() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Update(float dt) {
		return ((T (*)(ReinforcementControl*, float))(Il2CppBase() + 0x1A441E0))(this, dt);
	}

};

}
