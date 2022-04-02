#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FishChipStore.Config {

class DonateRewardController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FishChipStore.Config", "DonateRewardController"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& configModels() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& rewardCompleteModel() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& skinPrefixKey() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& specialTicketLocalizationKeys() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& skinCharacterNameLocalizationKeys() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> static T& _donateRewardController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T GetNextUnlockReward(int32_t progressIndex) {
		return ((T (*)(DonateRewardController*, int32_t))(Il2CppBase() + 0x447AE48))(this, progressIndex);
	}
	template <typename T = bool> T HasGetReward(uintptr_t configModel) {
		return ((T (*)(DonateRewardController*, uintptr_t))(Il2CppBase() + 0x447AF00))(this, configModel);
	}
	template <typename T = bool> T HasGetSpecialTicketReward(uintptr_t configModel) {
		return ((T (*)(DonateRewardController*, uintptr_t))(Il2CppBase() + 0x447B2E8))(this, configModel);
	}
	template <typename T = bool> T HasGetCharacterSkinReward(uintptr_t configModel) {
		return ((T (*)(DonateRewardController*, uintptr_t))(Il2CppBase() + 0x447B17C))(this, configModel);
	}
	template <typename T = bool> T HasGetPetSkinReward(uintptr_t configModel) {
		return ((T (*)(DonateRewardController*, uintptr_t))(Il2CppBase() + 0x447B044))(this, configModel);
	}
	template <typename T = void> T ProcessReward(uintptr_t configModel) {
		return ((T (*)(DonateRewardController*, uintptr_t))(Il2CppBase() + 0x447B3DC))(this, configModel);
	}
	template <typename T = Il2CppString*> T GetDescriptionText(uintptr_t configModel) {
		return ((T (*)(DonateRewardController*, uintptr_t))(Il2CppBase() + 0x447B894))(this, configModel);
	}
	template <typename T = void> T ProcessSpecialTicketReward(uintptr_t configModel) {
		return ((T (*)(DonateRewardController*, uintptr_t))(Il2CppBase() + 0x447B7A8))(this, configModel);
	}
	template <typename T = void> static T ProcessCharacterSkinReward(uintptr_t configModel) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x447B64C))(0, configModel);
	}
	template <typename T = void> static T ProcessPetSkinReward(uintptr_t configModel) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x447B524))(0, configModel);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(DonateRewardController*))(Il2CppBase() + 0x447BA7C))(this);
	}
	template <typename T = void> static T GetAllReward(int32_t cumulativeFishChip) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x447BB10))(0, cumulativeFishChip);
	}

};

}
