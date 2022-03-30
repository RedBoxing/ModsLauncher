#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FishChipStore {

class PlutusWindowPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FishChipStore", "PlutusWindowPanel"));
	}

	template <typename T = uintptr_t> T& mainTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& fadeInTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& fadeOutTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector2> T& fadeOutTargetPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& donateRewardProgressTransform() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& donateRewardPreviewImage() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& donateRewardPreviewTransform() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& donateRewardText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector2> T& initDonateRewardTextAnchorMin() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& donateRewardTextTransform() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& driedFishAmountText() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& driedFishItems() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& progressBarParentObject() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& donateRewardController() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& fishChipPurchaseController() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& outlineShader() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& donateRewardTextKey() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& rewardMaxTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& rewardTimePerFishChip() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& fishChipFxParentTransform() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& fishChipFxTransforms() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& fishChipFxTargetTransform() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& fishChipFxFadeInTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& fishChipFxMoveTimePercentage() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& fishChipFxScaleTransforms() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& fxScale() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& fxScaleSmoothTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& fishChipStoreMask() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& fishChipStore() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& rewardShowUpPrefab() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& cnFont() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& onFishReach() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& onBackClick() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& _counter() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = void*> T& _rewardQueue() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int32_t> T& _nextRewardIndex() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> T& _prevRewardDonateAmount() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = int32_t> T& _currentFishChipAmount() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = int32_t> T& _targetFishChipAmount() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = int32_t> T& _extraFishChipAmount() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> T& _donateRewardCount() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& _initRewardImageMaterial() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& _outlineRewardImageMaterial() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = int32_t> static T& ShaderSpriteRectId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _fxModels() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppVector3> T& _currentFxScaleSmoothVelocity() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0x154);
	}

	template <typename T = void> T add_onBackClick(uintptr_t value) {
		return ((T (*)(PlutusWindowPanel*, uintptr_t))(Il2CppBase() + 0x4507A7C))(this, value);
	}
	template <typename T = void> T remove_onBackClick(uintptr_t value) {
		return ((T (*)(PlutusWindowPanel*, uintptr_t))(Il2CppBase() + 0x4507B68))(this, value);
	}
	template <typename T = bool> T get_HasNextDonateReward() {
		return ((T (*)(PlutusWindowPanel*))(Il2CppBase() + 0x4507C54))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PlutusWindowPanel*))(Il2CppBase() + 0x4507D20))(this);
	}
	template <typename T = void> T FishChipButtonInit() {
		return ((T (*)(PlutusWindowPanel*))(Il2CppBase() + 0x450832C))(this);
	}
	template <typename T = void> T InitViewContent() {
		return ((T (*)(PlutusWindowPanel*))(Il2CppBase() + 0x4507F58))(this);
	}
	template <typename T = void> T FlushFishCount() {
		return ((T (*)(PlutusWindowPanel*))(Il2CppBase() + 0x4508C18))(this);
	}
	template <typename T = void> T FlushDonateRewardUI(int32_t cumulativePurchaseFishChip) {
		return ((T (*)(PlutusWindowPanel*, int32_t))(Il2CppBase() + 0x45083CC))(this, cumulativePurchaseFishChip);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PlutusWindowPanel*))(Il2CppBase() + 0x4508D20))(this);
	}
	template <typename T = void> T ImageUpdate() {
		return ((T (*)(PlutusWindowPanel*))(Il2CppBase() + 0x4508E88))(this);
	}
	template <typename T = void> T InteractUpdate() {
		return ((T (*)(PlutusWindowPanel*))(Il2CppBase() + 0x4508D90))(this);
	}
	template <typename T = void> T StateUpdate() {
		return ((T (*)(PlutusWindowPanel*))(Il2CppBase() + 0x4508DEC))(this);
	}
	template <typename T = void> T ScaleUpdate() {
		return ((T (*)(PlutusWindowPanel*))(Il2CppBase() + 0x450A010))(this);
	}
	template <typename T = void> T RewardUpdate() {
		return ((T (*)(PlutusWindowPanel*))(Il2CppBase() + 0x45094A4))(this);
	}
	template <typename T = void> T FadeOutUpdate() {
		return ((T (*)(PlutusWindowPanel*))(Il2CppBase() + 0x4509380))(this);
	}
	template <typename T = void> T FadeInUpdate() {
		return ((T (*)(PlutusWindowPanel*))(Il2CppBase() + 0x4509238))(this);
	}
	template <typename T = void> T ShowInitRewardFx() {
		return ((T (*)(PlutusWindowPanel*))(Il2CppBase() + 0x450A21C))(this);
	}
	template <typename T = void> T BackClick() {
		return ((T (*)(PlutusWindowPanel*))(Il2CppBase() + 0x450A514))(this);
	}
	template <typename T = void> T DriedFishStoreClick() {
		return ((T (*)(PlutusWindowPanel*))(Il2CppBase() + 0x450A7B8))(this);
	}
	template <typename T = void> T BuyDriedFishClick(int32_t index) {
		return ((T (*)(PlutusWindowPanel*, int32_t))(Il2CppBase() + 0x450A990))(this, index);
	}
	template <typename T = void> T BuyDriedFishSuccess(int32_t index) {
		return ((T (*)(PlutusWindowPanel*, int32_t))(Il2CppBase() + 0x450AADC))(this, index);
	}
	template <typename T = void> T Show(Il2CppString* source) {
		return ((T (*)(PlutusWindowPanel*, Il2CppString*))(Il2CppBase() + 0x450B164))(this, source);
	}
	template <typename T = void> T OnApplicationPause(bool pauseStatus) {
		return ((T (*)(PlutusWindowPanel*, bool))(Il2CppBase() + 0x450B478))(this, pauseStatus);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(PlutusWindowPanel*))(Il2CppBase() + 0x450B624))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(PlutusWindowPanel*, bool))(Il2CppBase() + 0x450B62C))(this, value);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(PlutusWindowPanel*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x450B264))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(PlutusWindowPanel*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x450A5C8))(this, objects);
	}
	template <typename T = bool> T OnEvent(uintptr_t navigationEvent) {
		return ((T (*)(PlutusWindowPanel*, uintptr_t))(Il2CppBase() + 0x450B638))(this, navigationEvent);
	}
	template <typename T = void> T RewardUpdateb__61_0() {
		return ((T (*)(PlutusWindowPanel*))(Il2CppBase() + 0x450B810))(this);
	}
	template <typename T = void> T DriedFishStoreClickb__66_0() {
		return ((T (*)(PlutusWindowPanel*))(Il2CppBase() + 0x450B81C))(this);
	}
	template <typename T = void> T DriedFishStoreClickb__66_1() {
		return ((T (*)(PlutusWindowPanel*))(Il2CppBase() + 0x450B828))(this);
	}

};

}
