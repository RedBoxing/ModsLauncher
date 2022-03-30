#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PassCertificateUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PassCertificateUtil"));
	}

	template <typename T = Il2CppDictionary<int32_t, int32_t>*> static T& magicStoneToCertBG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T CreateDataFromHistory(uintptr_t historyInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4571424))(0, historyInfo);
	}
	template <typename T = uintptr_t> static T CreateDataFromBattleData(uintptr_t battleData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45720DC))(0, battleData);
	}
	template <typename T = uintptr_t> static T CreateNormalCertDataFromHistory(uintptr_t historyInfo, uintptr_t output) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4571D64))(0, historyInfo, output);
	}
	template <typename T = uintptr_t> static T CreateNormalCertDataFromBattleData(uintptr_t battleData, uintptr_t output) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x45724B0))(0, battleData, output);
	}
	template <typename T = uintptr_t> static T CreateNormalCertDataFromCellar(int32_t idx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4573360))(0, idx);
	}
	template <typename T = void> static T UpdateCellarNormalCertificate(uintptr_t certData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4573980))(0, certData);
	}
	template <typename T = uintptr_t> static T CreateBossRushCertDataFromHistory(uintptr_t historyInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4571F74))(0, historyInfo);
	}
	template <typename T = uintptr_t> static T CreateBossRushCertDataFromBattleData(uintptr_t battleData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4572A54))(0, battleData);
	}
	template <typename T = uintptr_t> static T CreateBossRushCertDataFromCellar() {
		return ((T (*)(void *))(Il2CppBase() + 0x4573B74))(0);
	}
	template <typename T = void> static T UpdateCellarBossRushCertificate(uintptr_t certData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4574208))(0, certData);
	}
	template <typename T = uintptr_t> static T CreateSeasonArtifactCertDataFromHistory(uintptr_t historyInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x457164C))(0, historyInfo);
	}
	template <typename T = uintptr_t> static T CreateSeasonArtifactCertDataFromBattleData(uintptr_t battleData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4572244))(0, battleData);
	}
	template <typename T = Il2CppString*> static T GetCostTime(float game_time) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4573070))(0, game_time);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetIntListFromHistory(uintptr_t historyInfo, Il2CppString* key, int32_t defaultValue) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4572B40))(0, historyInfo, key, defaultValue);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetStringListFromHistory(uintptr_t historyInfo, Il2CppString* key) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4572D70))(0, historyInfo, key);
	}
	template <typename T = int32_t> static T GetIntFromHistroy(uintptr_t historyInfo, Il2CppString* key) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4572F80))(0, historyInfo, key);
	}
	template <typename T = int32_t> static T GetCertificateBgByMagicStoneIdx(int32_t idx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x45743E0))(0, idx);
	}
	template <typename T = Il2CppString*> T GetCharName(int32_t char_idx, int32_t skin_idx) {
		return ((T (*)(PassCertificateUtil*, int32_t, int32_t))(Il2CppBase() + 0x45744C4))(this, char_idx, skin_idx);
	}

};

}
