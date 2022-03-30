#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIArtifactsUpgrade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIArtifactsUpgrade"));
	}

	template <typename T = uintptr_t> T& buttonContinue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& upgradeFX() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& upgradeFailFX() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& textBubble() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& partsContainer() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& coinValue() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& atkText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& consumeText() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& critText() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& selectionPanel1() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& selectionPanel2() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& choosedPartDisplayPosition() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& refreshLimitObj() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& partSelectedPointer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& acLevelupPrepare() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& acLevelupSuccess1() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& acLevelupSuccess2() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& acLevelupFail() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& acRefresh() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& cmdList() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& refreshCount() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& onContinue() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _weapon() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& currentPart() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& talkSequence() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _displayedPanel1() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& refreshBlinkSequence() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& _displayedSelectionPanel2() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& textAnim() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& oldCoinValue() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> T& oriTextBubbleFontSize() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& customTouchBlockerCallback() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& onClickTouchBlocker() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(UIArtifactsUpgrade*))(Il2CppBase() + 0x441FF08))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIArtifactsUpgrade*))(Il2CppBase() + 0x441FFCC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIArtifactsUpgrade*))(Il2CppBase() + 0x4420090))(this);
	}
	template <typename T = void> T UpdateRefreshCostText() {
		return ((T (*)(UIArtifactsUpgrade*))(Il2CppBase() + 0x4420180))(this);
	}
	template <typename T = void> T DisplayWeapon(uintptr_t weapon) {
		return ((T (*)(UIArtifactsUpgrade*, uintptr_t))(Il2CppBase() + 0x44202F8))(this, weapon);
	}
	template <typename T = void> T UpdateStat() {
		return ((T (*)(UIArtifactsUpgrade*))(Il2CppBase() + 0x4420D48))(this);
	}
	template <typename T = void> T OnClickContinue() {
		return ((T (*)(UIArtifactsUpgrade*))(Il2CppBase() + 0x44213B8))(this);
	}
	template <typename T = void> T PlayClickSound() {
		return ((T (*)(UIArtifactsUpgrade*))(Il2CppBase() + 0x4421434))(this);
	}
	template <typename T = void> T PlayClickErrorSound() {
		return ((T (*)(UIArtifactsUpgrade*))(Il2CppBase() + 0x44214F4))(this);
	}
	template <typename T = void> T OnChoosePart(uintptr_t partSlot, uintptr_t part, bool reorderComponents) {
		return ((T (*)(UIArtifactsUpgrade*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x44215B4))(this, partSlot, part, reorderComponents);
	}
	template <typename T = void> T DisplayUpgradeComponentListPanel(uintptr_t partSlot, uintptr_t part) {
		return ((T (*)(UIArtifactsUpgrade*, uintptr_t, uintptr_t))(Il2CppBase() + 0x44221D4))(this, partSlot, part);
	}
	template <typename T = void> T DisplayRefreshComponentListPanel(uintptr_t partSlot, uintptr_t part) {
		return ((T (*)(UIArtifactsUpgrade*, uintptr_t, uintptr_t))(Il2CppBase() + 0x442318C))(this, partSlot, part);
	}
	template <typename T = uintptr_t> T DisplayComponentList(uintptr_t partSlot, uintptr_t part, Il2CppList<uintptr_t>* components, void* onGetConsume, void* onChoose, Il2CppString* type) {
		return ((T (*)(UIArtifactsUpgrade*, uintptr_t, uintptr_t, Il2CppList<uintptr_t>*, void*, void*, Il2CppString*))(Il2CppBase() + 0x442248C))(this, partSlot, part, components, onGetConsume, onChoose, type);
	}
	template <typename T = void> T BlockTouch(bool b, bool all, uintptr_t onClick) {
		return ((T (*)(UIArtifactsUpgrade*, bool, bool, uintptr_t))(Il2CppBase() + 0x442128C))(this, b, all, onClick);
	}
	template <typename T = void> T UpdateCoin(bool animated) {
		return ((T (*)(UIArtifactsUpgrade*, bool))(Il2CppBase() + 0x4420FFC))(this, animated);
	}
	template <typename T = void> T NPCTalk(Il2CppString* key, Il2CppString* defaultContent, Il2CppArray<uintptr_t>* paramList, uintptr_t sequence) {
		return ((T (*)(UIArtifactsUpgrade*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4423414))(this, key, defaultContent, paramList, sequence);
	}
	template <typename T = void> T HideTalkBubble() {
		return ((T (*)(UIArtifactsUpgrade*))(Il2CppBase() + 0x442399C))(this);
	}
	template <typename T = void> T SimpleTalk(Il2CppString* key, Il2CppString* defaultContent, Il2CppArray<uintptr_t>* paramList) {
		return ((T (*)(UIArtifactsUpgrade*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4423B0C))(this, key, defaultContent, paramList);
	}
	template <typename T = void> T OnClickTouchBlocker() {
		return ((T (*)(UIArtifactsUpgrade*))(Il2CppBase() + 0x4423C7C))(this);
	}
	template <typename T = void> T PlayEfx(uintptr_t efxPrefab, Il2CppVector3 pos, uintptr_t color, float scale) {
		return ((T (*)(UIArtifactsUpgrade*, uintptr_t, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x4423CFC))(this, efxPrefab, pos, color, scale);
	}
	template <typename T = void> T PlayEfx_1(uintptr_t efxPrefab, Il2CppVector3 pos, float scale) {
		return ((T (*)(UIArtifactsUpgrade*, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x4424000))(this, efxPrefab, pos, scale);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIArtifactsUpgrade*))(Il2CppBase() + 0x4424248))(this);
	}
	template <typename T = int32_t> T UpdateCoinb__44_0() {
		return ((T (*)(UIArtifactsUpgrade*))(Il2CppBase() + 0x4424344))(this);
	}
	template <typename T = void> T UpdateCoinb__44_1(int32_t v) {
		return ((T (*)(UIArtifactsUpgrade*, int32_t))(Il2CppBase() + 0x442434C))(this, v);
	}
	template <typename T = void> T SimpleTalkb__48_0() {
		return ((T (*)(UIArtifactsUpgrade*))(Il2CppBase() + 0x44243A8))(this);
	}

};

}
