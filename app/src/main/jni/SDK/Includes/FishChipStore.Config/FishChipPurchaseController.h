#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FishChipStore.Config {

class FishChipPurchaseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FishChipStore.Config", "FishChipPurchaseController"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& fishChipModels() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_cumulativeFishCount() {
		return ((T (*)(FishChipPurchaseController*))(Il2CppBase() + 0x450019C))(this);
	}
	template <typename T = void> T set_cumulativeFishCount(int32_t value) {
		return ((T (*)(FishChipPurchaseController*, int32_t))(Il2CppBase() + 0x4500254))(this, value);
	}
	template <typename T = int32_t> T get_fishCount() {
		return ((T (*)(FishChipPurchaseController*))(Il2CppBase() + 0x4500320))(this);
	}
	template <typename T = void> T set_fishCount(int32_t value) {
		return ((T (*)(FishChipPurchaseController*, int32_t))(Il2CppBase() + 0x45003DC))(this, value);
	}
	template <typename T = void> T PurchaseFishChip(int32_t modelIndex, void* onComplete) {
		return ((T (*)(FishChipPurchaseController*, int32_t, void*))(Il2CppBase() + 0x45004B0))(this, modelIndex, onComplete);
	}
	template <typename T = Il2CppString*> T GetFishChipPriceDesc(int32_t modelIndex) {
		return ((T (*)(FishChipPurchaseController*, int32_t))(Il2CppBase() + 0x450059C))(this, modelIndex);
	}

};

}
