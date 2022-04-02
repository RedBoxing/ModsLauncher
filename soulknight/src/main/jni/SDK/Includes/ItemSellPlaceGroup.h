#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemSellPlaceGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemSellPlaceGroup"));
	}

	template <typename T = uintptr_t> T& specialRanData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& sellPlaces() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sellman() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = int32_t> T get_sellPlacesCount() {
		return ((T (*)(ItemSellPlaceGroup*))(Il2CppBase() + 0x1CE5920))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ItemSellPlaceGroup*))(Il2CppBase() + 0x1CE59C0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ItemSellPlaceGroup*))(Il2CppBase() + 0x1CE5C6C))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(ItemSellPlaceGroup*, int32_t))(Il2CppBase() + 0x1CE5CC8))(this, seed);
	}
	template <typename T = bool> T IsRepeated(uintptr_t sellPlace) {
		return ((T (*)(ItemSellPlaceGroup*, uintptr_t))(Il2CppBase() + 0x1CDEB20))(this, sellPlace);
	}
	template <typename T = void> T RefreshCommodity() {
		return ((T (*)(ItemSellPlaceGroup*))(Il2CppBase() + 0x1CE5D4C))(this);
	}
	template <typename T = void> T RefreshCommodityWithDistribute(uintptr_t ranData) {
		return ((T (*)(ItemSellPlaceGroup*, uintptr_t))(Il2CppBase() + 0x1CE5F8C))(this, ranData);
	}
	template <typename T = void> T RefreshAllWithSellman() {
		return ((T (*)(ItemSellPlaceGroup*))(Il2CppBase() + 0x1CE61D8))(this);
	}
	template <typename T = void> T RefreshWithSellman(uintptr_t sellPlace) {
		return ((T (*)(ItemSellPlaceGroup*, uintptr_t))(Il2CppBase() + 0x1CE6568))(this, sellPlace);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(ItemSellPlaceGroup*, int32_t))(Il2CppBase() + 0x1CE6660))(this, P0);
	}

};

}
