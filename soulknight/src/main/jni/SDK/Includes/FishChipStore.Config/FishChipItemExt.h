#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FishChipStore.Config {

class FishChipItemExt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FishChipStore.Config", "FishChipItemExt"));
	}


	template <typename T = void> static T GetSkinInfo(uintptr_t itemConfig, uintptr_t* hero, uintptr_t* skinIndex) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x447CB14))(0, itemConfig, hero, skinIndex);
	}
	template <typename T = void> static T GetSkillInfo(uintptr_t itemConfig, uintptr_t* hero, uintptr_t* skillIndex) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x447D62C))(0, itemConfig, hero, skillIndex);
	}
	template <typename T = uintptr_t> static T GetPetInfo(uintptr_t itemConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x447D34C))(0, itemConfig);
	}
	template <typename T = uint16_t> static T GetMultiRoomSkinInfo(uintptr_t itemConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x447D4BC))(0, itemConfig);
	}
	template <typename T = bool> static T IsSkinFragment(uintptr_t itemConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x447CF34))(0, itemConfig);
	}
	template <typename T = bool> static T IsSkillFragment(uintptr_t itemConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x447D140))(0, itemConfig);
	}
	template <typename T = bool> static T IsToken(uintptr_t itemConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4480E0C))(0, itemConfig);
	}
	template <typename T = bool> static T IsWeaponToken(uintptr_t itemConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x447F224))(0, itemConfig);
	}
	template <typename T = bool> static T HasComposedSprite(uintptr_t item, uintptr_t storeItem) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4481F54))(0, item, storeItem);
	}
	template <typename T = bool> static T IsBundle(uintptr_t itemConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4482008))(0, itemConfig);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBundleItemModels(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x447EC74))(0, item);
	}
	template <typename T = int32_t> static T GetTokenLevel(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x447F318))(0, item);
	}
	template <typename T = Il2CppString*> static T GetWeaponTokenFullName(uintptr_t item, uintptr_t storeItem) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4481064))(0, item, storeItem);
	}
	template <typename T = Il2CppString*> static T GetBundleItemName(uintptr_t itemModel) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44820A8))(0, itemModel);
	}
	template <typename T = int32_t> static T GetItemCount(uintptr_t storeItem) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x447EF14))(0, storeItem);
	}
	template <typename T = bool> static T HasItemSpecific(uintptr_t storeItem) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x447F0C4))(0, storeItem);
	}
	template <typename T = Il2CppString*> static T GetItemSpecific(uintptr_t storeItem) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x447C64C))(0, storeItem);
	}
	template <typename T = int32_t> static T GetPurchaseCount(uintptr_t storeItem) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4481898))(0, storeItem);
	}
	template <typename T = bool> static T HasCustomTag(uintptr_t storeItem, Il2CppString* tag) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4481534))(0, storeItem, tag);
	}
	template <typename T = bool> static T IsSpecificMaterial(uintptr_t storeItem) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x447EA78))(0, storeItem);
	}
	template <typename T = bool> static T IsSpecificBluePrint(uintptr_t storeItem) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x447C410))(0, storeItem);
	}
	template <typename T = bool> static T IsSupportSpecificMaterial(uintptr_t storeItem) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4480B10))(0, storeItem);
	}
	template <typename T = bool> static T IsSupportSpecificBlueprint(uintptr_t storeItem) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4480BF8))(0, storeItem);
	}
	template <typename T = uintptr_t> static T GetSpecificType(uintptr_t storeItem) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x447C4C0))(0, storeItem);
	}
	template <typename T = uintptr_t> static T SpecificPickableInfo(uintptr_t storeItem) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x447F470))(0, storeItem);
	}
	template <typename T = bool> static T IsCountLimited(uintptr_t storeItem) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x447FBF4))(0, storeItem);
	}
	template <typename T = int32_t> static T GetCountLimitation(uintptr_t storeItem) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x447FD78))(0, storeItem);
	}
	template <typename T = uintptr_t> static T GetItemTitleColor(uintptr_t currentItem, uintptr_t currentConfig) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x44821E8))(0, currentItem, currentConfig);
	}

};

}
