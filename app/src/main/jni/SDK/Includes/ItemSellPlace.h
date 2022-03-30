#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemSellPlace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemSellPlace"));
	}

	template <typename T = float> T& priceFactor() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& consumeToken() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& tokenTextColor() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppVector3> T& offset() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ranData() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = void*> T& OnItemSell() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& group() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& commodityRoot() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& ranResult() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& commodity() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ItemSellPlace*))(Il2CppBase() + 0x1CDE8A0))(this);
	}
	template <typename T = void> T RefreshCommodity(uintptr_t rg_random) {
		return ((T (*)(ItemSellPlace*, uintptr_t))(Il2CppBase() + 0x1CDE96C))(this, rg_random);
	}
	template <typename T = void> T RefreshCommodity_1(uintptr_t ranObjData, uintptr_t rg_random) {
		return ((T (*)(ItemSellPlace*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1CDE9E8))(this, ranObjData, rg_random);
	}
	template <typename T = void> T SetCommodity(uintptr_t proto) {
		return ((T (*)(ItemSellPlace*, uintptr_t))(Il2CppBase() + 0x1CDED3C))(this, proto);
	}
	template <typename T = void> T ClearResult() {
		return ((T (*)(ItemSellPlace*))(Il2CppBase() + 0x1CDF0DC))(this);
	}
	template <typename T = Il2CppString*> T GetCommodityName(bool commodityNeeded) {
		return ((T (*)(ItemSellPlace*, bool))(Il2CppBase() + 0x1CDF13C))(this, commodityNeeded);
	}
	template <typename T = Il2CppString*> T GetCommodityNameInResult() {
		return ((T (*)(ItemSellPlace*))(Il2CppBase() + 0x1CDF230))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemSellPlace*, uintptr_t))(Il2CppBase() + 0x1CDF3B8))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ItemSellPlace*, uintptr_t))(Il2CppBase() + 0x1CDF7A4))(this, other);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemSellPlace*, uintptr_t))(Il2CppBase() + 0x1CDF92C))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemSellPlace*, uintptr_t))(Il2CppBase() + 0x1CDFA44))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemSellPlace*, uintptr_t))(Il2CppBase() + 0x1CDFDBC))(this, controller);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ItemSellPlace*))(Il2CppBase() + 0x1CDFF70))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ItemSellPlace*))(Il2CppBase() + 0x1CE0294))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ItemSellPlace*))(Il2CppBase() + 0x1CE0424))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemSellPlace*, uintptr_t))(Il2CppBase() + 0x1CE0954))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ItemSellPlace*, uintptr_t))(Il2CppBase() + 0x1CE095C))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemSellPlace*, uintptr_t))(Il2CppBase() + 0x1CE0964))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemSellPlace*, uintptr_t))(Il2CppBase() + 0x1CE096C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemSellPlace*, uintptr_t))(Il2CppBase() + 0x1CE0974))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ItemSellPlace*))(Il2CppBase() + 0x1CE097C))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemLevel() {
		return ((T (*)(ItemSellPlace*))(Il2CppBase() + 0x1CE0984))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(ItemSellPlace*))(Il2CppBase() + 0x1CE098C))(this);
	}

};

}
