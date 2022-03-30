#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Config.Manager {

class CharactersLevelUpConfigManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Config.Manager", "CharactersLevelUpConfigManager"));
	}


	template <typename T = Il2CppString*> static T GetMaxLevelReward(int32_t charIdx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x34B24E4))(0, charIdx);
	}
	template <typename T = Il2CppString*> static T GetMaxLevelRewardTips(int32_t charIdx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x34B2628))(0, charIdx);
	}
	template <typename T = int32_t> static T GetMaxLevelByCharIdx(int32_t charIdx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x34B276C))(0, charIdx);
	}
	template <typename T = int32_t> static T GetLevelUpGem(int32_t charIdx, int32_t lv) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x34B2918))(0, charIdx, lv);
	}
	template <typename T = uintptr_t> static T GetCharBuff(int32_t charIdx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x34B2B7C))(0, charIdx);
	}
	template <typename T = bool> static T IsHeroChar(int32_t charIdx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x34B2C60))(0, charIdx);
	}
	template <typename T = int32_t> static T GetRelationHeroChar(int32_t charIdx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x34B2DAC))(0, charIdx);
	}

};

}
