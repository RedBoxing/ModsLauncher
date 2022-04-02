#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FishChipStore {

class FishChipStorePanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FishChipStore", "FishChipStorePanel"));
	}

	template <typename T = uintptr_t> T& fishChipPurchaseController() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& fishChipStoreView() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& fadeInTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& fadeOutTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector2> T& fadeOutTargetPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& alreadyHaveItemImageColor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& alreadyHaveItemTextColor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& normalItemTitleHeight() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& alreadyHaveItemTitleHeight() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& confirmWindowConfig() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& onFadeOutComplete() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& onBackClick() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& comingSoonKey() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& versionNotSupportKey() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& notEnoughFishKey() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& countDownTitleKey() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& countDownDayKey() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& countDownHourKey() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& countDownMinuteKey() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& rewardCloudSaveTipKey() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& characterLockKey() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& rebootGameKey() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& sellCountRemainKey() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& priceDiscountColor() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& priceNormalColor() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& fishChipItemConfig() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& fishAnimDurationPerFish() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& fishAnimMaxTime() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& rewardShowUpPrefab() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppString*> T& workShopLockKey() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& _counter() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& _onShow() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _confirmPanel() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& _confirmStoreItem() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _itemStates() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = int32_t> T& _fishInitCount() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& _fishAnimCounter() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = bool> T& _isFishAnim() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& leftArrow() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& rightArrow() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& _bestFitWaitTime() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0x170);
	}

	template <typename T = void> T add_onFadeOutComplete(uintptr_t value) {
		return ((T (*)(FishChipStorePanel*, uintptr_t))(Il2CppBase() + 0x4503678))(this, value);
	}
	template <typename T = void> T remove_onFadeOutComplete(uintptr_t value) {
		return ((T (*)(FishChipStorePanel*, uintptr_t))(Il2CppBase() + 0x4503764))(this, value);
	}
	template <typename T = void> T add_onBackClick(uintptr_t value) {
		return ((T (*)(FishChipStorePanel*, uintptr_t))(Il2CppBase() + 0x4503850))(this, value);
	}
	template <typename T = void> T remove_onBackClick(uintptr_t value) {
		return ((T (*)(FishChipStorePanel*, uintptr_t))(Il2CppBase() + 0x450393C))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(FishChipStorePanel*))(Il2CppBase() + 0x4503A28))(this);
	}
	template <typename T = void> T FlushStoreItem() {
		return ((T (*)(FishChipStorePanel*))(Il2CppBase() + 0x4504238))(this);
	}
	template <typename T = uintptr_t> static T GetItemSprite(uintptr_t fishChipItemConfig, Il2CppString* itemId) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x45028EC))(0, fishChipItemConfig, itemId);
	}
	template <typename T = uintptr_t> T flushTitleText() {
		return ((T (*)(FishChipStorePanel*))(Il2CppBase() + 0x4505504))(this);
	}
	template <typename T = bool> T IsSupportItem(uintptr_t currentItem) {
		return ((T (*)(FishChipStorePanel*, uintptr_t))(Il2CppBase() + 0x45053E8))(this, currentItem);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FishChipStorePanel*))(Il2CppBase() + 0x45055E4))(this);
	}
	template <typename T = void> T FishAnimUpdate() {
		return ((T (*)(FishChipStorePanel*))(Il2CppBase() + 0x4505758))(this);
	}
	template <typename T = uintptr_t> T CountDownUpdate() {
		return ((T (*)(FishChipStorePanel*))(Il2CppBase() + 0x4505214))(this);
	}
	template <typename T = void> T InteractUpdate() {
		return ((T (*)(FishChipStorePanel*))(Il2CppBase() + 0x450566C))(this);
	}
	template <typename T = void> T StateUpdate() {
		return ((T (*)(FishChipStorePanel*))(Il2CppBase() + 0x45056C8))(this);
	}
	template <typename T = void> T FadeOutUpdate() {
		return ((T (*)(FishChipStorePanel*))(Il2CppBase() + 0x4505A9C))(this);
	}
	template <typename T = void> T FadeInUpdate() {
		return ((T (*)(FishChipStorePanel*))(Il2CppBase() + 0x4505968))(this);
	}
	template <typename T = void> T BackClick() {
		return ((T (*)(FishChipStorePanel*))(Il2CppBase() + 0x4505B7C))(this);
	}
	template <typename T = void> T ToFadeOut() {
		return ((T (*)(FishChipStorePanel*))(Il2CppBase() + 0x4505D6C))(this);
	}
	template <typename T = void> T ItemClick(int32_t index) {
		return ((T (*)(FishChipStorePanel*, int32_t))(Il2CppBase() + 0x4505E94))(this, index);
	}
	template <typename T = void> T Left() {
		return ((T (*)(FishChipStorePanel*))(Il2CppBase() + 0x4506180))(this);
	}
	template <typename T = void> T Right() {
		return ((T (*)(FishChipStorePanel*))(Il2CppBase() + 0x45061E4))(this);
	}
	template <typename T = void> T MoveScroll(float endValue) {
		return ((T (*)(FishChipStorePanel*, float))(Il2CppBase() + 0x4506074))(this, endValue);
	}
	template <typename T = void> T OnValueChanged(Il2CppVector2 pos) {
		return ((T (*)(FishChipStorePanel*, Il2CppVector2))(Il2CppBase() + 0x4503FA0))(this, pos);
	}
	template <typename T = void> T ConfirmWindowConfirmClick() {
		return ((T (*)(FishChipStorePanel*))(Il2CppBase() + 0x4506248))(this);
	}
	template <typename T = void> T ConfirmWindowCancelClick() {
		return ((T (*)(FishChipStorePanel*))(Il2CppBase() + 0x4506A60))(this);
	}
	template <typename T = void> T Show(Il2CppString* source, uintptr_t onShow) {
		return ((T (*)(FishChipStorePanel*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4506ADC))(this, source, onShow);
	}
	template <typename T = void> T OnApplicationPause(bool pauseStatus) {
		return ((T (*)(FishChipStorePanel*, bool))(Il2CppBase() + 0x4506E8C))(this, pauseStatus);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(FishChipStorePanel*))(Il2CppBase() + 0x4507038))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(FishChipStorePanel*, bool))(Il2CppBase() + 0x4507040))(this, value);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(FishChipStorePanel*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4506C2C))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(FishChipStorePanel*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4505C14))(this, objects);
	}
	template <typename T = bool> T OnEvent(uintptr_t navigationEvent) {
		return ((T (*)(FishChipStorePanel*, uintptr_t))(Il2CppBase() + 0x450704C))(this, navigationEvent);
	}
	template <typename T = void> T ConfirmWindowConfirmClickb__65_0() {
		return ((T (*)(FishChipStorePanel*))(Il2CppBase() + 0x45071E8))(this);
	}

};

}
