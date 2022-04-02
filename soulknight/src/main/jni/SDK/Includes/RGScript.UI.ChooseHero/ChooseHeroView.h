#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.ChooseHero {

class ChooseHeroView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.ChooseHero", "ChooseHeroView"));
	}

	template <typename T = uintptr_t> T& buttonDownSprite() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& buttonUpSprite() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& checkboxSelected() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& checkboxUnselected() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& blueLine() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& grayLine() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& startClip() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& tapClip() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& selectSkillClip() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _mask() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _uiLeft() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _uiRight() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _heroName() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _subtitle() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _trailTicketNumText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _heroIcon() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _starsNode() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _buff() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _buffIcon() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _weapon() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _panelBg() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _detailArrow() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _detailBg() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _upgradeButton() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _upgradeTip() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _values() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _skillPanel() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _skinScrollView() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& _leftSkinButton() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& _rightSkinButton() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& _skillDemoCheckbox() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& _buttonGroup() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _unlockButton() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& _unlockWayNode() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& _unlockButtonText() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& _unlockPriceText() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& _confirmButton() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& _confirmButtonScaleSequence() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppVector3> T& _cameraPosBackup() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Il2CppList<int32_t>*> T& _visibleSkins() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& _pet() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& _unlockPrice() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& _shareIcon() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& _unlockHeroFirstNode() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = bool> T& _isAlmostSquareScreen() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& _lineColorSequence() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& _upgradeTipMoveSequence() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& _hasChoseHero() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& _countdown() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& _upgradeHeroPopupWindow() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& _skillDetail() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& _scrollView() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& _scrollViewContent() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& _descriptionText() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& _skillDemoTip() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = bool> T& _hasCalledOnShow() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = float> T& _lastScrollerPosition() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = uintptr_t> static T& GrayColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& AttributesMaxNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& NodeNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ShowEndValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& HideEndValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = int32_t> static T& UILeftNodeIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& AnimationDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& SkillsPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = int32_t> static T& Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> T OnCloseButtonClicked() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44EB9CC))(this);
	}
	template <typename T = void> T OnUpgradeButtonClicked() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44EBB50))(this);
	}
	template <typename T = void> T OnBuffButtonClicked() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44EBC54))(this);
	}
	template <typename T = void> T OnWeaponButtonClicked() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44EBD5C))(this);
	}
	template <typename T = void> T OnSelectionChanged(int32_t index) {
		return ((T (*)(ChooseHeroView*, int32_t))(Il2CppBase() + 0x44EBE64))(this, index);
	}
	template <typename T = void> T OnScrollerValueChanged(float position) {
		return ((T (*)(ChooseHeroView*, float))(Il2CppBase() + 0x44EBF60))(this, position);
	}
	template <typename T = void> T OnLeftSkinButtonClicked() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44EC11C))(this);
	}
	template <typename T = void> T OnRightSkinButtonClicked() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44EC1E0))(this);
	}
	template <typename T = void> T OnSkillDemoCheckboxClicked() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44EC2A4))(this);
	}
	template <typename T = void> T OnSkillDetailButtonClicked() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44EC3B0))(this);
	}
	template <typename T = void> T OnSkillButtonClicked(int32_t index) {
		return ((T (*)(ChooseHeroView*, int32_t))(Il2CppBase() + 0x44EC4DC))(this, index);
	}
	template <typename T = void> static T OnShopButtonClicked() {
		return ((T (*)(void *))(Il2CppBase() + 0x44EC60C))(0);
	}
	template <typename T = void> static T OnHomeButtonClicked() {
		return ((T (*)(void *))(Il2CppBase() + 0x44EC6D8))(0);
	}
	template <typename T = void> static T OnKtPlayButtonClicked() {
		return ((T (*)(void *))(Il2CppBase() + 0x44EC7B0))(0);
	}
	template <typename T = void> T OnRewardButtonClicked() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44EC8BC))(this);
	}
	template <typename T = void> T OnUnlockSkillButtonClicked() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44ECA5C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44ECB64))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44ECCBC))(this);
	}
	template <typename T = void> T IAPRestoreHero(uintptr_t hero) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44ECE14))(this, hero);
	}
	template <typename T = void> T IAPRestoreSkin(uintptr_t hero, int32_t skinIndex) {
		return ((T (*)(ChooseHeroView*, uintptr_t, int32_t))(Il2CppBase() + 0x44ECF2C))(this, hero, skinIndex);
	}
	template <typename T = void> T IAPRestoreSkill(uintptr_t hero, int32_t skillIndex) {
		return ((T (*)(ChooseHeroView*, uintptr_t, int32_t))(Il2CppBase() + 0x44ED044))(this, hero, skillIndex);
	}
	template <typename T = void> T OnUnlockButtonClicked() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44ED15C))(this);
	}
	template <typename T = void> T OnConfirmButtonClicked() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44ED2F4))(this);
	}
	template <typename T = void> T OnUnlockHeroFirstButtonClicked() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44ED418))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44ED520))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44EF2C8))(this);
	}
	template <typename T = void> static T SkillDemonstrationChangeSkin(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44EF36C))(0, data);
	}
	template <typename T = void> T DoSkillDemonstration(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44EF588))(this, data);
	}
	template <typename T = void> T ExitSkillDemonstration() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44EFB04))(this);
	}
	template <typename T = void> T ShowOrHideView(bool show) {
		return ((T (*)(ChooseHeroView*, bool))(Il2CppBase() + 0x44EFDCC))(this, show);
	}
	template <typename T = void> T ShowOrHideGroupButton(bool show) {
		return ((T (*)(ChooseHeroView*, bool))(Il2CppBase() + 0x44F0238))(this, show);
	}
	template <typename T = void> T RefreshName(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F0430))(this, data);
	}
	template <typename T = void> T RefreshHeroIcon(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F0650))(this, data);
	}
	template <typename T = void> T RefreshHeroStars(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F07BC))(this, data);
	}
	template <typename T = void> T RefreshHeroAttributes(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F0B54))(this, data);
	}
	template <typename T = void> T DoUpgradeTipMove() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44F0EBC))(this);
	}
	template <typename T = void> T RefreshBuffAndWeaponButtonState(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F11C4))(this, data);
	}
	template <typename T = void> T FoldPanel(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F14E8))(this, data);
	}
	template <typename T = void> T UnfoldPanel(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F180C))(this, data);
	}
	template <typename T = void> T RefreshPassiveSkill(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F1CE4))(this, data);
	}
	template <typename T = void> T RefreshWeaponData(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F210C))(this, data);
	}
	template <typename T = void> T RefreshSkills(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F2574))(this, data);
	}
	template <typename T = void> T DoLineColor(uintptr_t line) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F3E78))(this, line);
	}
	template <typename T = uintptr_t> T FixedSkillDescriptionSize(bool isSkillUnlocked) {
		return ((T (*)(ChooseHeroView*, bool))(Il2CppBase() + 0x44F3FD8))(this, isSkillUnlocked);
	}
	template <typename T = void> T RefreshSkillDetail(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F3030))(this, data);
	}
	template <typename T = void> T RefreshSkinScrollView(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F40E8))(this, data);
	}
	template <typename T = void> T RefreshSkillDemoCheckbox(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F4674))(this, data);
	}
	template <typename T = void> T RefreshUnlockArea(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F47F4))(this, data);
	}
	template <typename T = void> T DoConfirmButtonScale() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44F5074))(this);
	}
	template <typename T = void> T EndConfirmButtonScale() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44F521C))(this);
	}
	template <typename T = void> T RefreshConfirmButton(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F52E0))(this, data);
	}
	template <typename T = bool> T IsSkinInVisibleList(int32_t skinIndex) {
		return ((T (*)(ChooseHeroView*, int32_t))(Il2CppBase() + 0x44F56F4))(this, skinIndex);
	}
	template <typename T = void> T RefreshRedPoint(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F5808))(this, data);
	}
	template <typename T = void> T OnShow(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F5D80))(this, data);
	}
	template <typename T = uintptr_t> static T RestoreHeroSkinInRoom(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44F6460))(0, data);
	}
	template <typename T = void> T DoBackHide(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F6588))(this, data);
	}
	template <typename T = void> T DoConfirmBack(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F68D0))(this, data);
	}
	template <typename T = void> T OnHide(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F6AE8))(this, data);
	}
	template <typename T = void> T OnRefresh(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F6CE0))(this, data);
	}
	template <typename T = void> T OnChangeSkin(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F6F20))(this, data);
	}
	template <typename T = void> static T UnLockEffect(uintptr_t data, uintptr_t sprite, Il2CppString* text) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x44F732C))(0, data, sprite, text);
	}
	template <typename T = void> T OnUnlockSkill(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F75A0))(this, data);
	}
	template <typename T = void> T OnUnlockHero(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F79A0))(this, data);
	}
	template <typename T = void> T OnUnlockSkin(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F7CC4))(this, data);
	}
	template <typename T = uintptr_t> T DoHeroConfirm(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F69AC))(this, data);
	}
	template <typename T = uintptr_t> T ResetSkill(bool needDelay) {
		return ((T (*)(ChooseHeroView*, bool))(Il2CppBase() + 0x44F81D8))(this, needDelay);
	}
	template <typename T = void> T ClickConfirmButton(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F82E8))(this, data);
	}
	template <typename T = void> T OnSwitchSkill(uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t))(Il2CppBase() + 0x44F8770))(this, data);
	}
	template <typename T = void> T ProcessMessage(uintptr_t command, uintptr_t data) {
		return ((T (*)(ChooseHeroView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x44F88C4))(this, command, data);
	}
	template <typename T = void> T OnBackButtonClicked() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44F8FF4))(this);
	}
	template <typename T = Il2CppVector2> T DoSkillDemonstrationb__86_0() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44F9718))(this);
	}
	template <typename T = void> T DoSkillDemonstrationb__86_1(Il2CppVector2 anchoredPosition) {
		return ((T (*)(ChooseHeroView*, Il2CppVector2))(Il2CppBase() + 0x44F9748))(this, anchoredPosition);
	}
	template <typename T = Il2CppVector2> T ExitSkillDemonstrationb__87_0() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44F9790))(this);
	}
	template <typename T = void> T ExitSkillDemonstrationb__87_1(Il2CppVector2 anchoredPosition) {
		return ((T (*)(ChooseHeroView*, Il2CppVector2))(Il2CppBase() + 0x44F97C0))(this, anchoredPosition);
	}
	template <typename T = Il2CppVector2> T DoUpgradeTipMoveb__99_0() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44F9808))(this);
	}
	template <typename T = void> T DoUpgradeTipMoveb__99_1(Il2CppVector2 anchoredPosition) {
		return ((T (*)(ChooseHeroView*, Il2CppVector2))(Il2CppBase() + 0x44F9838))(this, anchoredPosition);
	}
	template <typename T = Il2CppVector2> T DoUpgradeTipMoveb__99_2() {
		return ((T (*)(ChooseHeroView*))(Il2CppBase() + 0x44F9880))(this);
	}
	template <typename T = void> T DoUpgradeTipMoveb__99_3(Il2CppVector2 anchoredPosition) {
		return ((T (*)(ChooseHeroView*, Il2CppVector2))(Il2CppBase() + 0x44F98B0))(this, anchoredPosition);
	}

};

}
