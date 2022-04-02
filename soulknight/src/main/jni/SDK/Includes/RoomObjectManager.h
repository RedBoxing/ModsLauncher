#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomObjectManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomObjectManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& plantPots() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& forgeContainer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& newDay() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RoomObjectManager*))(Il2CppBase() + 0x17FCDF0))(this);
	}
	template <typename T = void> T InitObjects() {
		return ((T (*)(RoomObjectManager*))(Il2CppBase() + 0x17FD700))(this);
	}
	template <typename T = void> T InitNewDay() {
		return ((T (*)(RoomObjectManager*))(Il2CppBase() + 0x17FD7DC))(this);
	}
	template <typename T = void> T InitUnlockObjects() {
		return ((T (*)(RoomObjectManager*))(Il2CppBase() + 0x17FE340))(this);
	}
	template <typename T = void> T OldInitUnlockObjects() {
		return ((T (*)(RoomObjectManager*))(Il2CppBase() + 0x1801BFC))(this);
	}
	template <typename T = void> T NewInitUnlockObjects() {
		return ((T (*)(RoomObjectManager*))(Il2CppBase() + 0x1800834))(this);
	}
	template <typename T = void> T UnlockBossRush() {
		return ((T (*)(RoomObjectManager*))(Il2CppBase() + 0x18019D8))(this);
	}
	template <typename T = void> T ShowFirstEnterArrow() {
		return ((T (*)(RoomObjectManager*))(Il2CppBase() + 0x1801AC4))(this);
	}
	template <typename T = void> T InitPlants() {
		return ((T (*)(RoomObjectManager*))(Il2CppBase() + 0x17FE4CC))(this);
	}
	template <typename T = void> T SavePlants() {
		return ((T (*)(RoomObjectManager*))(Il2CppBase() + 0x1801C58))(this);
	}
	template <typename T = void> T InitForgeWeapons() {
		return ((T (*)(RoomObjectManager*))(Il2CppBase() + 0x17FE914))(this);
	}
	template <typename T = void> T SaveForgeWeapons() {
		return ((T (*)(RoomObjectManager*))(Il2CppBase() + 0x1801DF8))(this);
	}
	template <typename T = void> T CheckAchiement() {
		return ((T (*)(RoomObjectManager*))(Il2CppBase() + 0x17FF0B4))(this);
	}
	template <typename T = void> static T CheckAchievementSkinReward(int32_t achievementId, uintptr_t heroType, int32_t skinIndex) {
		return ((T (*)(void *, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x1802010))(0, achievementId, heroType, skinIndex);
	}
	template <typename T = void> T ShowBattleIcon() {
		return ((T (*)(RoomObjectManager*))(Il2CppBase() + 0x17FFEC0))(this);
	}
	template <typename T = void> T NewPlayerFactor() {
		return ((T (*)(RoomObjectManager*))(Il2CppBase() + 0x1800154))(this);
	}

};

}
