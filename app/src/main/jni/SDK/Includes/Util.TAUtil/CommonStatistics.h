#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Util.TAUtil {

class CommonStatistics
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Util.TAUtil", "CommonStatistics"));
	}


	template <typename T = void> static T SetFishChip() {
		return ((T (*)(void *))(Il2CppBase() + 0x440359C))(0);
	}
	template <typename T = void> static T SetAllHero() {
		return ((T (*)(void *))(Il2CppBase() + 0x440370C))(0);
	}
	template <typename T = void> static T SetAllSkin() {
		return ((T (*)(void *))(Il2CppBase() + 0x44038C0))(0);
	}
	template <typename T = void> static T SetAllSkill() {
		return ((T (*)(void *))(Il2CppBase() + 0x4403B0C))(0);
	}
	template <typename T = void> static T SetAllAchievements() {
		return ((T (*)(void *))(Il2CppBase() + 0x4403D58))(0);
	}
	template <typename T = void> static T SetPlayerMaterials() {
		return ((T (*)(void *))(Il2CppBase() + 0x4404048))(0);
	}
	template <typename T = void> static T SetMaterials() {
		return ((T (*)(void *))(Il2CppBase() + 0x44042E8))(0);
	}
	template <typename T = void> static T SetSeed() {
		return ((T (*)(void *))(Il2CppBase() + 0x44046C0))(0);
	}
	template <typename T = void> static T SetTokenTicket() {
		return ((T (*)(void *))(Il2CppBase() + 0x4404A98))(0);
	}
	template <typename T = void> static T SetBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x4404E70))(0);
	}
	template <typename T = void> static T SetRoomObjUnlock() {
		return ((T (*)(void *))(Il2CppBase() + 0x4405248))(0);
	}
	template <typename T = void> static T TrackSelectHero(uintptr_t hero) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44053DC))(0, hero);
	}
	template <typename T = void> static T TrackSelectSkin(uintptr_t hero, int32_t skin_idx) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x44055F0))(0, hero, skin_idx);
	}
	template <typename T = void> static T TrackSelectSkill(uintptr_t hero, int32_t skill_idx) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4405848))(0, hero, skill_idx);
	}

};

}
