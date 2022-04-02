#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemSellPlaceGem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemSellPlaceGem"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& replace_clip() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& itemType() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& minLevel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& maxLevel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& unlockByTv() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& additionObjects() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& the_item() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = uintptr_t> T get_roomSeller() {
		return ((T (*)(ItemSellPlaceGem*))(Il2CppBase() + 0x1CE22F4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ItemSellPlaceGem*))(Il2CppBase() + 0x1CE23B4))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(ItemSellPlaceGem*, int32_t))(Il2CppBase() + 0x1CE25BC))(this, seed);
	}
	template <typename T = void> T ChangeComodity() {
		return ((T (*)(ItemSellPlaceGem*))(Il2CppBase() + 0x1CDD898))(this);
	}
	template <typename T = void> T ResetComodity() {
		return ((T (*)(ItemSellPlaceGem*))(Il2CppBase() + 0x1CE2678))(this);
	}
	template <typename T = uintptr_t> T InstantiateCommodity(Il2CppString* commodityName) {
		return ((T (*)(ItemSellPlaceGem*, Il2CppString*))(Il2CppBase() + 0x1CE2E74))(this, commodityName);
	}
	template <typename T = void> T CreateComodity() {
		return ((T (*)(ItemSellPlaceGem*))(Il2CppBase() + 0x1CE28EC))(this);
	}
	template <typename T = Il2CppString*> T GetRandomComodity() {
		return ((T (*)(ItemSellPlaceGem*))(Il2CppBase() + 0x1CE2F60))(this);
	}
	template <typename T = void> T SetCommodity(uintptr_t commodity) {
		return ((T (*)(ItemSellPlaceGem*, uintptr_t))(Il2CppBase() + 0x1CE37BC))(this, commodity);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ItemSellPlaceGem*, uintptr_t))(Il2CppBase() + 0x1CE3C08))(this, controller);
	}
	template <typename T = void> T GetItem(uintptr_t controller) {
		return ((T (*)(ItemSellPlaceGem*, uintptr_t))(Il2CppBase() + 0x1CE4284))(this, controller);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemSellPlaceGem*, uintptr_t))(Il2CppBase() + 0x1CE47C4))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ItemSellPlaceGem*, uintptr_t))(Il2CppBase() + 0x1CE4E74))(this, other);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemSellPlaceGem*, uintptr_t))(Il2CppBase() + 0x1CE5054))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ItemSellPlaceGem*))(Il2CppBase() + 0x1CE50D0))(this);
	}
	template <typename T = bool> T AdReady() {
		return ((T (*)(ItemSellPlaceGem*))(Il2CppBase() + 0x1CE41D4))(this);
	}
	template <typename T = bool> T SupportTv() {
		return ((T (*)(ItemSellPlaceGem*))(Il2CppBase() + 0x1CE2518))(this);
	}
	template <typename T = bool> T SupportPurchase() {
		return ((T (*)(ItemSellPlaceGem*))(Il2CppBase() + 0x1CE5218))(this);
	}
	template <typename T = void> T ShowUILoading() {
		return ((T (*)(ItemSellPlaceGem*))(Il2CppBase() + 0x1CE5278))(this);
	}
	template <typename T = void> T HideUILoading() {
		return ((T (*)(ItemSellPlaceGem*))(Il2CppBase() + 0x1CE544C))(this);
	}
	template <typename T = void> T BtnClick1() {
		return ((T (*)(ItemSellPlaceGem*))(Il2CppBase() + 0x1CE556C))(this);
	}
	template <typename T = void> T BtnClick2() {
		return ((T (*)(ItemSellPlaceGem*))(Il2CppBase() + 0x1CE56B8))(this);
	}
	template <typename T = void> T BtnClick1b__31_0() {
		return ((T (*)(ItemSellPlaceGem*))(Il2CppBase() + 0x1CE5798))(this);
	}
	template <typename T = void> T BtnClick1b__31_1() {
		return ((T (*)(ItemSellPlaceGem*))(Il2CppBase() + 0x1CE5864))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(ItemSellPlaceGem*, int32_t))(Il2CppBase() + 0x1CE58F0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(ItemSellPlaceGem*, uintptr_t))(Il2CppBase() + 0x1CE58F8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemSellPlaceGem*, uintptr_t))(Il2CppBase() + 0x1CE5900))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ItemSellPlaceGem*, uintptr_t))(Il2CppBase() + 0x1CE5908))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemSellPlaceGem*, uintptr_t))(Il2CppBase() + 0x1CE5910))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(ItemSellPlaceGem*))(Il2CppBase() + 0x1CE5918))(this);
	}

};

}
