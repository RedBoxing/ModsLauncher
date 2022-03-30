#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactBattleRoomChestReward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactBattleRoomChestReward"));
	}

	template <typename T = int32_t> T& coin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& energy() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& energyAmount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& weaponPartProbability() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& addRarityFunctionLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnOpen(uintptr_t itemParent, uintptr_t rgController, int32_t chestLevel) {
		return ((T (*)(ArtifactBattleRoomChestReward*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1C97A14))(this, itemParent, rgController, chestLevel);
	}

};

}
