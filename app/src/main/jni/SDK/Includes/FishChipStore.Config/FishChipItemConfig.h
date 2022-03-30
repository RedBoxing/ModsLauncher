#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FishChipStore.Config {

class FishChipItemConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FishChipStore.Config", "FishChipItemConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& items() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& itemSprites() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& composedItemSprites() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& characterOriginSprite() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& tokenWeaponView() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& bluePrintView() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& seedView() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _itemDic() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T get_ItemDic() {
		return ((T (*)(FishChipItemConfig*))(Il2CppBase() + 0x447BFB8))(this);
	}
	template <typename T = bool> T HasOwnItem(uintptr_t storeItem) {
		return ((T (*)(FishChipItemConfig*, uintptr_t))(Il2CppBase() + 0x447C188))(this, storeItem);
	}
	template <typename T = bool> T HasOwnSkillFragment(uintptr_t storeItem) {
		return ((T (*)(FishChipItemConfig*, uintptr_t))(Il2CppBase() + 0x447D244))(this, storeItem);
	}
	template <typename T = bool> T HasOwnSkinFragment(uintptr_t storeItem) {
		return ((T (*)(FishChipItemConfig*, uintptr_t))(Il2CppBase() + 0x447D038))(this, storeItem);
	}
	template <typename T = void> T BuyItem(uintptr_t confirmStoreItem) {
		return ((T (*)(FishChipItemConfig*, uintptr_t))(Il2CppBase() + 0x447DB48))(this, confirmStoreItem);
	}
	template <typename T = void> T BuySpecificMaterial(uintptr_t storeItem) {
		return ((T (*)(FishChipItemConfig*, uintptr_t))(Il2CppBase() + 0x447EB28))(this, storeItem);
	}
	template <typename T = int32_t> T GetSkinMaterialCount(uintptr_t storeItem) {
		return ((T (*)(FishChipItemConfig*, uintptr_t))(Il2CppBase() + 0x447D984))(this, storeItem);
	}
	template <typename T = int32_t> T GetSkillMaterialCount(uintptr_t storeItem) {
		return ((T (*)(FishChipItemConfig*, uintptr_t))(Il2CppBase() + 0x447D7C0))(this, storeItem);
	}
	template <typename T = int32_t> T GetItemPrice(uintptr_t storeItem) {
		return ((T (*)(FishChipItemConfig*, uintptr_t))(Il2CppBase() + 0x4480254))(this, storeItem);
	}
	template <typename T = int32_t> T GetSkillMaterialExpectCount(uintptr_t configItem) {
		return ((T (*)(FishChipItemConfig*, uintptr_t))(Il2CppBase() + 0x447FF30))(this, configItem);
	}
	template <typename T = int32_t> T GetSkinMaterialExpectCount(uintptr_t configItem) {
		return ((T (*)(FishChipItemConfig*, uintptr_t))(Il2CppBase() + 0x447F51C))(this, configItem);
	}
	template <typename T = Il2CppString*> T GetItemFullName(uintptr_t storeItem) {
		return ((T (*)(FishChipItemConfig*, uintptr_t))(Il2CppBase() + 0x44803B0))(this, storeItem);
	}
	template <typename T = Il2CppString*> static T GetSpecificMaterialName(uintptr_t storeItem) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4480CE0))(0, storeItem);
	}
	template <typename T = Il2CppString*> T GetItemSubTitle(Il2CppString* id) {
		return ((T (*)(FishChipItemConfig*, Il2CppString*))(Il2CppBase() + 0x4480EAC))(this, id);
	}
	template <typename T = Il2CppString*> T GetItemTitle(uintptr_t storeItem) {
		return ((T (*)(FishChipItemConfig*, uintptr_t))(Il2CppBase() + 0x447E614))(this, storeItem);
	}
	template <typename T = uintptr_t> T CreateComposedItemView(uintptr_t storeItem, uintptr_t parentTransform) {
		return ((T (*)(FishChipItemConfig*, uintptr_t, uintptr_t))(Il2CppBase() + 0x448119C))(this, storeItem, parentTransform);
	}
	template <typename T = bool> T IsForLockedCharacter(uintptr_t storeItem) {
		return ((T (*)(FishChipItemConfig*, uintptr_t))(Il2CppBase() + 0x44813F8))(this, storeItem);
	}
	template <typename T = bool> T IsLimitPurchaseTime(uintptr_t storeItem) {
		return ((T (*)(FishChipItemConfig*, uintptr_t))(Il2CppBase() + 0x447C7F4))(this, storeItem);
	}
	template <typename T = void*> T IsLockArea(uintptr_t storeItem) {
		return ((T (*)(FishChipItemConfig*, uintptr_t))(Il2CppBase() + 0x448166C))(this, storeItem);
	}
	template <typename T = int32_t> T GetPurchaseTimeLeft(uintptr_t storeItem) {
		return ((T (*)(FishChipItemConfig*, uintptr_t))(Il2CppBase() + 0x447C898))(this, storeItem);
	}
	template <typename T = void> T CreateSpecificMaterialView(uintptr_t currentItem, uintptr_t spriteImage, uintptr_t spriteImageRectTransform) {
		return ((T (*)(FishChipItemConfig*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4481A48))(this, currentItem, spriteImage, spriteImageRectTransform);
	}
	template <typename T = void> T CreateSpecificComposedView(uintptr_t spriteImage, uintptr_t rectTransform, uintptr_t materialPrefab, uintptr_t viewPrefab) {
		return ((T (*)(FishChipItemConfig*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4481C18))(this, spriteImage, rectTransform, materialPrefab, viewPrefab);
	}

};

}
