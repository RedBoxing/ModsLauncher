#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemMountSeller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemMountSeller"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& distributions() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& distributions2() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& talkSellQuest() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& talkSellSucess() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& talkSellFail() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& talkSellUpdateQuest() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& talkSellUpdateSuccess() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppString*> T& talkSellUpdateWeapon() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& mountPriceUpdateFactor() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& exclamationRenderer() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& updatedSecondaryWeaponMechList() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& itemPosition() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& target_mount() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = void*> T& _controllerCache() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = void*> T& _updateSecondaryWeaponMechSet() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = int32_t> T get_MountUpdatePrice() {
		return ((T (*)(ItemMountSeller*))(Il2CppBase() + 0x1DAF65C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ItemMountSeller*))(Il2CppBase() + 0x1DAF734))(this);
	}
	template <typename T = void> T OnControllerInRange(int32_t colliderCount, Il2CppArray<uintptr_t>* controllerColliders) {
		return ((T (*)(ItemMountSeller*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DAF8C4))(this, colliderCount, controllerColliders);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(ItemMountSeller*, int32_t))(Il2CppBase() + 0x1DAFB38))(this, seed);
	}
	template <typename T = void> T StripMount() {
		return ((T (*)(ItemMountSeller*))(Il2CppBase() + 0x1DAFE1C))(this);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemMountSeller*, uintptr_t))(Il2CppBase() + 0x1DB0024))(this, controller);
	}
	template <typename T = void> T SellOutTalk(uintptr_t controller) {
		return ((T (*)(ItemMountSeller*, uintptr_t))(Il2CppBase() + 0x1DB02A4))(this, controller);
	}
	template <typename T = void> T BeforeSellMountTalk() {
		return ((T (*)(ItemMountSeller*))(Il2CppBase() + 0x1DB04DC))(this);
	}
	template <typename T = Il2CppString*> T ColoredPriceString(Il2CppString* content, int32_t itemValue) {
		return ((T (*)(ItemMountSeller*, Il2CppString*, int32_t))(Il2CppBase() + 0x1DB0A48))(this, content, itemValue);
	}
	template <typename T = void> T BeforeSellUpdateTalk() {
		return ((T (*)(ItemMountSeller*))(Il2CppBase() + 0x1DB08C4))(this);
	}
	template <typename T = void> T SellMountFailTalk(uintptr_t controller) {
		return ((T (*)(ItemMountSeller*, uintptr_t))(Il2CppBase() + 0x1DB07C0))(this, controller);
	}
	template <typename T = void> T UnknownStateTalk(uintptr_t controller) {
		return ((T (*)(ItemMountSeller*, uintptr_t))(Il2CppBase() + 0x1DB066C))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemMountSeller*, uintptr_t))(Il2CppBase() + 0x1DB0B9C))(this, controller);
	}
	template <typename T = void> T SuccessConsume(int32_t coinValue, uintptr_t controller) {
		return ((T (*)(ItemMountSeller*, int32_t, uintptr_t))(Il2CppBase() + 0x1DB10C8))(this, coinValue, controller);
	}
	template <typename T = void> T MakeMountEnable(uintptr_t mount) {
		return ((T (*)(ItemMountSeller*, uintptr_t))(Il2CppBase() + 0x1DB12F0))(this, mount);
	}
	template <typename T = void> T SellMountSuccess(uintptr_t controller) {
		return ((T (*)(ItemMountSeller*, uintptr_t))(Il2CppBase() + 0x1DB0C94))(this, controller);
	}
	template <typename T = void> T SellUpdateSuccess(uintptr_t controller) {
		return ((T (*)(ItemMountSeller*, uintptr_t))(Il2CppBase() + 0x1DB0DDC))(this, controller);
	}
	template <typename T = void> T TalkSellMountSuccess() {
		return ((T (*)(ItemMountSeller*))(Il2CppBase() + 0x1DB14A0))(this);
	}
	template <typename T = void> T TalkSellUpdateSuccess() {
		return ((T (*)(ItemMountSeller*))(Il2CppBase() + 0x1DB155C))(this);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemMountSeller*, uintptr_t))(Il2CppBase() + 0x1DB1618))(this, controller);
	}
	template <typename T = bool> T CanTriggerMountUpdate(uintptr_t controller) {
		return ((T (*)(ItemMountSeller*, uintptr_t))(Il2CppBase() + 0x1DB0F3C))(this, controller);
	}
	template <typename T = uintptr_t> T GetCurrentState(uintptr_t controller) {
		return ((T (*)(ItemMountSeller*, uintptr_t))(Il2CppBase() + 0x1DB015C))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(ItemMountSeller*, int32_t))(Il2CppBase() + 0x1DB17E8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemMountSeller*, uintptr_t))(Il2CppBase() + 0x1DB17F0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemMountSeller*, uintptr_t))(Il2CppBase() + 0x1DB17F8))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemMountSeller*, uintptr_t))(Il2CppBase() + 0x1DB1800))(this, P0);
	}

};

}
