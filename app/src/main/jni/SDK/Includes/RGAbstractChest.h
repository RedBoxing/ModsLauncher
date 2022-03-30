#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGAbstractChest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGAbstractChest"));
	}

	template <typename T = bool> T& openOnApproach() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& statisticKey() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& itemParent() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& hasCustomOpenEffect() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& openEffectPrefab() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& onEmptyChestOpen() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& onOpen() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& _isEmptyChest() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGAbstractChest*))(Il2CppBase() + 0x1BA54B0))(this);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(RGAbstractChest*))(Il2CppBase() + 0x1BA56C0))(this);
	}
	template <typename T = void> T SetChestEmpty() {
		return ((T (*)(RGAbstractChest*))(Il2CppBase() + 0x1BA5878))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(RGAbstractChest*))(Il2CppBase() + 0x1BA592C))(this);
	}
	template <typename T = void> T OnHide() {
		return ((T (*)(RGAbstractChest*))(Il2CppBase() + 0x1BA59AC))(this);
	}
	template <typename T = void> T OpenChest(uintptr_t rgController) {
		return ((T (*)(RGAbstractChest*, uintptr_t))(Il2CppBase() + 0x1BA5A2C))(this, rgController);
	}
	template <typename T = void> T OpenChestEffect() {
		return ((T (*)(RGAbstractChest*))(Il2CppBase() + 0x1BA5E48))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGAbstractChest*, uintptr_t))(Il2CppBase() + 0x1BA6220))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(RGAbstractChest*, uintptr_t))(Il2CppBase() + 0x1BA66A8))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(RGAbstractChest*, uintptr_t))(Il2CppBase() + 0x1BA646C))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(RGAbstractChest*))(Il2CppBase() + 0x1BA6868))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(RGAbstractChest*))(Il2CppBase() + 0x1BA68C8))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(RGAbstractChest*))(Il2CppBase() + 0x1BA6958))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(RGAbstractChest*))(Il2CppBase() + 0x1BA69B8))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(RGAbstractChest*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1BA6A2C))(this, controller, ext_info);
	}
	template <typename T = void> T StatisticItem() {
		return ((T (*)(RGAbstractChest*))(Il2CppBase() + 0x1BA55D4))(this);
	}

};

}
