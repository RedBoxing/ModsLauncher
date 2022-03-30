#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Util.TAUtil {

class BattleStatistics
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Util.TAUtil", "BattleStatistics"));
	}


	template <typename T = void> static T TrackGameEnterLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x44028B0))(0);
	}
	template <typename T = void> static T AddArtifactData(Il2CppDictionary<Il2CppString*, uintptr_t>* trackData) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x4402CE0))(0, trackData);
	}
	template <typename T = void> static T AddBossRushData(Il2CppDictionary<Il2CppString*, uintptr_t>* trackData) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x4402E6C))(0, trackData);
	}
	template <typename T = void> static T AddWeaponData(uintptr_t disDic) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4403000))(0, disDic);
	}

};

}
